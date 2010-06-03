#include "segdir.h"
#include "smali.h"
#include "stef.h"

using namespace ff;

LykkjuSegd::~LykkjuSegd() {
	list<Segd*>::iterator i;
	for (i = _segdaruna.begin(); i != _segdaruna.end(); i++)
		delete (*i);
}

void LykkjuSegd::setUmlykjandiStef(Stef* stef) {
	Segd::setUmlykjandiStef(stef);
	list<Segd*>::iterator i;
	for (i = _segdaruna.begin(); i != _segdaruna.end(); i++)
		(*i)->setUmlykjandiStef(stef);
}

void LykkjuSegd::addSegd(Segd* s) {
	_segdaruna.push_back(s);
}

void LykkjuSegd::generateAXDX(ostream& out) const {
	_umlykjandiStef->markStack();
	_umlykjandiStef->pushUtLabel(_exitLabel);

	int begin = newlabel();
	emit_label(l(begin));

	list<Segd*>::const_iterator s;
	for (s = _segdaruna.begin(); s != _segdaruna.end(); s++) {
		(*s)->generateNOVAL(out);
		/* list<Segd*>::const_iterator t = s;
		if (++t != _segdaruna.end()) {
			(*s)->generateNOVAL(out);
		} else {
			(*s)->generateAXDX(out);
		}*/
	}
	emit("JMP",l(begin));

	emit_label(l(_exitLabel));
	_umlykjandiStef->popUtLabel();
	_umlykjandiStef->unmarkStack();
	emit("MOV", "AX,ES");
	emit("MOV", "DX,ES");
}

MedanSegd::~MedanSegd() {
	list<Segd*>::iterator i;
	for (i = _segdaruna.begin(); i != _segdaruna.end(); i++)
		delete (*i);
	delete _cond;
}

void MedanSegd::setUmlykjandiStef(Stef* stef) {
	Segd::setUmlykjandiStef(stef);
	list<Segd*>::iterator i;
	for (i = _segdaruna.begin(); i != _segdaruna.end(); i++)
		(*i)->setUmlykjandiStef(stef);
	_cond->setUmlykjandiStef(stef);
}

void MedanSegd::addSegd(Segd* s) {
	_segdaruna.push_back(s);
}

void MedanSegd::generateAXDX(ostream& out) const {
	_umlykjandiStef->markStack();
	_umlykjandiStef->pushUtLabel(_exitLabel);

	int begin = newlabel();
	emit_label(l(begin));

	_cond->generateJUMP(out, 0, _exitLabel);

	list<Segd*>::const_iterator s;
	for (s = _segdaruna.begin(); s != _segdaruna.end(); s++) {
		(*s)->generateNOVAL(out);
		/*list<Segd*>::const_iterator t = s;
		if (++t != _segdaruna.end()) {
			(*s)->generateNOVAL(out);
		} else {
			(*s)->generateAXDX(out);
		}*/
	}
	emit("JMP",l(begin));

	emit_label(l(_exitLabel));
	_umlykjandiStef->popUtLabel();
	_umlykjandiStef->unmarkStack();
	emit("MOV", "AX,ES");
	emit("MOV", "DX,ES");
}

void UtSegd::generateAXDX(ostream& out) const {
	int mark = _umlykjandiStef->lastStackMark();
	if (-1 == mark) {
		reportError("Út-segð getur aðeins komið fyrir innan í lykkjusegð.");
	}
	int pop = _umlykjandiStef->getStackSize() - mark;
	if (pop > 0) emit("ADD","SP," << pop);
	emit("JMP",l(_umlykjandiStef->getUtLabel()));
}

void UtSegd::generateJUMP(ostream& out, int iftrue, int iffalse) const {
	generateAXDX(out);
}

void UtSegd::generatePUSH(ostream& out) const {
	generateAXDX(out);
}
