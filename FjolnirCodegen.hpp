#ifndef INC_FjolnirCodegen_hpp_
#define INC_FjolnirCodegen_hpp_

#include <antlr/config.hpp>
#include "FjolnirCodegenTokenTypes.hpp"
/* $ANTLR 2.7.3-20030430: "FjolnirCodegen.g" -> "FjolnirCodegen.hpp"$ */
#include <antlr/TreeParser.hpp>

#line 5 "FjolnirCodegen.g"

#include "stef.h"
#include "segd.h"
#include "segdir.h"

#line 16 "FjolnirCodegen.hpp"
ANTLR_BEGIN_NAMESPACE(ff)
class CUSTOM_API FjolnirCodegen : public antlr::TreeParser, public FjolnirCodegenTokenTypes
{
#line 37 "FjolnirCodegen.g"


public:
	void setOutput(std::ostream& out) { this->out = &out; }
	
private:
	std::ostream *out;
#line 20 "FjolnirCodegen.hpp"
public:
	FjolnirCodegen();
	void initializeASTFactory( antlr::ASTFactory& factory );
	int getNumTokens() const
	{
		return FjolnirCodegen::NUM_TOKENS;
	}
	const char* getTokenName( int type ) const
	{
		if( type > getNumTokens() ) return 0;
		return FjolnirCodegen::tokenNames[type];
	}
	public: void forrit(antlr::RefAST _t);
	public: void veiting(antlr::RefAST _t);
	public: void eining(antlr::RefAST _t);
	public: void vorpun(antlr::RefAST _t);
	public: void minnissvaedi(antlr::RefAST _t,
		string& nafn
	);
	public: Stef*  stefskilgreining(antlr::RefAST _t,
		string& nafn
	);
	public: Segd*  segd(antlr::RefAST _t);
	public: Segd*  lykkjusegd(antlr::RefAST _t);
private:
	static const char* tokenNames[];
#ifndef NO_STATIC_CONSTS
	static const int NUM_TOKENS = 89;
#else
	enum {
		NUM_TOKENS = 89
	};
#endif
	
	static const unsigned long _tokenSet_0_data_[];
	static const antlr::BitSet _tokenSet_0;
};

ANTLR_END_NAMESPACE
#endif /*INC_FjolnirCodegen_hpp_*/
