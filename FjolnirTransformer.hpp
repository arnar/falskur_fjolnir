#ifndef INC_FjolnirTransformer_hpp_
#define INC_FjolnirTransformer_hpp_

#include <antlr/config.hpp>
#include "FjolnirTransformerTokenTypes.hpp"
/* $ANTLR 2.7.3-20030430: "FjolnirTransformer.g" -> "FjolnirTransformer.hpp"$ */
#include <antlr/TreeParser.hpp>

ANTLR_BEGIN_NAMESPACE(ff)
class CUSTOM_API FjolnirTransformer : public antlr::TreeParser, public FjolnirTransformerTokenTypes
{
#line 1 "FjolnirTransformer.g"
#line 13 "FjolnirTransformer.hpp"
public:
	FjolnirTransformer();
	void initializeASTFactory( antlr::ASTFactory& factory );
	int getNumTokens() const
	{
		return FjolnirTransformer::NUM_TOKENS;
	}
	const char* getTokenName( int type ) const
	{
		if( type > getNumTokens() ) return 0;
		return FjolnirTransformer::tokenNames[type];
	}
	public: void forrit(antlr::RefAST _t);
	public: void veiting(antlr::RefAST _t);
	public: void eining(antlr::RefAST _t);
	public: void vorpun(antlr::RefAST _t);
	public: void minnissvaedi(antlr::RefAST _t);
	public: void stefskilgreining(antlr::RefAST _t);
	public: void hlutskilgreining(antlr::RefAST _t);
	public: void nafnaruna(antlr::RefAST _t);
	public: void skilgreiningar(antlr::RefAST _t);
	public: void segdaruna(antlr::RefAST _t);
	public: void innriTextaeining(antlr::RefAST _t);
	public: void nafnaruna_ekkitom(antlr::RefAST _t);
	public: void frumstillingaruna(antlr::RefAST _t);
	public: void segd(antlr::RefAST _t);
	public: void innraStef(antlr::RefAST _t);
	public: void bodskilgreining(antlr::RefAST _t);
	public: void hlutfylkissegd(antlr::RefAST _t);
	public: void lykkjusegd(antlr::RefAST _t);
	public: void valfasti_range(antlr::RefAST _t);
	public: void lykkjuskilyrdi(antlr::RefAST _t);
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
	static const unsigned long _tokenSet_1_data_[];
	static const antlr::BitSet _tokenSet_1;
	static const unsigned long _tokenSet_2_data_[];
	static const antlr::BitSet _tokenSet_2;
};

ANTLR_END_NAMESPACE
#endif /*INC_FjolnirTransformer_hpp_*/
