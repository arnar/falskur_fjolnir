#ifndef __myast_h__
#define __myast_h__

#include <antlr/CommonAST.hpp>

namespace ff {

class ffAST;
typedef antlr::ASTRefCount<ffAST> RefffAST;

/* ffAST er klasi sem nota m� sem AST hn�t � ANTLR trj�smi�.
   Hann s�r sj�lfur um a� halda utan um �r hva�a l�nu inntaksins
   hann var sm��a�ur. */

class ffAST : public antlr::CommonAST {
private:
    int _line;
public:
	ffAST() : _line(0) {}
	virtual ~ffAST() {}

    int getLine() const
	{
		return _line;
	}

	void initialize(antlr::RefToken t)
	{
		antlr::CommonAST::initialize(t);
		_line = t->getLine();
	}

	void initialize(antlr::RefAST t)
	{
		antlr::CommonAST::initialize(t);
		_line = (static_cast<ffAST*>(t.get()))->_line;
	}

	static antlr::RefAST factory()
	{
		return antlr::RefAST(new ffAST);
	}

};

}

#endif