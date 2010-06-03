#ifndef __myast_h__
#define __myast_h__

#include <antlr/CommonAST.hpp>

namespace ff {

class ffAST;
typedef antlr::ASTRefCount<ffAST> RefffAST;

/* ffAST er klasi sem nota má sem AST hnút í ANTLR trjásmið.
   Hann sér sjálfur um að halda utan um úr hvaða línu inntaksins
   hann var smíðaður. */

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