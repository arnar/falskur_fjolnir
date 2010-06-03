#include "segdir.h"
#include "smali.h"
#include "stef.h"

using namespace ff;

void NafnSegd::generateAXDX(ostream& out) const {
	if (!_umlykjandiStef->isDefined(_nafn)) {
		reportError("Nafnið \"%s\" er ekki skilgreint.", _nafn.c_str());
	} else {
		symloc loc = _umlykjandiStef->getSymbolLocation(_nafn);
		if (0 == loc.foldun && 0 == loc.offset) {
			/* innflutt breyta */
			emit("MOV","BX,%" << quote(_nafn));
			emit_forskeyti("DS");
			emit("MOV","DX,[BX]");
			emit_forskeyti("DS");
			emit("MOV","AX,[BX+2]");
		} else {
			if (loc.foldun > 0) {
				/* assert(nest <= _umlykjandiStef->getNestingLevel() */
				unsigned int nest = loc.foldun;
				nest++;    /* fram hjá vendivistf. */
				nest = nest << 2; /* margf. m. 4 */
				emit("MOV","BX,[BP+"<<nest<<"]");
				/* Við höfum fremri addressuna á undan því þá er líklegra að
				   sú seinni verði dregin inn í cache á cpu. */
				emit_forskeyti("SS");
				emit("MOV","DX,[BX+" << loc.offset-2 << "]");
				emit_forskeyti("SS");
				emit("MOV","AX,[BX+" << loc.offset << "]");
			} else {
				emit("MOV","DX,[BP+" << loc.offset-2 << "]");
				emit("MOV","AX,[BP+" << loc.offset << "]");
			}
		}
	}
}

void NafnSegd::generatePUSH(ostream& out) const {
	if (!_umlykjandiStef->isDefined(_nafn)) {
		reportError("Nafnið \"%s\" er ekki skilgreint.", _nafn.c_str());
	} else {
		symloc loc = _umlykjandiStef->getSymbolLocation(_nafn);
		if (0 == loc.foldun && 0 == loc.offset) {
			emit("MOV","BX,%" << quote(_nafn));
			emit_forskeyti("DS");
			emit_push("[BX+2]");
			emit_forskeyti("DS");
			emit_push("[BX]");
		} else {
			if (loc.foldun > 0) {
				/* assert(nest <= _umlykjandiStef->getNestingLevel() */
				unsigned int nest = loc.foldun;
				nest++;    
				nest = nest << 2;
				emit("MOV","BX,[BP+"<<nest<<"]");
				emit_forskeyti("SS");
				emit_push("[BX+" << loc.offset << "]");
				emit_forskeyti("SS");
				emit_push("[BX+" << loc.offset-2 << "]");
			} else {
				emit_push("[BP+" << loc.offset << "]");
				emit_push("[BP+" << loc.offset-2 << "]");
			}
		}
	}
}


HeiltoluSegd::HeiltoluSegd(int tala) {
	_tala = tala;
}

HeiltoluSegd::HeiltoluSegd(string& les) {
	bool formerki = false;
	int radix = 10;
	_tala = 0;
	string::iterator i = les.begin();
	while (i != les.end()) {
		char c = *(i++);
		if (c == '-') formerki = !formerki;
		else if (c == '$') radix = 16;
		else switch (c) {
		case '0': case '1': case '2':
		case '3': case '4': case '5':
		case '6': case '7': case '8':
		case '9':
			_tala *= radix;
			_tala += (c - '0');
			break;
		case 'a': case 'b': case 'c':
		case 'd': case 'e': case 'f':
			_tala <<= 4;
			_tala |= (c - 'a')+10;
			break;
		case 'A': case 'B': case 'C':
		case 'D': case 'E': case 'F':
			_tala <<= 4;
			_tala |= (c - 'A')+10;
			break;
		}
	}
}

void HeiltoluSegd::generateAXDX(ostream& out) const {
	emit("MOV", "AX,"<<_tala);
	emit("MOV", "DX,SI");
}

void HeiltoluSegd::generatePUSH(ostream& out) const {
	emit_push(_tala);
	emit_push("SI");
}

void HeiltoluSegd::generateJUMP(ostream& out, int iftrue, int iffalse) const {
	emit("JMP",l(iftrue));
}

void StrengSegd::generateAXDX(ostream& out) const {
	emit("CALL","@@@\\[náístreng\\]");
	out << "\t\"" << _s << "\"\n";
}

void StrengSegd::generateJUMP(ostream& out, int iftrue, int iffalse) const {
	emit("JMP",l(iftrue));
}

FleytitoluSegd::FleytitoluSegd(string& les) {
	bool formerki = false;
	int i = 0;
	while ('-' == les[i++]) formerki = !formerki;
	--i;
	double d = 0.0;
	sscanf(les.substr(i).c_str(), "%lf", &d);
	if (0.0 == d) {
		_ax = 0;
		_dx = 0x0004;
	} else {
		_ax = _dx = 0;
		unsigned char* pd = (unsigned char*) &d;
		unsigned int ieee_exponent = ((pd[7] & 0x7f)<<4) | ((pd[6] & 0xf0) >> 4);
		short exponent = ieee_exponent - 1023;
		_ax = (pd[6] & 0x0f) << 12;
		_ax |= pd[5] << 4;
		_ax |= pd[4] >> 4;
		_dx = (exponent << 5) | (formerki ? 0x10 : 0) | 0x04;
		_dx ^= 0x8000;
	}
}

void FleytitoluSegd::generateAXDX(ostream& out) const {
	emit("MOV","AX," << _ax);
	emit("MOV","DX," << _dx);
}

void FleytitoluSegd::generatePUSH(ostream& out) const {
	emit_push(_ax);
	emit_push(_dx);
}

void FleytitoluSegd::generateJUMP(ostream& out, int iftrue, int iffalse) const {
	emit("JMP",l(iftrue));
}

void TomaSegd::generateAXDX(ostream& out) const {
	emit("MOV","AX,ES");
	emit("MOV","DX,ES");
}

void TomaSegd::generatePUSH(ostream& out) const {
	emit_push("ES");
	emit_push("ES");
}

void TomaSegd::generateJUMP(ostream& out, int iftrue, int iffalse) const {
	emit("JMP",l(iffalse));
}