#include "segdir.h"
#include "smali.h"

using namespace ff;

BinOpSegd::~BinOpSegd() {
	delete _left;
	delete _right;
}

void BinOpSegd::setUmlykjandiStef(Stef* stef) {
	Segd::setUmlykjandiStef(stef);
	_right->setUmlykjandiStef(stef);
	_left->setUmlykjandiStef(stef);
}

void OgSegd::generateAXDX(ostream& out) const {
	int ut = newlabel();
	_left->generateAXDX(out);
	emit("TEST", "DL,1");
	emit("JNZ", l(ut));
	_right->generateAXDX(out);
	emit_label(l(ut));
}

void OgSegd::generateJUMP(ostream& out, int iftrue, int iffalse) const {
	if (iffalse) {
		_left->generateJUMP(out,0,iffalse);
		_right->generateJUMP(out,iftrue,iffalse);
	} else {
		int ut = newlabel();
		_left->generateJUMP(out,0,ut);
		_right->generateJUMP(out,iftrue,0);
		emit_label(l(ut));
	}
}

void EdaSegd::generateAXDX(ostream& out) const {
	int ut = newlabel();
	_left->generateAXDX(out);
	emit("TEST", "DL,1");
	emit("JZ", l(ut));
	_right->generateAXDX(out);
	emit_label(l(ut));
}

void EdaSegd::generateJUMP(ostream& out, int iftrue, int iffalse) const {
	if (iftrue) {
		_left->generateJUMP(out,iftrue,0);
		_right->generateJUMP(out,iftrue,iffalse);
	} else {
		int ut = newlabel();
		_left->generateJUMP(out,ut,0);
		_right->generateJUMP(out,0,iffalse);
		emit_label(l(ut));
	}
}

EkkiSegd::~EkkiSegd() {
	delete _segd;
}

void EkkiSegd::setUmlykjandiStef(Stef* stef) {
	Segd::setUmlykjandiStef(stef);
	_segd->setUmlykjandiStef(stef);
}

void EkkiSegd::generateAXDX(ostream& out) const {
	_segd->generateAXDX(out);
	emit("MOV", "AX,ES");
	emit("AND", "DX,1");
	emit("INC", "DX");
}

void EkkiSegd::generateJUMP(ostream& out, int iftrue, int iffalse) const {
	_segd->generateJUMP(out, iffalse, iftrue);
}