#include "segdir.h"
#include "smali.h"
#include "stef.h"

using namespace ff;

void StofnSegd::setUmlykjandiStef(Stef* stef) {
	Segd::setUmlykjandiStef(stef);
	list<Segd*>::iterator i;
	for (i = _segdaruna.begin(); i != _segdaruna.end(); i++)
		(*i)->setUmlykjandiStef(stef);
}

void StofnSegd::addSegd(Segd* s) {
	_segdaruna.push_back(s);
}

void StofnSegd::generateAXDX(ostream& out) const {
	list<Segd*>::const_iterator s;
	for (s = _segdaruna.begin(); s != _segdaruna.end(); s++) {
		list<Segd*>::const_iterator t = s;
		if (++t != _segdaruna.end()) {
			(*s)->generateNOVAL(out);
		} else {
			if (_hali) (*s)->setHali();
			(*s)->generateAXDX(out);
		}
	}
}

void StofnSegd::generateJUMP(ostream& out, int iftrue, int iffalse) const {
	list<Segd*>::const_iterator s;
	for (s = _segdaruna.begin(); s != _segdaruna.end(); s++) {
		list<Segd*>::const_iterator t = s;
		if (++t != _segdaruna.end()) {
			(*s)->generateNOVAL(out);
		} else {
			if (_hali) (*s)->setHali();
			(*s)->generateJUMP(out, iftrue, iffalse);
		}
	}
}

void StofnSegd::generatePUSH(ostream& out) const {
	list<Segd*>::const_iterator s;
	for (s = _segdaruna.begin(); s != _segdaruna.end(); s++) {
		list<Segd*>::const_iterator t = s;
		if (++t != _segdaruna.end()) {
			(*s)->generateNOVAL(out);
		} else {
			if (_hali) (*s)->setHali();
			(*s)->generatePUSH(out);
		}
	}
}

void StofnSegd::generateNOVAL(ostream& out) const {
	list<Segd*>::const_iterator s;
	for (s = _segdaruna.begin(); s != _segdaruna.end(); s++) {
		list<Segd*>::const_iterator t = s;
		if (++t != _segdaruna.end()) {
			(*s)->generateNOVAL(out);
		} else {
			if (_hali) (*s)->setHali();
			(*s)->generateNOVAL(out);
		}
	}
}