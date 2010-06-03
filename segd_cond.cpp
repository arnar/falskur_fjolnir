#include "segdir.h"
#include "smali.h"
#include "stef.h"

using namespace ff;

EfSegd::~EfSegd() {
	vector<Segd*>::iterator s;
	for (s = _skilyrdi.begin(); s != _skilyrdi.end(); s++)
		delete (*s);
	vector<list<Segd*> >::iterator i;
	list<Segd*>::iterator j;
	for (i = _segdarunur.begin(); i != _segdarunur.end(); i++)
		for (j = (*i).begin(); j != (*i).end(); j++)
			delete (*j);
	for (j = _annarsruna.begin(); j != _annarsruna.end(); j++)
		delete (*j);
}

void EfSegd::setUmlykjandiStef(Stef* stef) {
	Segd::setUmlykjandiStef(stef);
	vector<Segd*>::iterator s;
	for (s = _skilyrdi.begin(); s != _skilyrdi.end(); s++)
		(*s)->setUmlykjandiStef(stef);
	vector<list<Segd*> >::iterator i;
	list<Segd*>::iterator j;
	for (i = _segdarunur.begin(); i != _segdarunur.end(); i++)
		for (j = (*i).begin(); j != (*i).end(); j++)
			(*j)->setUmlykjandiStef(stef);
	for (j = _annarsruna.begin(); j != _annarsruna.end(); j++)
		(*j)->setUmlykjandiStef(stef);
}

void EfSegd::addSkilyrdi(Segd* s) {
	_skilyrdi.push_back(s);
	list<Segd*> a;
	_segdarunur.push_back(a);
}

void EfSegd::addSegd(Segd* s) {
	_segdarunur.back().push_back(s);
}

void EfSegd::addAnnarsSegd(Segd* s) {
	_annarsruna.push_back(s);
}

void EfSegd::generateAXDX(ostream& out) const {
	int ut = newlabel();
	/* assert _skilyrdi.size() == _segdarunur.size() */

	size_t fj_blokka = _skilyrdi.size();
	for (size_t i = 0; i < fj_blokka; i++) {
		int next = newlabel();
		_skilyrdi[i]->generateJUMP(out, 0, next);
		list<Segd*>::const_iterator s;
		for (s = _segdarunur[i].begin(); s != _segdarunur[i].end(); s++) {
			list<Segd*>::const_iterator t = s;
			if (++t != _segdarunur[i].end()) {
				(*s)->generateNOVAL(out);
			} else {
				if (_hali) (*s)->setHali();
				(*s)->generateAXDX(out);
			}
		}
		emit("JMP",l(ut));
		emit_label(l(next));
	}

	list<Segd*>::const_iterator s;
	for (s = _annarsruna.begin(); s != _annarsruna.end(); s++) {
		list<Segd*>::const_iterator t = s;
		if (++t != _annarsruna.end()) {
			(*s)->generateNOVAL(out);
		} else {
			if (_hali) (*s)->setHali();
			(*s)->generateAXDX(out);
		}
	}
	emit_label(l(ut));
}