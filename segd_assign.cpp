#include "segdir.h"
#include "smali.h"
#include "stef.h"

using namespace ff;

void GildisveitingarSegd::setUmlykjandiStef(Stef* stef) {
	Segd::setUmlykjandiStef(stef);
	_s->setUmlykjandiStef(stef);
}

void GildisveitingarSegd::generateAXDX(ostream& out) const {
	if (!_umlykjandiStef->isDefined(_nafn)) {
		reportError("Nafnið \"%s\" er ekki skilgreint.", _nafn);
	} else {
		_s->generateAXDX(out);
		symloc loc = _umlykjandiStef->getSymbolLocation(_nafn);
		if (0 == loc.foldun && 0 == loc.offset) {
			/* innflutt breyta */
			emit("MOV","BX,%" << quote(_nafn));
			emit_forskeyti("DS");
			emit("MOV","[BX],DX");
			emit_forskeyti("DS");
			emit("MOV","[BX+2],AX");
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
				emit("MOV","[BX+" << loc.offset-2 << "],DX");
				emit_forskeyti("SS");
				emit("MOV","[BX+" << loc.offset << "],AX");
			} else {
				emit("MOV","[BP+" << loc.offset-2 << "],DX");
				emit("MOV","[BP+" << loc.offset << "],AX");
			}
		}
	}
}

void SkilaSegd::setUmlykjandiStef(Stef* stef) {
	Segd::setUmlykjandiStef(stef);
	_s->setUmlykjandiStef(stef);
}

void SkilaSegd::generateAXDX(ostream& out) const {
	_s->setHali();
	_s->generateAXDX(out);
	emit("JMP",l(_umlykjandiStef->getEndLabel()));
}

void SkilaSegd::generatePUSH(ostream& out) const {
	generateAXDX(out);
}

void SkilaSegd::generateJUMP(ostream& out, int iftrue, int iffalse) const {
	generateAXDX(out);
}