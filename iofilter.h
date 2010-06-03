#ifndef __iofilter_h__
#define __iofilter_h__

/* Í şessari skrá eru skilgreindir streambuf erfingjar
   sem nota má til ağ umbreyta straumum milli stafasetta
   meğ umbreytingartöflum */

#include <iostream>
#include <sstream>

namespace ff {

extern const char* _trans_861_iso;
extern const char* _trans_iso_861;

inline unsigned char translate(unsigned char c, const char* table) {
	if (c < 128) return c;
	return table[c-128];
}

inline void translatebuffer(char* buf, size_t n, const char* table) {
	for (size_t i = 0; i < n; i++) {
		unsigned char c = buf[i];
		if (c < 128) continue;
		buf[i] = table[c-128];
	}
}

class ofilterbuf : public std::streambuf {
	const char* _table;
	std::streambuf* _dst;
	char* _buffer;
public:
	ofilterbuf(const char* table, std::streambuf* dst, int buflen = 512) 
		: _table(table), _dst(dst) {
			_buffer = new char[buflen];
			setp(_buffer, _buffer+buflen);
		}
	virtual ~ofilterbuf() {
		sync();
		delete [] _buffer;
	}

	virtual int sync();
	virtual int overflow(int ch);
};

class ifilterbuf : public std::streambuf {
	std::streambuf* _src;
	const char* _table;
	char* _buffer;
	size_t _buflen;
public:
	ifilterbuf(const char* table, std::streambuf* src, int buflen = 512) 
		: _table(table), _src(src), _buflen(buflen) {
			_buffer = new char[_buflen];
			setg(_buffer, _buffer+_buflen, _buffer+_buflen);
		}
		virtual ~ifilterbuf() { delete [] _buffer; }

	virtual int underflow();
};

}

#endif /* __iofilter_h__ */