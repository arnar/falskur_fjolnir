#ifndef __segd_h__
#define __segd_h__

#include <iostream>

namespace ff {

using namespace std;

class Stef;

class Segd {
protected:
	bool _hali;
	Stef* _umlykjandiStef;
	int _line;

public:
	Segd() : _hali(false), _umlykjandiStef(NULL), _line(0) {}
	virtual ~Segd() {}

	void setHali() { _hali = true; }
	void clearHali() { _hali = false; }
	bool isHali() const { return _hali; }
	void setLine(int line) { _line = line; }

	virtual void setUmlykjandiStef(Stef* stef) { _umlykjandiStef = stef; }

	virtual void generateAXDX(ostream& out) const = 0;
	virtual void generatePUSH(ostream& out) const;
	virtual void generateJUMP(ostream& out, int iftrue, int iffalse) const;
	virtual void generateNOVAL(ostream& out) const;

	void reportError(const char* villa, ...) const;
};

}

#endif /* __segd_h__ */