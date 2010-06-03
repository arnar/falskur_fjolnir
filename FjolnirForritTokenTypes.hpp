#ifndef INC_FjolnirForritTokenTypes_hpp_
#define INC_FjolnirForritTokenTypes_hpp_

ANTLR_BEGIN_NAMESPACE(ff)
/* $ANTLR 2.7.3-20030430: "FjolnirForritLexer.g" -> "FjolnirForritTokenTypes.hpp"$ */

#ifndef CUSTOM_API
# define CUSTOM_API
#endif

struct CUSTOM_API FjolnirForritTokenTypes {
	enum {
		EOF_ = 1,
		EIN_SEMIKOMMA = 4,
		EIN_JAFNTOG = 5,
		EIN_MINNA = 6,
		EIN_SVIGIOPNA = 7,
		EIN_SVIGILOKA = 8,
		EIN_ITRUN = 9,
		EIN_INNFLUTT = 10,
		EIN_SAMSETNING = 11,
		EIN_HLIDSETNING = 12,
		EIN_ITRUDHLIDS = 13,
		EIN_OPNASLAUFU = 14,
		EIN_STRENGUR = 15,
		StyriStafur = 16,
		HexStafur = 17,
		NafnStafur = 18,
		EIN_NAFN = 19,
		WS = 20,
		COMMENT = 21,
		EndOfLine = 22,
		NULL_TREE_LOOKAHEAD = 3
	};
};
ANTLR_END_NAMESPACE
#endif /*INC_FjolnirForritTokenTypes_hpp_*/
