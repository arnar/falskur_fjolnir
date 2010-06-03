#include "iofilter.h"

using namespace ff;
using namespace std;

/* translate strengir byrjar á staf 128, stafir
   sem ekki finnast í target stafasetti eru settir sem
   stafurinn \137 ('_') */

const char* ff::_trans_861_iso =
	"\307\374\351\342\344\340\345\347\352\353\350\320\360\336\304"
	"\305\311\346\306\364\366\376\373\335\375\326\334\370\243\330"
	"\137\137\341\355\363\372\301\315\323\332\277\137\254\275\274"
	"\241\253\273\137\137\137\137\137\137\137\137\137\137\137\137"
	"\137\137\137\137\137\137\137\137\137\137\137\137\137\137\137"
	"\137\137\137\137\137\137\137\137\137\137\137\137\137\137\137"
	"\137\137\137\137\137\137\137\337\137\137\137\137\265\137\137"
	"\137\137\137\137\137\137\137\137\261\137\137\137\137\367\137"
	"\260\137\267\137\137\262\137\240"
;

const char* ff::_trans_iso_861 =
	"\137\137\137\137\137\137\137\137\137\137\137\137\137\137\137"
	"\137\137\137\137\137\137\137\137\137\137\137\137\137\137\137"
	"\137\137\377\255\255\234\234\234\234\234\234\234\234\256\252"
	"\252\252\252\370\361\375\375\375\346\346\372\372\372\372\257"
	"\254\253\253\250\250\244\244\244\216\217\222\200\200\220\220"
	"\220\220\245\245\245\213\213\213\246\246\246\231\231\235\235"
	"\247\247\232\227\215\341\205\240\203\203\204\206\221\207\212"
	"\202\210\211\211\241\241\241\214\214\214\242\223\223\224\366"
	"\233\233\243\226\201\230\225\225"
;

int ofilterbuf::sync() {
	streamsize n = pptr() - pbase();
	if (0 == n) return 0;
	translatebuffer(pbase(), n, _table);
	if (n != _dst->sputn(pbase(), n)) {
		cerr << "Móttökustraumur í ofilterbuf gat ekki tekiğ viğ öllu." << endl;
		return EOF;
	}
	pbump(-n);
	return 0;
}

int ofilterbuf::overflow(int ch) {
	streamsize n = pptr() - pbase();
	if (n && sync())
		return EOF;
	if (ch != EOF) {
		_dst->sputc(translate(ch, _table));
	}
	return 0;
}

int ifilterbuf::underflow() {
	if (gptr() < egptr())
		return *gptr();
	streamsize read = _src->sgetn(eback(), _buflen);
	if (0 == read && EOF == _src->sgetc()) {
		return EOF;
	}
	translatebuffer(eback(), read, _table);
	setg(eback(), eback(), eback()+read);
	return *gptr();
}