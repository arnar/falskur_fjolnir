#include "segdir.h"
#include "smali.h"
#include "stef.h"

#pragma warning( disable : 4267) /* size_t -> int conversion */

using namespace ff;

KallSegd::~KallSegd() {
	list<Segd*>::iterator i;
	for (i = _gildisVidfong.begin(); i != _gildisVidfong.end(); i++)
		delete (*i);
}

void KallSegd::setUmlykjandiStef(Stef* stef) {
	Segd::setUmlykjandiStef(stef);
	list<Segd*>::iterator i;
	for (i = _gildisVidfong.begin(); i != _gildisVidfong.end(); i++)
		(*i)->setUmlykjandiStef(stef);
}

void KallSegd::addAfritsVidfang(string& nafn) {
	_afritsVidfong.push_back(nafn);
}

void KallSegd::addGildisVidfang(Segd* s) {
	_gildisVidfong.push_back(s);
}

void KallSegd::generateAXDX(ostream& out) const {
	int level = _umlykjandiStef->isDefinedUndirstef(_nafn,
		_afritsVidfong.size(), _gildisVidfong.size());
	int thislevel = _umlykjandiStef->getNestingLevel();

	string steflabel;
	if (level > 0) {
		steflabel = _umlykjandiStef->getUndirstefLabel(_nafn,
			_afritsVidfong.size(), _gildisVidfong.size());
	} else {
		char forskeyti[32];
		::_snprintf(forskeyti, 32, "@%d,%d@", _afritsVidfong.size(), _gildisVidfong.size());
		steflabel = forskeyti + quote(_nafn);
	}

	int offset = 0;
	list<string>::const_iterator s;
	for (s = _afritsVidfong.begin(); s != _afritsVidfong.end(); s++) {
		NafnSegd* n = new NafnSegd(*s);
		n->setUmlykjandiStef(_umlykjandiStef);
		n->generatePUSH(out);
		offset += 4;
		delete n;
	}
	list<Segd*>::const_iterator i;
	for (i = _gildisVidfong.begin(); i != _gildisVidfong.end(); i++) {
		(*i)->generatePUSH(out);
		offset += 4;
	}

	for (int l = 0; l < thislevel && l < level; l++) {
		int from = (thislevel + 1 - l) << 2;
		emit_push("[BP+" << from << "]");
		emit_push("SI");
		offset += 4;
	}
	if (level > thislevel) {
		/* assert thislevel+1 == level */
		emit_push("BP");
		emit_push("SI");
		offset += 4;
	}

	if (_hali && _umlykjandiStef->getNestingLevel() >= level
			&& 0 == _umlykjandiStef->getFjoldiVidfanga(AFRIT)
			&& 0 == _afritsVidfong.size()) {
		/* hér er okkur óhætt að henda núverandi vakningarfærslu */
		emit_push("[BP+4]");  /* vendivistfang þess sem kallaði í okkur */
		offset += 2;
		emit("MOV", "BX,BP");
		emit("MOV", "DX,[BP]");   /* geymum stýrihl í DX */
		emit("MOV", "BP,SP");
		emit("ADD", "BP," << offset-2);  /* BP -> dx hluta fremsta staks í nýja stafla */
		int henda = ( 1 + thislevel + _umlykjandiStef->getFjoldiVidfanga(GILDI)) << 2;
		emit("ADD", "BX," << henda-1);  /* BX -> ný staðsetning staflans */
		/* færum offset fjölda bæta frá [BP] í [BX], tvö og tvö í einu */
		int loop = newlabel();
		emit("XOR", "SI,SI");
		emit_label(l(loop));
		emit("MOV", "AX,[BP+SI]");
		emit_forskeyti("SS");
		emit("MOV", "[BX+SI],AX");
		emit("DEC", "SI");
		emit("DEC", "SI");
		emit("CMP", "SI," << -offset);
		emit("JA ", l(loop));
		emit("ADD", "BX," << 2-offset);
		emit("MOV", "SP,BX");
		emit("MOV", "BP,DX");
		emit("MOV", "SI,2");
		emit("JMP", steflabel);
	} else {
		emit("CALL", steflabel);
	}
	_umlykjandiStef->stackDelta(-offset + (_afritsVidfong.size()<<2));

	list<string>::const_reverse_iterator rs;
	for (rs = _afritsVidfong.rbegin(); rs != _afritsVidfong.rend(); rs++) {
		symloc loc = _umlykjandiStef->getSymbolLocation(*rs);
		if (0 == loc.foldun && 0 == loc.offset) {
			/* innflutt breyta */
			emit("MOV","BX,%" << quote(_nafn));
			emit_forskeyti("DS");
			emit_pop("[BX+2]");
			emit_forskeyti("DS");
			emit_pop("[BX]");
		} else {
			if (loc.foldun > 0) {
				/* assert(nest <= _umlykjandiStef->getNestingLevel() */
				unsigned int nest = loc.foldun;
				nest++;    /* fram hjá vendivistf. */
				nest = nest << 2;
				emit("MOV","BX,[BP+"<<nest<<"]");
				emit_forskeyti("SS");
				emit_pop("[BX+" << loc.offset-2 << "]");
				emit_forskeyti("SS");
				emit_pop("[BX+" << loc.offset << "]");
			} else {
				emit_pop("[BP+" << loc.offset-2 << "]");
				emit_pop("[BP+" << loc.offset << "]");
			}
		}
	}
}