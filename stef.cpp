#include "stef.h"
#include "smali.h"

#include <stdio.h>

using namespace ff;

Stef::~Stef() {
	list<Segd*>::iterator s;
	for (s = _frumstillingar.begin(); s != _frumstillingar.end(); s++) {
		delete (*s);
	}
	for (s = _segdaruna.begin(); s != _segdaruna.end(); s++) {
		delete (*s);
	}
	map<string,Stef*>::iterator u;
	for (u = _undirStef.begin(); u != _undirStef.end(); u++) {
		delete (*u).second;
	}
}

bool Stef::isLocallyDefined(const string& nafn) {
	if (findSymbol(_localBreytur, nafn) != _localBreytur.end()) {
		return true;
	}
	list<string>::iterator i;
	for (i = _innfluttarBreytur.begin(); i != _innfluttarBreytur.end(); i++) {
		if ((*i) == nafn) return true;
	}
	if (findSymbol(_gildisVidfong, nafn) != _gildisVidfong.end()) {
		return true;
	}
	if (findSymbol(_afritsVidfong, nafn) != _afritsVidfong.end()) {
		return true;
	}
	return false;
}

bool Stef::isDefined(const string& nafn) {
	if (isLocallyDefined(nafn))
		return true;
	if (_parent)
		return _parent->isDefined(nafn);
	return false;
}

bool Stef::isLocallyDefinedUndirstef(const string& nafn, int n, int m) {
	char prefix[32];
	::_snprintf(prefix, 32, "@%d,%d@", n, m);
	string realname = prefix + nafn;
	if (_undirStef.find(realname) != _undirStef.end())
		return true;
	return false;
}

int Stef::isDefinedUndirstef(const string& nafn, int n, int m) {
	if (isLocallyDefinedUndirstef(nafn, n, m))
		return _nestingLevel + 1;
	if (_parent)
		return _parent->isDefinedUndirstef(nafn, n, m);
	return 0;
}

string Stef::getUndirstefLabel(const string& nafn, int n, int m) {
	char prefix[32];
	if (isLocallyDefinedUndirstef(nafn, n,m)) {
		::_snprintf(prefix, 32, "@%d,%d@", n, m);
		string realname = prefix + nafn;
		return (*(_undirStef.find(realname))).second->getInternalNafn();
	}
	if (_parent)
		return _parent->getUndirstefLabel(nafn, n, m);
	/* ættum ekki að komast hingað m.v. forskilyrði */
	return "(vitleysa)";
}

void Stef::addVidfang(vidfangsTegund t, string& nafn) {
	switch (t) {
	case AFRIT:
		_afritsVidfong.push_back(symtab::value_type(nafn, ++_fjoldiAfritsVidfanga));
		break;
	case GILDI:
		_gildisVidfong.push_back(symtab::value_type(nafn, ++_fjoldiGildisVidfanga));
		break;
	}
}

int Stef::getFjoldiVidfanga(vidfangsTegund t) {
	switch (t) {
	case AFRIT:
		return _afritsVidfong.size();
	case GILDI:
		return _gildisVidfong.size();
	}
	return 0;
}

void Stef::addInnflutt(string& nafn) {
	_innfluttarBreytur.push_back(nafn);
}

void Stef::addStadvaer(string& nafn, Segd* frumstilling) {
	_localBreytur.push_back(symtab::value_type(nafn, ++_fjoldiLocalBreyta));
	_frumstillingar.push_back(frumstilling); /* má vera null */
}

void Stef::addUndirstef(Stef* stef) {
	char prefix[32];
	::_snprintf(prefix, 32, "@%d,%d@", stef->_fjoldiAfritsVidfanga, stef->_fjoldiGildisVidfanga);
	string realname = prefix + stef->_nafn;
	_undirStef.insert(map<string,Stef*>::value_type(realname, stef));
	stef->setParent(this);
}

void Stef::addSegd(Segd* s) {
	s->setUmlykjandiStef(this);
	_segdaruna.push_back(s);
}

void Stef::setParent(Stef* parent) {
	_parent = parent;
	_nestingLevel = parent->getNestingLevel()+1;
}

int Stef::getNestingLevel() {
	return _nestingLevel;
}

symloc Stef::getSymbolLocation(const string& nafn) {
	symloc loc;
	Stef* s = this;
	symtab::iterator i;
	list<string>::iterator l;
	while (s) {
		if ((i = s->findSymbol(s->_localBreytur, nafn)) != s->_localBreytur.end()) {
			loc.offset = -(*i).second<<2;
			break;
		}
		for (l = _innfluttarBreytur.begin(); l != _innfluttarBreytur.end(); l++) {
			if ((*l) == nafn) {
				loc.foldun = 0;
				loc.offset = 0;
				goto foundVar;  /* break virkar á for líka :o( */
			}
		}
		if ((i = s->findSymbol(s->_gildisVidfong, nafn)) != s->_gildisVidfong.end()) {
			loc.offset = (s->_nestingLevel + s->_fjoldiGildisVidfanga + 2 - (*i).second) << 2;
			break;
		}
		if ((i = s->findSymbol(s->_afritsVidfong, nafn)) != s->_afritsVidfong.end()) {
			loc.offset = (s->_nestingLevel + s->_fjoldiGildisVidfanga + s->_fjoldiAfritsVidfanga + 2
				- (*i).second) << 2;
			break;
		}
		loc.foldun++;
		s = s->_parent;
	}
foundVar:
	return loc;
}

string Stef::getInternalNafn() {
	string s;
	if (_parent) s = _parent->getInternalNafn();
	char prefix[32];
	::_snprintf(prefix, 32, "__%d_%d_", _fjoldiAfritsVidfanga, _fjoldiGildisVidfanga);
	s += '_' + (prefix + _nafn);
	/* TODO: ef s.length > 255 þá villa */
	return s;
}

void Stef::stackDelta(int d) {
	_stackSize += d;
}

int Stef::getStackSize() {
	return _stackSize;
}

void Stef::markStack() {
	_stackMarks.push(_stackSize);
}

void Stef::unmarkStack() {
	_stackMarks.pop();
}

int Stef::lastStackMark() {
	if (_stackMarks.empty()) {
		return -1;
	} else {
		return _stackMarks.top();
	}
}

void Stef::generate(ostream& out) {
	/* formáli */
	emit("PUSH", "SI");
	emit("PUSH", "BP");
	emit("MOV", "BP,SP");
	emit("PUSH", "SI");

	list<Segd*>::iterator f;
	for (f = _frumstillingar.begin(); f != _frumstillingar.end(); f++) {
		if (NULL == (*f)) {
			emit("PUSH", "ES");
			emit("PUSH", "ES");
		} else {
			(*f)->setUmlykjandiStef(this);
			(*f)->generatePUSH(out);
		}
	}
	_stackSize = 0;

	list<Segd*>::iterator s;
	for (s = _segdaruna.begin(); s != _segdaruna.end(); s++) {
		list<Segd*>::iterator t = s;
		if (++t != _segdaruna.end()) {
			(*s)->generateNOVAL(out);
		} else {
			(*s)->setHali();
			(*s)->generateAXDX(out);
		}
	}
	/* ASSERT(_stackSize == 0) */

	/* eftirmáli */
	emit_label(l(_steflokLabel));
	emit("MOV", "SP,BP");
	emit("POP", "BP");
	emit("POP", "BX");
	emit("RET", ((_fjoldiGildisVidfanga + _nestingLevel) << 2));

	map<string, Stef*>::iterator u;
	for (u = _undirStef.begin(); u != _undirStef.end(); u++) {
		string s = (*u).second->getInternalNafn();
		emit_label(s);
		(*u).second->generate(out);
	}
}

symtab::iterator Stef::findSymbol(symtab& s, const string& nafn) {
	for (symtab::iterator i = s.begin(); i != s.end(); i++)
		if ((*i).first == nafn) return i;
	return s.end();
}
