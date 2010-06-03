#ifndef INC_FjolnirParser_hpp_
#define INC_FjolnirParser_hpp_

#include <antlr/config.hpp>
/* $ANTLR 2.7.3-20030430: "FjolnirParser.g" -> "FjolnirParser.hpp"$ */
#include <antlr/TokenStream.hpp>
#include <antlr/TokenBuffer.hpp>
#include "FjolnirParserTokenTypes.hpp"
#include <antlr/LLkParser.hpp>

ANTLR_BEGIN_NAMESPACE(ff)
class CUSTOM_API FjolnirParser : public antlr::LLkParser, public FjolnirParserTokenTypes
{
#line 1 "FjolnirParser.g"
#line 15 "FjolnirParser.hpp"
public:
	void initializeASTFactory( antlr::ASTFactory& factory );
protected:
	FjolnirParser(antlr::TokenBuffer& tokenBuf, int k);
public:
	FjolnirParser(antlr::TokenBuffer& tokenBuf);
protected:
	FjolnirParser(antlr::TokenStream& lexer, int k);
public:
	FjolnirParser(antlr::TokenStream& lexer);
	FjolnirParser(const antlr::ParserSharedInputState& state);
	int getNumTokens() const
	{
		return FjolnirParser::NUM_TOKENS;
	}
	const char* getTokenName( int type ) const
	{
		if( type > getNumTokens() ) return 0;
		return FjolnirParser::tokenNames[type];
	}
	const char* const* getTokenNames() const
	{
		return FjolnirParser::tokenNames;
	}
	public: void forrit();
	public: void forritsVeiting();
	public: void einingarVeiting();
	public: void eining();
	public: void einHlidsett();
	public: void einItrunarhlidsett();
	public: void einSamsett();
	public: void einInnflutt();
	public: void einItrud();
	public: void grunnEining();
	public: void vorpun();
	protected: void adgerd();
	public: void stefskilgreining();
	public: void nafnaruna();
	public: void skilgreiningar();
	public: void segdaruna();
	public: void innriTextaeining();
	public: void skilgr_innflutt();
	public: void skilgr_stadvaer();
	public: void nafnaruna_ekkitom();
	public: void frumstillingaruna();
	public: void skilgrOgGildisv();
	public: void segd();
	public: void innraStef();
	public: void ogSegd();
	public: void ekkiSegd();
	public: void adgerd_1();
	public: void adgerd_2();
	public: void adgerd_3();
	public: void adgerd_4();
	public: void adgerd_5();
	public: void adgerd_6();
	public: void adgerd_7();
	public: void hlutfylkissegd();
	public: void smasegd();
	public: void nafnsegd();
	public: void einundaradgerd();
	public: void efsegd();
	public: void lykkjusegd();
	public: void valsegd();
	public: void annarsef();
	public: void valkostur();
	public: void valfasti_range();
	public: void valfasti();
public:
	antlr::RefAST getAST();
	
protected:
	antlr::RefAST returnAST;
private:
	static const char* tokenNames[];
#ifndef NO_STATIC_CONSTS
	static const int NUM_TOKENS = 86;
#else
	enum {
		NUM_TOKENS = 86
	};
#endif
	
	static const unsigned long _tokenSet_0_data_[];
	static const antlr::BitSet _tokenSet_0;
	static const unsigned long _tokenSet_1_data_[];
	static const antlr::BitSet _tokenSet_1;
	static const unsigned long _tokenSet_2_data_[];
	static const antlr::BitSet _tokenSet_2;
	static const unsigned long _tokenSet_3_data_[];
	static const antlr::BitSet _tokenSet_3;
	static const unsigned long _tokenSet_4_data_[];
	static const antlr::BitSet _tokenSet_4;
	static const unsigned long _tokenSet_5_data_[];
	static const antlr::BitSet _tokenSet_5;
	static const unsigned long _tokenSet_6_data_[];
	static const antlr::BitSet _tokenSet_6;
	static const unsigned long _tokenSet_7_data_[];
	static const antlr::BitSet _tokenSet_7;
	static const unsigned long _tokenSet_8_data_[];
	static const antlr::BitSet _tokenSet_8;
	static const unsigned long _tokenSet_9_data_[];
	static const antlr::BitSet _tokenSet_9;
	static const unsigned long _tokenSet_10_data_[];
	static const antlr::BitSet _tokenSet_10;
	static const unsigned long _tokenSet_11_data_[];
	static const antlr::BitSet _tokenSet_11;
	static const unsigned long _tokenSet_12_data_[];
	static const antlr::BitSet _tokenSet_12;
	static const unsigned long _tokenSet_13_data_[];
	static const antlr::BitSet _tokenSet_13;
	static const unsigned long _tokenSet_14_data_[];
	static const antlr::BitSet _tokenSet_14;
	static const unsigned long _tokenSet_15_data_[];
	static const antlr::BitSet _tokenSet_15;
	static const unsigned long _tokenSet_16_data_[];
	static const antlr::BitSet _tokenSet_16;
	static const unsigned long _tokenSet_17_data_[];
	static const antlr::BitSet _tokenSet_17;
	static const unsigned long _tokenSet_18_data_[];
	static const antlr::BitSet _tokenSet_18;
	static const unsigned long _tokenSet_19_data_[];
	static const antlr::BitSet _tokenSet_19;
	static const unsigned long _tokenSet_20_data_[];
	static const antlr::BitSet _tokenSet_20;
	static const unsigned long _tokenSet_21_data_[];
	static const antlr::BitSet _tokenSet_21;
	static const unsigned long _tokenSet_22_data_[];
	static const antlr::BitSet _tokenSet_22;
	static const unsigned long _tokenSet_23_data_[];
	static const antlr::BitSet _tokenSet_23;
	static const unsigned long _tokenSet_24_data_[];
	static const antlr::BitSet _tokenSet_24;
	static const unsigned long _tokenSet_25_data_[];
	static const antlr::BitSet _tokenSet_25;
	static const unsigned long _tokenSet_26_data_[];
	static const antlr::BitSet _tokenSet_26;
	static const unsigned long _tokenSet_27_data_[];
	static const antlr::BitSet _tokenSet_27;
	static const unsigned long _tokenSet_28_data_[];
	static const antlr::BitSet _tokenSet_28;
	static const unsigned long _tokenSet_29_data_[];
	static const antlr::BitSet _tokenSet_29;
};

ANTLR_END_NAMESPACE
#endif /*INC_FjolnirParser_hpp_*/
