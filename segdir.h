#ifndef __segdir_h__
#define __segdir_h__

#include "segd.h"
#include "smali.h"

#include <vector>
#include <list>

namespace ff {

/**** segd_operators.cpp ****/
class BinOpSegd : public Segd {
protected:
	Segd* _right;
	Segd* _left;
public:
	BinOpSegd(Segd* l, Segd* r) : _left(l), _right(r) {}
	void setUmlykjandiStef(Stef* stef);
	virtual ~BinOpSegd();
};

class OgSegd : public BinOpSegd {
public:
	OgSegd(Segd* l, Segd* r) : BinOpSegd(l,r) {}
	virtual ~OgSegd() {}

	virtual void generateAXDX(ostream& out) const;
	virtual void generateJUMP(ostream& out, int, int) const;
};

class EdaSegd : public BinOpSegd {
public:
	EdaSegd(Segd* l, Segd* r) : BinOpSegd(l,r) {}
	virtual ~EdaSegd() {}

	virtual void generateAXDX(ostream& out) const;
	virtual void generateJUMP(ostream& out, int, int) const;
};

class EkkiSegd : public Segd {
	Segd* _segd;
public:
	EkkiSegd(Segd* s) : _segd(s) {}
	virtual ~EkkiSegd();
	void setUmlykjandiStef(Stef* stef);

	virtual void generateAXDX(ostream& out) const;
	virtual void generateJUMP(ostream& out, int, int) const;
};

/**** segd_assign.cpp ****/
class GildisveitingarSegd : public Segd {
	string _nafn;
	Segd* _s;
public:
	GildisveitingarSegd(string nafn, Segd* s) : _nafn(nafn), _s(s) {}
	virtual ~GildisveitingarSegd() { delete _s; }
	void setUmlykjandiStef(Stef* stef);

	virtual void generateAXDX(ostream& out) const;
};

class SkilaSegd : public Segd {
	Segd* _s;
public:
	SkilaSegd(Segd* s) : _s(s) {}
	virtual ~SkilaSegd() { delete _s; }
	void setUmlykjandiStef(Stef* stef);

	virtual void generateAXDX(ostream& out) const;
	virtual void generatePUSH(ostream& out) const;
	virtual void generateJUMP(ostream& out, int, int) const;
};

/**** segd_kall.cpp ****/
class KallSegd : public Segd {
	string _nafn;
	list<string> _afritsVidfong;
	list<Segd*> _gildisVidfong;
public:
	KallSegd(const string& nafn) : _nafn(nafn) {}
	virtual ~KallSegd();
	void setUmlykjandiStef(Stef* stef);

	void addAfritsVidfang(string& nafn);
	void addGildisVidfang(Segd* s);

	virtual void generateAXDX(ostream& out) const;
};

/**** segd_cond.cpp ****/
class EfSegd : public Segd {
	vector<Segd*> _skilyrdi;
	vector<list<Segd*> > _segdarunur;
	list<Segd*> _annarsruna;
public:
	EfSegd() {};
	virtual ~EfSegd();
	void setUmlykjandiStef(Stef* stef);

	void addSkilyrdi(Segd* s);
	void addSegd(Segd* s);
	void addAnnarsSegd(Segd* s);

	virtual void generateAXDX(ostream& out) const;
};
/* class ValSegd : public Segd {}; */

/**** segd_loop.cpp ****/
class LykkjuSegd : public Segd {
	list<Segd*> _segdaruna;
	int _exitLabel;
public:
	LykkjuSegd() { _exitLabel = newlabel(); }
	virtual ~LykkjuSegd();
	void setUmlykjandiStef(Stef* stef);

	void addSegd(Segd* s);

	virtual void generateAXDX(ostream& out) const;
};

class MedanSegd : public Segd {
	list<Segd*> _segdaruna;
	Segd* _cond;
	int _exitLabel;
public:
	MedanSegd(Segd* cond) : _cond(cond)
		{ _exitLabel = newlabel(); }
	virtual ~MedanSegd();
	void setUmlykjandiStef(Stef* stef);

	void addSegd(Segd* s);

	virtual void generateAXDX(ostream& out) const;
};

class UtSegd : public Segd {
public:
	UtSegd() {}
	virtual ~UtSegd() {}

	virtual void generateAXDX(ostream& out) const;
	virtual void generateJUMP(ostream& out, int, int) const;
	virtual void generatePUSH(ostream& out) const;
};

/**** segd_stofn.cpp ****/
class StofnSegd : public Segd {
	list<Segd*> _segdaruna;
public:
	StofnSegd() {}
	virtual ~StofnSegd() {}
	void setUmlykjandiStef(Stef* stef);

	void addSegd(Segd* s);

	virtual void generateAXDX(ostream& out) const;
	virtual void generateJUMP(ostream& out, int, int) const;
	virtual void generatePUSH(ostream& out) const;
	virtual void generateNOVAL(ostream& out) const;
};

/**** segd_value.cpp ****/
class NafnSegd : public Segd {
	string _nafn;
public:
	NafnSegd(const string& nafn) : _nafn(nafn) {}
	virtual ~NafnSegd() {}

	virtual void generateAXDX(ostream& out) const;
	virtual void generatePUSH(ostream& out) const;
	virtual void generateNOVAL(ostream& out) const {};
};

class StrengSegd : public Segd {
	string _s;
public:
	StrengSegd(const string& s) : _s(s) {}
	virtual ~StrengSegd() {}

	virtual void generateAXDX(ostream& out) const;
	virtual void generateNOVAL(ostream& out) const {};
	virtual void generateJUMP(ostream& out, int, int) const;
};

class HeiltoluSegd : public Segd {
	int _tala;
public:
	HeiltoluSegd(int tala);
	HeiltoluSegd(string& les);
	virtual ~HeiltoluSegd() {}

	virtual void generateAXDX(ostream& out) const;
	virtual void generatePUSH(ostream& out) const;
	virtual void generateNOVAL(ostream& out) const {};
	virtual void generateJUMP(ostream& out, int, int) const;
};

class FleytitoluSegd : public Segd {
	unsigned short _ax, _dx;
public:
	FleytitoluSegd(string& les);
	virtual ~FleytitoluSegd() {}

	virtual void generateAXDX(ostream& out) const;
	virtual void generatePUSH(ostream& out) const;
	virtual void generateNOVAL(ostream& out) const {};
	virtual void generateJUMP(ostream& out, int, int) const;
};

class TomaSegd : public Segd {
public:
	TomaSegd() {}
	virtual ~TomaSegd() {}

	virtual void generateAXDX(ostream& out) const;
	virtual void generatePUSH(ostream& out) const;
	virtual void generateNOVAL(ostream& out) const {}
	virtual void generateJUMP(ostream& out, int, int) const;
};

/* class StefgildisSegd : public Segd {}; */

/**** segd_oo.cpp ****/
/*
class ThessiSegd : public Segd {};
class ArfurSegd : public Segd {};
*/

}

#endif /* __segdir_h__ */