/* $ANTLR 2.7.3-20030430: "FjolnirParser.g" -> "FjolnirParser.cpp"$ */
#line 1 "FjolnirParser.g"

#pragma warning( disable : 4251 4267 4101 4267 )

#line 7 "FjolnirParser.cpp"
#include "FjolnirParser.hpp"
#include <antlr/NoViableAltException.hpp>
#include <antlr/SemanticException.hpp>
#include <antlr/ASTFactory.hpp>
ANTLR_BEGIN_NAMESPACE(ff)
#line 1 "FjolnirParser.g"
#line 13 "FjolnirParser.cpp"
FjolnirParser::FjolnirParser(antlr::TokenBuffer& tokenBuf, int k)
: antlr::LLkParser(tokenBuf,k)
{
}

FjolnirParser::FjolnirParser(antlr::TokenBuffer& tokenBuf)
: antlr::LLkParser(tokenBuf,3)
{
}

FjolnirParser::FjolnirParser(antlr::TokenStream& lexer, int k)
: antlr::LLkParser(lexer,k)
{
}

FjolnirParser::FjolnirParser(antlr::TokenStream& lexer)
: antlr::LLkParser(lexer,3)
{
}

FjolnirParser::FjolnirParser(const antlr::ParserSharedInputState& state)
: antlr::LLkParser(state,3)
{
}

void FjolnirParser::forrit() {
	returnAST = antlr::nullAST;
	antlr::ASTPair currentAST;
	antlr::RefAST forrit_AST = antlr::nullAST;
	
	try {      // for error handling
		{ // ( ... )*
		for (;;) {
			if ((LA(1) == EIN_STRENGUR || LA(1) == EIN_NAFN)) {
				{
				if ((LA(1) == EIN_STRENGUR) && (LA(2) == EIN_MINNA)) {
					forritsVeiting();
					if (inputState->guessing==0) {
						astFactory->addASTChild( currentAST, returnAST );
					}
				}
				else if ((LA(1) == EIN_STRENGUR || LA(1) == EIN_NAFN) && (LA(2) == EIN_JAFNTOG)) {
					einingarVeiting();
					if (inputState->guessing==0) {
						astFactory->addASTChild( currentAST, returnAST );
					}
				}
				else {
					throw antlr::NoViableAltException(LT(1), getFilename());
				}
				
				}
				match(EIN_SEMIKOMMA);
			}
			else {
				goto _loop4;
			}
			
		}
		_loop4:;
		} // ( ... )*
		antlr::RefAST tmp2_AST = antlr::nullAST;
		if ( inputState->guessing == 0 ) {
			tmp2_AST = astFactory->create(LT(1));
			astFactory->addASTChild(currentAST, tmp2_AST);
		}
		match(antlr::Token::EOF_TYPE);
		forrit_AST = currentAST.root;
	}
	catch (antlr::RecognitionException& ex) {
		if( inputState->guessing == 0 ) {
			reportError(ex);
			consume();
			consumeUntil(_tokenSet_0);
		} else {
			throw;
		}
	}
	returnAST = forrit_AST;
}

void FjolnirParser::forritsVeiting() {
	returnAST = antlr::nullAST;
	antlr::ASTPair currentAST;
	antlr::RefAST forritsVeiting_AST = antlr::nullAST;
	
	try {      // for error handling
		antlr::RefAST tmp3_AST = antlr::nullAST;
		if ( inputState->guessing == 0 ) {
			tmp3_AST = astFactory->create(LT(1));
			astFactory->addASTChild(currentAST, tmp3_AST);
		}
		match(EIN_STRENGUR);
		antlr::RefAST tmp4_AST = antlr::nullAST;
		if ( inputState->guessing == 0 ) {
			tmp4_AST = astFactory->create(LT(1));
			astFactory->makeASTRoot(currentAST, tmp4_AST);
		}
		match(EIN_MINNA);
		antlr::RefAST tmp5_AST = antlr::nullAST;
		if ( inputState->guessing == 0 ) {
			tmp5_AST = astFactory->create(LT(1));
			astFactory->addASTChild(currentAST, tmp5_AST);
		}
		match(EIN_NAFN);
		eining();
		if (inputState->guessing==0) {
			astFactory->addASTChild( currentAST, returnAST );
		}
		forritsVeiting_AST = currentAST.root;
	}
	catch (antlr::RecognitionException& ex) {
		if( inputState->guessing == 0 ) {
			reportError(ex);
			consume();
			consumeUntil(_tokenSet_1);
		} else {
			throw;
		}
	}
	returnAST = forritsVeiting_AST;
}

void FjolnirParser::einingarVeiting() {
	returnAST = antlr::nullAST;
	antlr::ASTPair currentAST;
	antlr::RefAST einingarVeiting_AST = antlr::nullAST;
	
	try {      // for error handling
		{
		switch ( LA(1)) {
		case EIN_STRENGUR:
		{
			antlr::RefAST tmp6_AST = antlr::nullAST;
			if ( inputState->guessing == 0 ) {
				tmp6_AST = astFactory->create(LT(1));
				astFactory->addASTChild(currentAST, tmp6_AST);
			}
			match(EIN_STRENGUR);
			break;
		}
		case EIN_NAFN:
		{
			antlr::RefAST tmp7_AST = antlr::nullAST;
			if ( inputState->guessing == 0 ) {
				tmp7_AST = astFactory->create(LT(1));
				astFactory->addASTChild(currentAST, tmp7_AST);
			}
			match(EIN_NAFN);
			break;
		}
		default:
		{
			throw antlr::NoViableAltException(LT(1), getFilename());
		}
		}
		}
		antlr::RefAST tmp8_AST = antlr::nullAST;
		if ( inputState->guessing == 0 ) {
			tmp8_AST = astFactory->create(LT(1));
			astFactory->makeASTRoot(currentAST, tmp8_AST);
		}
		match(EIN_JAFNTOG);
		eining();
		if (inputState->guessing==0) {
			astFactory->addASTChild( currentAST, returnAST );
		}
		einingarVeiting_AST = currentAST.root;
	}
	catch (antlr::RecognitionException& ex) {
		if( inputState->guessing == 0 ) {
			reportError(ex);
			consume();
			consumeUntil(_tokenSet_1);
		} else {
			throw;
		}
	}
	returnAST = einingarVeiting_AST;
}

void FjolnirParser::eining() {
	returnAST = antlr::nullAST;
	antlr::ASTPair currentAST;
	antlr::RefAST eining_AST = antlr::nullAST;
	
	try {      // for error handling
		einHlidsett();
		if (inputState->guessing==0) {
			astFactory->addASTChild( currentAST, returnAST );
		}
		eining_AST = currentAST.root;
	}
	catch (antlr::RecognitionException& ex) {
		if( inputState->guessing == 0 ) {
			reportError(ex);
			consume();
			consumeUntil(_tokenSet_2);
		} else {
			throw;
		}
	}
	returnAST = eining_AST;
}

void FjolnirParser::einHlidsett() {
	returnAST = antlr::nullAST;
	antlr::ASTPair currentAST;
	antlr::RefAST einHlidsett_AST = antlr::nullAST;
	
	try {      // for error handling
		einSamsett();
		if (inputState->guessing==0) {
			astFactory->addASTChild( currentAST, returnAST );
		}
		{ // ( ... )*
		for (;;) {
			if ((LA(1) == EIN_HLIDSETNING)) {
				antlr::RefAST tmp9_AST = antlr::nullAST;
				if ( inputState->guessing == 0 ) {
					tmp9_AST = astFactory->create(LT(1));
					astFactory->makeASTRoot(currentAST, tmp9_AST);
				}
				match(EIN_HLIDSETNING);
				einSamsett();
				if (inputState->guessing==0) {
					astFactory->addASTChild( currentAST, returnAST );
				}
			}
			else {
				goto _loop14;
			}
			
		}
		_loop14:;
		} // ( ... )*
		einHlidsett_AST = currentAST.root;
	}
	catch (antlr::RecognitionException& ex) {
		if( inputState->guessing == 0 ) {
			reportError(ex);
			consume();
			consumeUntil(_tokenSet_3);
		} else {
			throw;
		}
	}
	returnAST = einHlidsett_AST;
}

void FjolnirParser::einItrunarhlidsett() {
	returnAST = antlr::nullAST;
	antlr::ASTPair currentAST;
	antlr::RefAST einItrunarhlidsett_AST = antlr::nullAST;
	
	try {      // for error handling
		einHlidsett();
		if (inputState->guessing==0) {
			astFactory->addASTChild( currentAST, returnAST );
		}
		{ // ( ... )*
		for (;;) {
			if ((LA(1) == EIN_ITRUDHLIDS)) {
				antlr::RefAST tmp10_AST = antlr::nullAST;
				if ( inputState->guessing == 0 ) {
					tmp10_AST = astFactory->create(LT(1));
					astFactory->makeASTRoot(currentAST, tmp10_AST);
				}
				match(EIN_ITRUDHLIDS);
				einHlidsett();
				if (inputState->guessing==0) {
					astFactory->addASTChild( currentAST, returnAST );
				}
			}
			else {
				goto _loop11;
			}
			
		}
		_loop11:;
		} // ( ... )*
		einItrunarhlidsett_AST = currentAST.root;
	}
	catch (antlr::RecognitionException& ex) {
		if( inputState->guessing == 0 ) {
			reportError(ex);
			consume();
			consumeUntil(_tokenSet_0);
		} else {
			throw;
		}
	}
	returnAST = einItrunarhlidsett_AST;
}

void FjolnirParser::einSamsett() {
	returnAST = antlr::nullAST;
	antlr::ASTPair currentAST;
	antlr::RefAST einSamsett_AST = antlr::nullAST;
	
	try {      // for error handling
		einInnflutt();
		if (inputState->guessing==0) {
			astFactory->addASTChild( currentAST, returnAST );
		}
		{ // ( ... )*
		for (;;) {
			if ((LA(1) == EIN_SAMSETNING)) {
				antlr::RefAST tmp11_AST = antlr::nullAST;
				if ( inputState->guessing == 0 ) {
					tmp11_AST = astFactory->create(LT(1));
					astFactory->makeASTRoot(currentAST, tmp11_AST);
				}
				match(EIN_SAMSETNING);
				einInnflutt();
				if (inputState->guessing==0) {
					astFactory->addASTChild( currentAST, returnAST );
				}
			}
			else {
				goto _loop17;
			}
			
		}
		_loop17:;
		} // ( ... )*
		einSamsett_AST = currentAST.root;
	}
	catch (antlr::RecognitionException& ex) {
		if( inputState->guessing == 0 ) {
			reportError(ex);
			consume();
			consumeUntil(_tokenSet_4);
		} else {
			throw;
		}
	}
	returnAST = einSamsett_AST;
}

void FjolnirParser::einInnflutt() {
	returnAST = antlr::nullAST;
	antlr::ASTPair currentAST;
	antlr::RefAST einInnflutt_AST = antlr::nullAST;
	
	try {      // for error handling
		einItrud();
		if (inputState->guessing==0) {
			astFactory->addASTChild( currentAST, returnAST );
		}
		{ // ( ... )*
		for (;;) {
			if ((LA(1) == EIN_INNFLUTT)) {
				antlr::RefAST tmp12_AST = antlr::nullAST;
				if ( inputState->guessing == 0 ) {
					tmp12_AST = astFactory->create(LT(1));
					astFactory->makeASTRoot(currentAST, tmp12_AST);
				}
				match(EIN_INNFLUTT);
				einItrud();
				if (inputState->guessing==0) {
					astFactory->addASTChild( currentAST, returnAST );
				}
			}
			else {
				goto _loop20;
			}
			
		}
		_loop20:;
		} // ( ... )*
		einInnflutt_AST = currentAST.root;
	}
	catch (antlr::RecognitionException& ex) {
		if( inputState->guessing == 0 ) {
			reportError(ex);
			consume();
			consumeUntil(_tokenSet_5);
		} else {
			throw;
		}
	}
	returnAST = einInnflutt_AST;
}

void FjolnirParser::einItrud() {
	returnAST = antlr::nullAST;
	antlr::ASTPair currentAST;
	antlr::RefAST einItrud_AST = antlr::nullAST;
	
	try {      // for error handling
		switch ( LA(1)) {
		case EIN_ITRUN:
		{
			antlr::RefAST tmp13_AST = antlr::nullAST;
			if ( inputState->guessing == 0 ) {
				tmp13_AST = astFactory->create(LT(1));
				astFactory->makeASTRoot(currentAST, tmp13_AST);
			}
			match(EIN_ITRUN);
			einItrud();
			if (inputState->guessing==0) {
				astFactory->addASTChild( currentAST, returnAST );
			}
			einItrud_AST = currentAST.root;
			break;
		}
		case EIN_SVIGIOPNA:
		case EIN_OPNASLAUFU:
		case EIN_STRENGUR:
		case EIN_NAFN:
		{
			grunnEining();
			if (inputState->guessing==0) {
				astFactory->addASTChild( currentAST, returnAST );
			}
			einItrud_AST = currentAST.root;
			break;
		}
		default:
		{
			throw antlr::NoViableAltException(LT(1), getFilename());
		}
		}
	}
	catch (antlr::RecognitionException& ex) {
		if( inputState->guessing == 0 ) {
			reportError(ex);
			consume();
			consumeUntil(_tokenSet_6);
		} else {
			throw;
		}
	}
	returnAST = einItrud_AST;
}

void FjolnirParser::grunnEining() {
	returnAST = antlr::nullAST;
	antlr::ASTPair currentAST;
	antlr::RefAST grunnEining_AST = antlr::nullAST;
	
	try {      // for error handling
		switch ( LA(1)) {
		case EIN_STRENGUR:
		{
			antlr::RefAST tmp14_AST = antlr::nullAST;
			if ( inputState->guessing == 0 ) {
				tmp14_AST = astFactory->create(LT(1));
				astFactory->addASTChild(currentAST, tmp14_AST);
			}
			match(EIN_STRENGUR);
			grunnEining_AST = currentAST.root;
			break;
		}
		case EIN_NAFN:
		{
			antlr::RefAST tmp15_AST = antlr::nullAST;
			if ( inputState->guessing == 0 ) {
				tmp15_AST = astFactory->create(LT(1));
				astFactory->addASTChild(currentAST, tmp15_AST);
			}
			match(EIN_NAFN);
			grunnEining_AST = currentAST.root;
			break;
		}
		case EIN_SVIGIOPNA:
		{
			match(EIN_SVIGIOPNA);
			eining();
			if (inputState->guessing==0) {
				astFactory->addASTChild( currentAST, returnAST );
			}
			match(EIN_SVIGILOKA);
			grunnEining_AST = currentAST.root;
			break;
		}
		case EIN_OPNASLAUFU:
		{
			antlr::RefAST tmp18_AST = antlr::nullAST;
			if ( inputState->guessing == 0 ) {
				tmp18_AST = astFactory->create(LT(1));
				astFactory->makeASTRoot(currentAST, tmp18_AST);
			}
			match(EIN_OPNASLAUFU);
			{ // ( ... )*
			for (;;) {
				if ((_tokenSet_7.member(LA(1)))) {
					vorpun();
					if (inputState->guessing==0) {
						astFactory->addASTChild( currentAST, returnAST );
					}
				}
				else {
					goto _loop24;
				}
				
			}
			_loop24:;
			} // ( ... )*
			match(EIN_LOKASLAUFU);
			grunnEining_AST = currentAST.root;
			break;
		}
		default:
		{
			throw antlr::NoViableAltException(LT(1), getFilename());
		}
		}
	}
	catch (antlr::RecognitionException& ex) {
		if( inputState->guessing == 0 ) {
			reportError(ex);
			consume();
			consumeUntil(_tokenSet_6);
		} else {
			throw;
		}
	}
	returnAST = grunnEining_AST;
}

void FjolnirParser::vorpun() {
	returnAST = antlr::nullAST;
	antlr::ASTPair currentAST;
	antlr::RefAST vorpun_AST = antlr::nullAST;
	
	try {      // for error handling
		{
		switch ( LA(1)) {
		case NAFN:
		{
			antlr::RefAST tmp20_AST = antlr::nullAST;
			if ( inputState->guessing == 0 ) {
				tmp20_AST = astFactory->create(LT(1));
				astFactory->addASTChild(currentAST, tmp20_AST);
			}
			match(NAFN);
			break;
		}
		case ADGERD_7:
		case ADGERD_6:
		case ADGERD_5:
		case ADGERD_4:
		case ADGERD_3:
		case ADGERD_2:
		case ADGERD_1:
		{
			adgerd();
			if (inputState->guessing==0) {
				astFactory->addASTChild( currentAST, returnAST );
			}
			break;
		}
		default:
		{
			throw antlr::NoViableAltException(LT(1), getFilename());
		}
		}
		}
		antlr::RefAST tmp21_AST = antlr::nullAST;
		if ( inputState->guessing == 0 ) {
			tmp21_AST = astFactory->create(LT(1));
			astFactory->makeASTRoot(currentAST, tmp21_AST);
		}
		match(INNSETNING);
		{
		switch ( LA(1)) {
		case NAFN:
		{
			antlr::RefAST tmp22_AST = antlr::nullAST;
			if ( inputState->guessing == 0 ) {
				tmp22_AST = astFactory->create(LT(1));
				astFactory->addASTChild(currentAST, tmp22_AST);
			}
			match(NAFN);
			break;
		}
		case ADGERD_7:
		case ADGERD_6:
		case ADGERD_5:
		case ADGERD_4:
		case ADGERD_3:
		case ADGERD_2:
		case ADGERD_1:
		{
			adgerd();
			if (inputState->guessing==0) {
				astFactory->addASTChild( currentAST, returnAST );
			}
			break;
		}
		case L_BREYTA:
		{
			antlr::RefAST tmp23_AST = antlr::nullAST;
			if ( inputState->guessing == 0 ) {
				tmp23_AST = astFactory->create(LT(1));
				astFactory->addASTChild(currentAST, tmp23_AST);
			}
			match(L_BREYTA);
			break;
		}
		case L_STEF:
		{
			stefskilgreining();
			if (inputState->guessing==0) {
				astFactory->addASTChild( currentAST, returnAST );
			}
			break;
		}
		default:
		{
			throw antlr::NoViableAltException(LT(1), getFilename());
		}
		}
		}
		vorpun_AST = currentAST.root;
	}
	catch (antlr::RecognitionException& ex) {
		if( inputState->guessing == 0 ) {
			reportError(ex);
			consume();
			consumeUntil(_tokenSet_8);
		} else {
			throw;
		}
	}
	returnAST = vorpun_AST;
}

void FjolnirParser::adgerd() {
	returnAST = antlr::nullAST;
	antlr::ASTPair currentAST;
	antlr::RefAST adgerd_AST = antlr::nullAST;
	
	try {      // for error handling
		{
		switch ( LA(1)) {
		case ADGERD_1:
		{
			antlr::RefAST tmp24_AST = antlr::nullAST;
			if ( inputState->guessing == 0 ) {
				tmp24_AST = astFactory->create(LT(1));
				astFactory->addASTChild(currentAST, tmp24_AST);
			}
			match(ADGERD_1);
			break;
		}
		case ADGERD_2:
		{
			antlr::RefAST tmp25_AST = antlr::nullAST;
			if ( inputState->guessing == 0 ) {
				tmp25_AST = astFactory->create(LT(1));
				astFactory->addASTChild(currentAST, tmp25_AST);
			}
			match(ADGERD_2);
			break;
		}
		case ADGERD_3:
		{
			antlr::RefAST tmp26_AST = antlr::nullAST;
			if ( inputState->guessing == 0 ) {
				tmp26_AST = astFactory->create(LT(1));
				astFactory->addASTChild(currentAST, tmp26_AST);
			}
			match(ADGERD_3);
			break;
		}
		case ADGERD_4:
		{
			antlr::RefAST tmp27_AST = antlr::nullAST;
			if ( inputState->guessing == 0 ) {
				tmp27_AST = astFactory->create(LT(1));
				astFactory->addASTChild(currentAST, tmp27_AST);
			}
			match(ADGERD_4);
			break;
		}
		case ADGERD_5:
		{
			antlr::RefAST tmp28_AST = antlr::nullAST;
			if ( inputState->guessing == 0 ) {
				tmp28_AST = astFactory->create(LT(1));
				astFactory->addASTChild(currentAST, tmp28_AST);
			}
			match(ADGERD_5);
			break;
		}
		case ADGERD_6:
		{
			antlr::RefAST tmp29_AST = antlr::nullAST;
			if ( inputState->guessing == 0 ) {
				tmp29_AST = astFactory->create(LT(1));
				astFactory->addASTChild(currentAST, tmp29_AST);
			}
			match(ADGERD_6);
			break;
		}
		case ADGERD_7:
		{
			antlr::RefAST tmp30_AST = antlr::nullAST;
			if ( inputState->guessing == 0 ) {
				tmp30_AST = astFactory->create(LT(1));
				astFactory->addASTChild(currentAST, tmp30_AST);
			}
			match(ADGERD_7);
			break;
		}
		default:
		{
			throw antlr::NoViableAltException(LT(1), getFilename());
		}
		}
		}
		if ( inputState->guessing==0 ) {
			adgerd_AST = antlr::RefAST(currentAST.root);
#line 71 "FjolnirParser.g"
			adgerd_AST->setType(ADGERD);
#line 732 "FjolnirParser.cpp"
		}
		adgerd_AST = currentAST.root;
	}
	catch (antlr::RecognitionException& ex) {
		if( inputState->guessing == 0 ) {
			reportError(ex);
			consume();
			consumeUntil(_tokenSet_9);
		} else {
			throw;
		}
	}
	returnAST = adgerd_AST;
}

void FjolnirParser::stefskilgreining() {
	returnAST = antlr::nullAST;
	antlr::ASTPair currentAST;
	antlr::RefAST stefskilgreining_AST = antlr::nullAST;
	
	try {      // for error handling
		antlr::RefAST tmp31_AST = antlr::nullAST;
		if ( inputState->guessing == 0 ) {
			tmp31_AST = astFactory->create(LT(1));
			astFactory->makeASTRoot(currentAST, tmp31_AST);
		}
		match(L_STEF);
		match(SVIGI_OPNA);
		nafnaruna();
		if (inputState->guessing==0) {
			astFactory->addASTChild( currentAST, returnAST );
		}
		match(SEMIKOMMA);
		nafnaruna();
		if (inputState->guessing==0) {
			astFactory->addASTChild( currentAST, returnAST );
		}
		match(SVIGI_LOKA);
		skilgreiningar();
		if (inputState->guessing==0) {
			astFactory->addASTChild( currentAST, returnAST );
		}
		match(L_STOFN);
		segdaruna();
		if (inputState->guessing==0) {
			astFactory->addASTChild( currentAST, returnAST );
		}
		match(L_STOFNLOK);
		{
		switch ( LA(1)) {
		case SLAUFA_OPNA:
		{
			innriTextaeining();
			if (inputState->guessing==0) {
				astFactory->addASTChild( currentAST, returnAST );
			}
			break;
		}
		case EIN_LOKASLAUFU:
		case ADGERD_7:
		case ADGERD_6:
		case ADGERD_5:
		case ADGERD_4:
		case ADGERD_3:
		case ADGERD_2:
		case ADGERD_1:
		case NAFN:
		case SLAUFA_LOKA:
		{
			break;
		}
		default:
		{
			throw antlr::NoViableAltException(LT(1), getFilename());
		}
		}
		}
		stefskilgreining_AST = currentAST.root;
	}
	catch (antlr::RecognitionException& ex) {
		if( inputState->guessing == 0 ) {
			reportError(ex);
			consume();
			consumeUntil(_tokenSet_10);
		} else {
			throw;
		}
	}
	returnAST = stefskilgreining_AST;
}

void FjolnirParser::nafnaruna() {
	returnAST = antlr::nullAST;
	antlr::ASTPair currentAST;
	antlr::RefAST nafnaruna_AST = antlr::nullAST;
	
	try {      // for error handling
		{
		switch ( LA(1)) {
		case NAFN:
		{
			antlr::RefAST tmp37_AST = antlr::nullAST;
			if ( inputState->guessing == 0 ) {
				tmp37_AST = astFactory->create(LT(1));
				astFactory->addASTChild(currentAST, tmp37_AST);
			}
			match(NAFN);
			{ // ( ... )*
			for (;;) {
				if ((LA(1) == KOMMA)) {
					match(KOMMA);
					antlr::RefAST tmp39_AST = antlr::nullAST;
					if ( inputState->guessing == 0 ) {
						tmp39_AST = astFactory->create(LT(1));
						astFactory->addASTChild(currentAST, tmp39_AST);
					}
					match(NAFN);
				}
				else {
					goto _loop35;
				}
				
			}
			_loop35:;
			} // ( ... )*
			break;
		}
		case SVIGI_LOKA:
		case SEMIKOMMA:
		{
			break;
		}
		default:
		{
			throw antlr::NoViableAltException(LT(1), getFilename());
		}
		}
		}
		if ( inputState->guessing==0 ) {
			nafnaruna_AST = antlr::RefAST(currentAST.root);
#line 88 "FjolnirParser.g"
			nafnaruna_AST = antlr::RefAST(astFactory->make((new antlr::ASTArray(2))->add(astFactory->create(NAFNARUNA,"nafnaruna"))->add(nafnaruna_AST)));
#line 875 "FjolnirParser.cpp"
			currentAST.root = nafnaruna_AST;
			if ( nafnaruna_AST!=antlr::nullAST &&
				nafnaruna_AST->getFirstChild() != antlr::nullAST )
				  currentAST.child = nafnaruna_AST->getFirstChild();
			else
				currentAST.child = nafnaruna_AST;
			currentAST.advanceChildToEnd();
		}
		nafnaruna_AST = currentAST.root;
	}
	catch (antlr::RecognitionException& ex) {
		if( inputState->guessing == 0 ) {
			reportError(ex);
			consume();
			consumeUntil(_tokenSet_11);
		} else {
			throw;
		}
	}
	returnAST = nafnaruna_AST;
}

void FjolnirParser::skilgreiningar() {
	returnAST = antlr::nullAST;
	antlr::ASTPair currentAST;
	antlr::RefAST skilgreiningar_AST = antlr::nullAST;
	
	try {      // for error handling
		{ // ( ... )*
		for (;;) {
			switch ( LA(1)) {
			case L_INNFLUTT:
			{
				skilgr_innflutt();
				if (inputState->guessing==0) {
					astFactory->addASTChild( currentAST, returnAST );
				}
				break;
			}
			case L_STADVAER:
			{
				skilgr_stadvaer();
				if (inputState->guessing==0) {
					astFactory->addASTChild( currentAST, returnAST );
				}
				break;
			}
			default:
			{
				goto _loop38;
			}
			}
		}
		_loop38:;
		} // ( ... )*
		if ( inputState->guessing==0 ) {
			skilgreiningar_AST = antlr::RefAST(currentAST.root);
#line 93 "FjolnirParser.g"
			skilgreiningar_AST = antlr::RefAST(astFactory->make((new antlr::ASTArray(2))->add(astFactory->create(SKILGREININGAR,"skilgreiningar"))->add(skilgreiningar_AST)));
#line 935 "FjolnirParser.cpp"
			currentAST.root = skilgreiningar_AST;
			if ( skilgreiningar_AST!=antlr::nullAST &&
				skilgreiningar_AST->getFirstChild() != antlr::nullAST )
				  currentAST.child = skilgreiningar_AST->getFirstChild();
			else
				currentAST.child = skilgreiningar_AST;
			currentAST.advanceChildToEnd();
		}
		skilgreiningar_AST = currentAST.root;
	}
	catch (antlr::RecognitionException& ex) {
		if( inputState->guessing == 0 ) {
			reportError(ex);
			consume();
			consumeUntil(_tokenSet_12);
		} else {
			throw;
		}
	}
	returnAST = skilgreiningar_AST;
}

void FjolnirParser::segdaruna() {
	returnAST = antlr::nullAST;
	antlr::ASTPair currentAST;
	antlr::RefAST segdaruna_AST = antlr::nullAST;
	
	try {      // for error handling
		{
		switch ( LA(1)) {
		case ADGERD_7:
		case ADGERD_6:
		case ADGERD_5:
		case ADGERD_4:
		case ADGERD_3:
		case ADGERD_2:
		case ADGERD_1:
		case L_EF:
		case L_EKKI:
		case L_FYRIR:
		case L_LYKKJA:
		case L_MEDAN:
		case L_SKILA:
		case L_STEF:
		case L_STOFN:
		case L_UT:
		case L_VAL:
		case SVIGI_OPNA:
		case HORNKLOFI_OPNA:
		case STAFFASTI:
		case STRENGFASTI:
		case FJOLDATALA:
		case HEILTALA:
		case FLEYTITALA:
		case TOMAGILDI:
		case NAFN:
		{
			segd();
			if (inputState->guessing==0) {
				astFactory->addASTChild( currentAST, returnAST );
			}
			{ // ( ... )*
			for (;;) {
				if ((LA(1) == KOMMA)) {
					match(KOMMA);
					segd();
					if (inputState->guessing==0) {
						astFactory->addASTChild( currentAST, returnAST );
					}
				}
				else {
					goto _loop57;
				}
				
			}
			_loop57:;
			} // ( ... )*
			break;
		}
		case L_ANNARS:
		case L_ANNARSEF:
		case L_EFLOK:
		case L_KOSTUR:
		case L_LYKKJULOK:
		case L_STOFNLOK:
		case L_VALLOK:
		case SVIGI_LOKA:
		case SEMIKOMMA:
		case HORNKLOFI_LOKA:
		{
			break;
		}
		default:
		{
			throw antlr::NoViableAltException(LT(1), getFilename());
		}
		}
		}
		if ( inputState->guessing==0 ) {
			segdaruna_AST = antlr::RefAST(currentAST.root);
#line 146 "FjolnirParser.g"
			segdaruna_AST = antlr::RefAST(astFactory->make((new antlr::ASTArray(2))->add(astFactory->create(SEGDARUNA,"segðaruna"))->add(segdaruna_AST)));
#line 1038 "FjolnirParser.cpp"
			currentAST.root = segdaruna_AST;
			if ( segdaruna_AST!=antlr::nullAST &&
				segdaruna_AST->getFirstChild() != antlr::nullAST )
				  currentAST.child = segdaruna_AST->getFirstChild();
			else
				currentAST.child = segdaruna_AST;
			currentAST.advanceChildToEnd();
		}
		segdaruna_AST = currentAST.root;
	}
	catch (antlr::RecognitionException& ex) {
		if( inputState->guessing == 0 ) {
			reportError(ex);
			consume();
			consumeUntil(_tokenSet_13);
		} else {
			throw;
		}
	}
	returnAST = segdaruna_AST;
}

void FjolnirParser::innriTextaeining() {
	returnAST = antlr::nullAST;
	antlr::ASTPair currentAST;
	antlr::RefAST innriTextaeining_AST = antlr::nullAST;
	
	try {      // for error handling
		antlr::RefAST tmp41_AST = antlr::nullAST;
		if ( inputState->guessing == 0 ) {
			tmp41_AST = astFactory->create(LT(1));
			astFactory->makeASTRoot(currentAST, tmp41_AST);
		}
		match(SLAUFA_OPNA);
		{ // ( ... )*
		for (;;) {
			if ((LA(1) == NAFN)) {
				innraStef();
				if (inputState->guessing==0) {
					astFactory->addASTChild( currentAST, returnAST );
				}
			}
			else {
				goto _loop52;
			}
			
		}
		_loop52:;
		} // ( ... )*
		match(SLAUFA_LOKA);
		innriTextaeining_AST = currentAST.root;
	}
	catch (antlr::RecognitionException& ex) {
		if( inputState->guessing == 0 ) {
			reportError(ex);
			consume();
			consumeUntil(_tokenSet_10);
		} else {
			throw;
		}
	}
	returnAST = innriTextaeining_AST;
}

void FjolnirParser::skilgr_innflutt() {
	returnAST = antlr::nullAST;
	antlr::ASTPair currentAST;
	antlr::RefAST skilgr_innflutt_AST = antlr::nullAST;
	
	try {      // for error handling
		antlr::RefAST tmp43_AST = antlr::nullAST;
		if ( inputState->guessing == 0 ) {
			tmp43_AST = astFactory->create(LT(1));
			astFactory->makeASTRoot(currentAST, tmp43_AST);
		}
		match(L_INNFLUTT);
		nafnaruna_ekkitom();
		if (inputState->guessing==0) {
			astFactory->addASTChild( currentAST, returnAST );
		}
		skilgr_innflutt_AST = currentAST.root;
	}
	catch (antlr::RecognitionException& ex) {
		if( inputState->guessing == 0 ) {
			reportError(ex);
			consume();
			consumeUntil(_tokenSet_14);
		} else {
			throw;
		}
	}
	returnAST = skilgr_innflutt_AST;
}

void FjolnirParser::skilgr_stadvaer() {
	returnAST = antlr::nullAST;
	antlr::ASTPair currentAST;
	antlr::RefAST skilgr_stadvaer_AST = antlr::nullAST;
	
	try {      // for error handling
		antlr::RefAST tmp44_AST = antlr::nullAST;
		if ( inputState->guessing == 0 ) {
			tmp44_AST = astFactory->create(LT(1));
			astFactory->makeASTRoot(currentAST, tmp44_AST);
		}
		match(L_STADVAER);
		frumstillingaruna();
		if (inputState->guessing==0) {
			astFactory->addASTChild( currentAST, returnAST );
		}
		skilgr_stadvaer_AST = currentAST.root;
	}
	catch (antlr::RecognitionException& ex) {
		if( inputState->guessing == 0 ) {
			reportError(ex);
			consume();
			consumeUntil(_tokenSet_14);
		} else {
			throw;
		}
	}
	returnAST = skilgr_stadvaer_AST;
}

void FjolnirParser::nafnaruna_ekkitom() {
	returnAST = antlr::nullAST;
	antlr::ASTPair currentAST;
	antlr::RefAST nafnaruna_ekkitom_AST = antlr::nullAST;
	
	try {      // for error handling
		antlr::RefAST tmp45_AST = antlr::nullAST;
		if ( inputState->guessing == 0 ) {
			tmp45_AST = astFactory->create(LT(1));
			astFactory->addASTChild(currentAST, tmp45_AST);
		}
		match(NAFN);
		{ // ( ... )*
		for (;;) {
			if ((LA(1) == KOMMA)) {
				match(KOMMA);
				antlr::RefAST tmp47_AST = antlr::nullAST;
				if ( inputState->guessing == 0 ) {
					tmp47_AST = astFactory->create(LT(1));
					astFactory->addASTChild(currentAST, tmp47_AST);
				}
				match(NAFN);
			}
			else {
				goto _loop43;
			}
			
		}
		_loop43:;
		} // ( ... )*
		nafnaruna_ekkitom_AST = currentAST.root;
	}
	catch (antlr::RecognitionException& ex) {
		if( inputState->guessing == 0 ) {
			reportError(ex);
			consume();
			consumeUntil(_tokenSet_14);
		} else {
			throw;
		}
	}
	returnAST = nafnaruna_ekkitom_AST;
}

void FjolnirParser::frumstillingaruna() {
	returnAST = antlr::nullAST;
	antlr::ASTPair currentAST;
	antlr::RefAST frumstillingaruna_AST = antlr::nullAST;
	
	try {      // for error handling
		{
		if ((LA(1) == NAFN) && (_tokenSet_15.member(LA(2)))) {
			antlr::RefAST tmp48_AST = antlr::nullAST;
			if ( inputState->guessing == 0 ) {
				tmp48_AST = astFactory->create(LT(1));
				astFactory->addASTChild(currentAST, tmp48_AST);
			}
			match(NAFN);
		}
		else if ((LA(1) == NAFN) && (LA(2) == GILDISVEITING)) {
			skilgrOgGildisv();
			if (inputState->guessing==0) {
				astFactory->addASTChild( currentAST, returnAST );
			}
		}
		else {
			throw antlr::NoViableAltException(LT(1), getFilename());
		}
		
		}
		{ // ( ... )*
		for (;;) {
			if ((LA(1) == KOMMA)) {
				match(KOMMA);
				{
				if ((LA(1) == NAFN) && (_tokenSet_15.member(LA(2)))) {
					antlr::RefAST tmp50_AST = antlr::nullAST;
					if ( inputState->guessing == 0 ) {
						tmp50_AST = astFactory->create(LT(1));
						astFactory->addASTChild(currentAST, tmp50_AST);
					}
					match(NAFN);
				}
				else if ((LA(1) == NAFN) && (LA(2) == GILDISVEITING)) {
					skilgrOgGildisv();
					if (inputState->guessing==0) {
						astFactory->addASTChild( currentAST, returnAST );
					}
				}
				else {
					throw antlr::NoViableAltException(LT(1), getFilename());
				}
				
				}
			}
			else {
				goto _loop48;
			}
			
		}
		_loop48:;
		} // ( ... )*
		frumstillingaruna_AST = currentAST.root;
	}
	catch (antlr::RecognitionException& ex) {
		if( inputState->guessing == 0 ) {
			reportError(ex);
			consume();
			consumeUntil(_tokenSet_14);
		} else {
			throw;
		}
	}
	returnAST = frumstillingaruna_AST;
}

void FjolnirParser::skilgrOgGildisv() {
	returnAST = antlr::nullAST;
	antlr::ASTPair currentAST;
	antlr::RefAST skilgrOgGildisv_AST = antlr::nullAST;
	
	try {      // for error handling
		antlr::RefAST tmp51_AST = antlr::nullAST;
		if ( inputState->guessing == 0 ) {
			tmp51_AST = astFactory->create(LT(1));
			astFactory->addASTChild(currentAST, tmp51_AST);
		}
		match(NAFN);
		antlr::RefAST tmp52_AST = antlr::nullAST;
		if ( inputState->guessing == 0 ) {
			tmp52_AST = astFactory->create(LT(1));
			astFactory->makeASTRoot(currentAST, tmp52_AST);
		}
		match(GILDISVEITING);
		segd();
		if (inputState->guessing==0) {
			astFactory->addASTChild( currentAST, returnAST );
		}
		skilgrOgGildisv_AST = currentAST.root;
	}
	catch (antlr::RecognitionException& ex) {
		if( inputState->guessing == 0 ) {
			reportError(ex);
			consume();
			consumeUntil(_tokenSet_15);
		} else {
			throw;
		}
	}
	returnAST = skilgrOgGildisv_AST;
}

void FjolnirParser::segd() {
	returnAST = antlr::nullAST;
	antlr::ASTPair currentAST;
	antlr::RefAST segd_AST = antlr::nullAST;
	
	try {      // for error handling
		ogSegd();
		if (inputState->guessing==0) {
			astFactory->addASTChild( currentAST, returnAST );
		}
		{ // ( ... )*
		for (;;) {
			if ((LA(1) == L_EDA) && (_tokenSet_16.member(LA(2))) && (_tokenSet_17.member(LA(3)))) {
				antlr::RefAST tmp53_AST = antlr::nullAST;
				if ( inputState->guessing == 0 ) {
					tmp53_AST = astFactory->create(LT(1));
					astFactory->makeASTRoot(currentAST, tmp53_AST);
				}
				match(L_EDA);
				ogSegd();
				if (inputState->guessing==0) {
					astFactory->addASTChild( currentAST, returnAST );
				}
			}
			else {
				goto _loop60;
			}
			
		}
		_loop60:;
		} // ( ... )*
		segd_AST = currentAST.root;
	}
	catch (antlr::RecognitionException& ex) {
		if( inputState->guessing == 0 ) {
			reportError(ex);
			consume();
			consumeUntil(_tokenSet_18);
		} else {
			throw;
		}
	}
	returnAST = segd_AST;
}

void FjolnirParser::innraStef() {
	returnAST = antlr::nullAST;
	antlr::ASTPair currentAST;
	antlr::RefAST innraStef_AST = antlr::nullAST;
	
	try {      // for error handling
		antlr::RefAST tmp54_AST = antlr::nullAST;
		if ( inputState->guessing == 0 ) {
			tmp54_AST = astFactory->create(LT(1));
			astFactory->addASTChild(currentAST, tmp54_AST);
		}
		match(NAFN);
		antlr::RefAST tmp55_AST = antlr::nullAST;
		if ( inputState->guessing == 0 ) {
			tmp55_AST = astFactory->create(LT(1));
			astFactory->makeASTRoot(currentAST, tmp55_AST);
		}
		match(INNSETNING);
		stefskilgreining();
		if (inputState->guessing==0) {
			astFactory->addASTChild( currentAST, returnAST );
		}
		innraStef_AST = currentAST.root;
	}
	catch (antlr::RecognitionException& ex) {
		if( inputState->guessing == 0 ) {
			reportError(ex);
			consume();
			consumeUntil(_tokenSet_19);
		} else {
			throw;
		}
	}
	returnAST = innraStef_AST;
}

void FjolnirParser::ogSegd() {
	returnAST = antlr::nullAST;
	antlr::ASTPair currentAST;
	antlr::RefAST ogSegd_AST = antlr::nullAST;
	
	try {      // for error handling
		ekkiSegd();
		if (inputState->guessing==0) {
			astFactory->addASTChild( currentAST, returnAST );
		}
		{ // ( ... )*
		for (;;) {
			if ((LA(1) == L_OG) && (_tokenSet_16.member(LA(2))) && (_tokenSet_17.member(LA(3)))) {
				antlr::RefAST tmp56_AST = antlr::nullAST;
				if ( inputState->guessing == 0 ) {
					tmp56_AST = astFactory->create(LT(1));
					astFactory->makeASTRoot(currentAST, tmp56_AST);
				}
				match(L_OG);
				ekkiSegd();
				if (inputState->guessing==0) {
					astFactory->addASTChild( currentAST, returnAST );
				}
			}
			else {
				goto _loop63;
			}
			
		}
		_loop63:;
		} // ( ... )*
		ogSegd_AST = currentAST.root;
	}
	catch (antlr::RecognitionException& ex) {
		if( inputState->guessing == 0 ) {
			reportError(ex);
			consume();
			consumeUntil(_tokenSet_18);
		} else {
			throw;
		}
	}
	returnAST = ogSegd_AST;
}

void FjolnirParser::ekkiSegd() {
	returnAST = antlr::nullAST;
	antlr::ASTPair currentAST;
	antlr::RefAST ekkiSegd_AST = antlr::nullAST;
	
	try {      // for error handling
		switch ( LA(1)) {
		case L_EKKI:
		{
			antlr::RefAST tmp57_AST = antlr::nullAST;
			if ( inputState->guessing == 0 ) {
				tmp57_AST = astFactory->create(LT(1));
				astFactory->makeASTRoot(currentAST, tmp57_AST);
			}
			match(L_EKKI);
			ekkiSegd();
			if (inputState->guessing==0) {
				astFactory->addASTChild( currentAST, returnAST );
			}
			ekkiSegd_AST = currentAST.root;
			break;
		}
		case ADGERD_7:
		case ADGERD_6:
		case ADGERD_5:
		case ADGERD_4:
		case ADGERD_3:
		case ADGERD_2:
		case ADGERD_1:
		case L_EF:
		case L_FYRIR:
		case L_LYKKJA:
		case L_MEDAN:
		case L_SKILA:
		case L_STEF:
		case L_STOFN:
		case L_UT:
		case L_VAL:
		case SVIGI_OPNA:
		case HORNKLOFI_OPNA:
		case STAFFASTI:
		case STRENGFASTI:
		case FJOLDATALA:
		case HEILTALA:
		case FLEYTITALA:
		case TOMAGILDI:
		case NAFN:
		{
			adgerd_1();
			if (inputState->guessing==0) {
				astFactory->addASTChild( currentAST, returnAST );
			}
			ekkiSegd_AST = currentAST.root;
			break;
		}
		default:
		{
			throw antlr::NoViableAltException(LT(1), getFilename());
		}
		}
	}
	catch (antlr::RecognitionException& ex) {
		if( inputState->guessing == 0 ) {
			reportError(ex);
			consume();
			consumeUntil(_tokenSet_18);
		} else {
			throw;
		}
	}
	returnAST = ekkiSegd_AST;
}

void FjolnirParser::adgerd_1() {
	returnAST = antlr::nullAST;
	antlr::ASTPair currentAST;
	antlr::RefAST adgerd_1_AST = antlr::nullAST;
	
	try {      // for error handling
		adgerd_2();
		if (inputState->guessing==0) {
			astFactory->addASTChild( currentAST, returnAST );
		}
		{ // ( ... )*
		for (;;) {
			if ((LA(1) == ADGERD_1) && (_tokenSet_20.member(LA(2))) && (_tokenSet_17.member(LA(3)))) {
				antlr::RefAST tmp58_AST = antlr::nullAST;
				if ( inputState->guessing == 0 ) {
					tmp58_AST = astFactory->create(LT(1));
					astFactory->makeASTRoot(currentAST, tmp58_AST);
				}
				match(ADGERD_1);
				adgerd_2();
				if (inputState->guessing==0) {
					astFactory->addASTChild( currentAST, returnAST );
				}
				if ( inputState->guessing==0 ) {
					adgerd_1_AST = antlr::RefAST(currentAST.root);
#line 164 "FjolnirParser.g"
					adgerd_1_AST->setType(ADGERD);
#line 1541 "FjolnirParser.cpp"
				}
			}
			else {
				goto _loop67;
			}
			
		}
		_loop67:;
		} // ( ... )*
		adgerd_1_AST = currentAST.root;
	}
	catch (antlr::RecognitionException& ex) {
		if( inputState->guessing == 0 ) {
			reportError(ex);
			consume();
			consumeUntil(_tokenSet_18);
		} else {
			throw;
		}
	}
	returnAST = adgerd_1_AST;
}

void FjolnirParser::adgerd_2() {
	returnAST = antlr::nullAST;
	antlr::ASTPair currentAST;
	antlr::RefAST adgerd_2_AST = antlr::nullAST;
	
	try {      // for error handling
		adgerd_3();
		if (inputState->guessing==0) {
			astFactory->addASTChild( currentAST, returnAST );
		}
		{
		if ((LA(1) == ADGERD_2) && (_tokenSet_20.member(LA(2))) && (_tokenSet_17.member(LA(3)))) {
			antlr::RefAST tmp59_AST = antlr::nullAST;
			if ( inputState->guessing == 0 ) {
				tmp59_AST = astFactory->create(LT(1));
				astFactory->makeASTRoot(currentAST, tmp59_AST);
			}
			match(ADGERD_2);
			adgerd_2();
			if (inputState->guessing==0) {
				astFactory->addASTChild( currentAST, returnAST );
			}
			if ( inputState->guessing==0 ) {
				adgerd_2_AST = antlr::RefAST(currentAST.root);
#line 169 "FjolnirParser.g"
				adgerd_2_AST->setType(ADGERD);
#line 1591 "FjolnirParser.cpp"
			}
		}
		else if ((_tokenSet_18.member(LA(1))) && (_tokenSet_21.member(LA(2))) && (_tokenSet_22.member(LA(3)))) {
		}
		else {
			throw antlr::NoViableAltException(LT(1), getFilename());
		}
		
		}
		adgerd_2_AST = currentAST.root;
	}
	catch (antlr::RecognitionException& ex) {
		if( inputState->guessing == 0 ) {
			reportError(ex);
			consume();
			consumeUntil(_tokenSet_18);
		} else {
			throw;
		}
	}
	returnAST = adgerd_2_AST;
}

void FjolnirParser::adgerd_3() {
	returnAST = antlr::nullAST;
	antlr::ASTPair currentAST;
	antlr::RefAST adgerd_3_AST = antlr::nullAST;
	
	try {      // for error handling
		adgerd_4();
		if (inputState->guessing==0) {
			astFactory->addASTChild( currentAST, returnAST );
		}
		{ // ( ... )*
		for (;;) {
			if ((LA(1) == ADGERD_3) && (_tokenSet_20.member(LA(2))) && (_tokenSet_17.member(LA(3)))) {
				antlr::RefAST tmp60_AST = antlr::nullAST;
				if ( inputState->guessing == 0 ) {
					tmp60_AST = astFactory->create(LT(1));
					astFactory->makeASTRoot(currentAST, tmp60_AST);
				}
				match(ADGERD_3);
				adgerd_4();
				if (inputState->guessing==0) {
					astFactory->addASTChild( currentAST, returnAST );
				}
				if ( inputState->guessing==0 ) {
					adgerd_3_AST = antlr::RefAST(currentAST.root);
#line 173 "FjolnirParser.g"
					adgerd_3_AST->setType(ADGERD);
#line 1642 "FjolnirParser.cpp"
				}
			}
			else {
				goto _loop72;
			}
			
		}
		_loop72:;
		} // ( ... )*
		adgerd_3_AST = currentAST.root;
	}
	catch (antlr::RecognitionException& ex) {
		if( inputState->guessing == 0 ) {
			reportError(ex);
			consume();
			consumeUntil(_tokenSet_18);
		} else {
			throw;
		}
	}
	returnAST = adgerd_3_AST;
}

void FjolnirParser::adgerd_4() {
	returnAST = antlr::nullAST;
	antlr::ASTPair currentAST;
	antlr::RefAST adgerd_4_AST = antlr::nullAST;
	
	try {      // for error handling
		adgerd_5();
		if (inputState->guessing==0) {
			astFactory->addASTChild( currentAST, returnAST );
		}
		{ // ( ... )*
		for (;;) {
			if ((LA(1) == ADGERD_4) && (_tokenSet_20.member(LA(2))) && (_tokenSet_17.member(LA(3)))) {
				antlr::RefAST tmp61_AST = antlr::nullAST;
				if ( inputState->guessing == 0 ) {
					tmp61_AST = astFactory->create(LT(1));
					astFactory->makeASTRoot(currentAST, tmp61_AST);
				}
				match(ADGERD_4);
				adgerd_5();
				if (inputState->guessing==0) {
					astFactory->addASTChild( currentAST, returnAST );
				}
				if ( inputState->guessing==0 ) {
					adgerd_4_AST = antlr::RefAST(currentAST.root);
#line 177 "FjolnirParser.g"
					adgerd_4_AST->setType(ADGERD);
#line 1693 "FjolnirParser.cpp"
				}
			}
			else {
				goto _loop75;
			}
			
		}
		_loop75:;
		} // ( ... )*
		adgerd_4_AST = currentAST.root;
	}
	catch (antlr::RecognitionException& ex) {
		if( inputState->guessing == 0 ) {
			reportError(ex);
			consume();
			consumeUntil(_tokenSet_18);
		} else {
			throw;
		}
	}
	returnAST = adgerd_4_AST;
}

void FjolnirParser::adgerd_5() {
	returnAST = antlr::nullAST;
	antlr::ASTPair currentAST;
	antlr::RefAST adgerd_5_AST = antlr::nullAST;
	
	try {      // for error handling
		adgerd_6();
		if (inputState->guessing==0) {
			astFactory->addASTChild( currentAST, returnAST );
		}
		{ // ( ... )*
		for (;;) {
			if ((LA(1) == ADGERD_5) && (_tokenSet_20.member(LA(2))) && (_tokenSet_17.member(LA(3)))) {
				antlr::RefAST tmp62_AST = antlr::nullAST;
				if ( inputState->guessing == 0 ) {
					tmp62_AST = astFactory->create(LT(1));
					astFactory->makeASTRoot(currentAST, tmp62_AST);
				}
				match(ADGERD_5);
				adgerd_6();
				if (inputState->guessing==0) {
					astFactory->addASTChild( currentAST, returnAST );
				}
				if ( inputState->guessing==0 ) {
					adgerd_5_AST = antlr::RefAST(currentAST.root);
#line 181 "FjolnirParser.g"
					adgerd_5_AST->setType(ADGERD);
#line 1744 "FjolnirParser.cpp"
				}
			}
			else {
				goto _loop78;
			}
			
		}
		_loop78:;
		} // ( ... )*
		adgerd_5_AST = currentAST.root;
	}
	catch (antlr::RecognitionException& ex) {
		if( inputState->guessing == 0 ) {
			reportError(ex);
			consume();
			consumeUntil(_tokenSet_18);
		} else {
			throw;
		}
	}
	returnAST = adgerd_5_AST;
}

void FjolnirParser::adgerd_6() {
	returnAST = antlr::nullAST;
	antlr::ASTPair currentAST;
	antlr::RefAST adgerd_6_AST = antlr::nullAST;
	
	try {      // for error handling
		adgerd_7();
		if (inputState->guessing==0) {
			astFactory->addASTChild( currentAST, returnAST );
		}
		{ // ( ... )*
		for (;;) {
			if ((LA(1) == ADGERD_6) && (_tokenSet_20.member(LA(2))) && (_tokenSet_17.member(LA(3)))) {
				antlr::RefAST tmp63_AST = antlr::nullAST;
				if ( inputState->guessing == 0 ) {
					tmp63_AST = astFactory->create(LT(1));
					astFactory->addASTChild(currentAST, tmp63_AST);
				}
				match(ADGERD_6);
				adgerd_7();
				if (inputState->guessing==0) {
					astFactory->addASTChild( currentAST, returnAST );
				}
				if ( inputState->guessing==0 ) {
					adgerd_6_AST = antlr::RefAST(currentAST.root);
#line 185 "FjolnirParser.g"
					adgerd_6_AST->setType(ADGERD);
#line 1795 "FjolnirParser.cpp"
				}
			}
			else {
				goto _loop81;
			}
			
		}
		_loop81:;
		} // ( ... )*
		adgerd_6_AST = currentAST.root;
	}
	catch (antlr::RecognitionException& ex) {
		if( inputState->guessing == 0 ) {
			reportError(ex);
			consume();
			consumeUntil(_tokenSet_18);
		} else {
			throw;
		}
	}
	returnAST = adgerd_6_AST;
}

void FjolnirParser::adgerd_7() {
	returnAST = antlr::nullAST;
	antlr::ASTPair currentAST;
	antlr::RefAST adgerd_7_AST = antlr::nullAST;
	
	try {      // for error handling
		hlutfylkissegd();
		if (inputState->guessing==0) {
			astFactory->addASTChild( currentAST, returnAST );
		}
		{ // ( ... )*
		for (;;) {
			if ((LA(1) == ADGERD_7) && (_tokenSet_20.member(LA(2))) && (_tokenSet_17.member(LA(3)))) {
				antlr::RefAST tmp64_AST = antlr::nullAST;
				if ( inputState->guessing == 0 ) {
					tmp64_AST = astFactory->create(LT(1));
					astFactory->makeASTRoot(currentAST, tmp64_AST);
				}
				match(ADGERD_7);
				hlutfylkissegd();
				if (inputState->guessing==0) {
					astFactory->addASTChild( currentAST, returnAST );
				}
				if ( inputState->guessing==0 ) {
					adgerd_7_AST = antlr::RefAST(currentAST.root);
#line 189 "FjolnirParser.g"
					adgerd_7_AST->setType(ADGERD);
#line 1846 "FjolnirParser.cpp"
				}
			}
			else {
				goto _loop84;
			}
			
		}
		_loop84:;
		} // ( ... )*
		adgerd_7_AST = currentAST.root;
	}
	catch (antlr::RecognitionException& ex) {
		if( inputState->guessing == 0 ) {
			reportError(ex);
			consume();
			consumeUntil(_tokenSet_18);
		} else {
			throw;
		}
	}
	returnAST = adgerd_7_AST;
}

void FjolnirParser::hlutfylkissegd() {
	returnAST = antlr::nullAST;
	antlr::ASTPair currentAST;
	antlr::RefAST hlutfylkissegd_AST = antlr::nullAST;
	
	try {      // for error handling
		bool synPredMatched87 = false;
		if (((_tokenSet_20.member(LA(1))) && (_tokenSet_23.member(LA(2))) && (_tokenSet_24.member(LA(3))))) {
			int _m87 = mark();
			synPredMatched87 = true;
			inputState->guessing++;
			try {
				{
				smasegd();
				match(HORNKLOFI_OPNA);
				}
			}
			catch (antlr::RecognitionException& pe) {
				synPredMatched87 = false;
			}
			rewind(_m87);
			inputState->guessing--;
		}
		if ( synPredMatched87 ) {
			smasegd();
			if (inputState->guessing==0) {
				astFactory->addASTChild( currentAST, returnAST );
			}
			{ // ( ... )+
			int _cnt89=0;
			for (;;) {
				if ((LA(1) == HORNKLOFI_OPNA) && (_tokenSet_25.member(LA(2))) && (_tokenSet_17.member(LA(3)))) {
					antlr::RefAST tmp65_AST = antlr::nullAST;
					if ( inputState->guessing == 0 ) {
						tmp65_AST = astFactory->create(LT(1));
						astFactory->makeASTRoot(currentAST, tmp65_AST);
					}
					match(HORNKLOFI_OPNA);
					segdaruna();
					if (inputState->guessing==0) {
						astFactory->addASTChild( currentAST, returnAST );
					}
					match(HORNKLOFI_LOKA);
				}
				else {
					if ( _cnt89>=1 ) { goto _loop89; } else {throw antlr::NoViableAltException(LT(1), getFilename());}
				}
				
				_cnt89++;
			}
			_loop89:;
			}  // ( ... )+
			{
			switch ( LA(1)) {
			case GILDISVEITING:
			{
				antlr::RefAST tmp67_AST = antlr::nullAST;
				if ( inputState->guessing == 0 ) {
					tmp67_AST = astFactory->create(LT(1));
					astFactory->makeASTRoot(currentAST, tmp67_AST);
				}
				match(GILDISVEITING);
				segd();
				if (inputState->guessing==0) {
					astFactory->addASTChild( currentAST, returnAST );
				}
				if ( inputState->guessing==0 ) {
#line 195 "FjolnirParser.g"
					tmp67_AST->setType(FYLKISGILDISVEITING);
#line 1939 "FjolnirParser.cpp"
				}
				break;
			}
			case ADGERD_7:
			case ADGERD_6:
			case ADGERD_5:
			case ADGERD_4:
			case ADGERD_3:
			case ADGERD_2:
			case ADGERD_1:
			case L_ANNARS:
			case L_ANNARSEF:
			case L_EDA:
			case L_EFLOK:
			case L_INNFLUTT:
			case L_KOSTUR:
			case L_LYKKJA:
			case L_LYKKJULOK:
			case L_OG:
			case L_STADVAER:
			case L_STOFN:
			case L_STOFNLOK:
			case L_UR:
			case L_VALLOK:
			case L_THA:
			case SVIGI_LOKA:
			case SEMIKOMMA:
			case KOMMA:
			case HORNKLOFI_OPNA:
			case HORNKLOFI_LOKA:
			{
				break;
			}
			default:
			{
				throw antlr::NoViableAltException(LT(1), getFilename());
			}
			}
			}
			hlutfylkissegd_AST = currentAST.root;
		}
		else if ((_tokenSet_20.member(LA(1))) && (_tokenSet_17.member(LA(2))) && (_tokenSet_21.member(LA(3)))) {
			smasegd();
			if (inputState->guessing==0) {
				astFactory->addASTChild( currentAST, returnAST );
			}
			hlutfylkissegd_AST = currentAST.root;
		}
		else {
			throw antlr::NoViableAltException(LT(1), getFilename());
		}
		
	}
	catch (antlr::RecognitionException& ex) {
		if( inputState->guessing == 0 ) {
			reportError(ex);
			consume();
			consumeUntil(_tokenSet_18);
		} else {
			throw;
		}
	}
	returnAST = hlutfylkissegd_AST;
}

void FjolnirParser::smasegd() {
	returnAST = antlr::nullAST;
	antlr::ASTPair currentAST;
	antlr::RefAST smasegd_AST = antlr::nullAST;
	
	try {      // for error handling
		switch ( LA(1)) {
		case NAFN:
		{
			nafnsegd();
			if (inputState->guessing==0) {
				astFactory->addASTChild( currentAST, returnAST );
			}
			smasegd_AST = currentAST.root;
			break;
		}
		case L_EF:
		{
			efsegd();
			if (inputState->guessing==0) {
				astFactory->addASTChild( currentAST, returnAST );
			}
			smasegd_AST = currentAST.root;
			break;
		}
		case HORNKLOFI_OPNA:
		{
			antlr::RefAST tmp68_AST = antlr::nullAST;
			if ( inputState->guessing == 0 ) {
				tmp68_AST = astFactory->create(LT(1));
				astFactory->makeASTRoot(currentAST, tmp68_AST);
			}
			match(HORNKLOFI_OPNA);
			segdaruna();
			if (inputState->guessing==0) {
				astFactory->addASTChild( currentAST, returnAST );
			}
			match(HORNKLOFI_LOKA);
			if ( inputState->guessing==0 ) {
				smasegd_AST = antlr::RefAST(currentAST.root);
#line 217 "FjolnirParser.g"
				smasegd_AST->setType(LISTI);
#line 2047 "FjolnirParser.cpp"
			}
			smasegd_AST = currentAST.root;
			break;
		}
		case L_FYRIR:
		case L_LYKKJA:
		case L_MEDAN:
		{
			lykkjusegd();
			if (inputState->guessing==0) {
				astFactory->addASTChild( currentAST, returnAST );
			}
			smasegd_AST = currentAST.root;
			break;
		}
		case L_STOFN:
		{
			antlr::RefAST tmp70_AST = antlr::nullAST;
			if ( inputState->guessing == 0 ) {
				tmp70_AST = astFactory->create(LT(1));
				astFactory->makeASTRoot(currentAST, tmp70_AST);
			}
			match(L_STOFN);
			segdaruna();
			if (inputState->guessing==0) {
				astFactory->addASTChild( currentAST, returnAST );
			}
			match(L_STOFNLOK);
			smasegd_AST = currentAST.root;
			break;
		}
		case L_VAL:
		{
			valsegd();
			if (inputState->guessing==0) {
				astFactory->addASTChild( currentAST, returnAST );
			}
			smasegd_AST = currentAST.root;
			break;
		}
		case L_UT:
		{
			antlr::RefAST tmp72_AST = antlr::nullAST;
			if ( inputState->guessing == 0 ) {
				tmp72_AST = astFactory->create(LT(1));
				astFactory->addASTChild(currentAST, tmp72_AST);
			}
			match(L_UT);
			smasegd_AST = currentAST.root;
			break;
		}
		case L_SKILA:
		{
			antlr::RefAST tmp73_AST = antlr::nullAST;
			if ( inputState->guessing == 0 ) {
				tmp73_AST = astFactory->create(LT(1));
				astFactory->makeASTRoot(currentAST, tmp73_AST);
			}
			match(L_SKILA);
			segd();
			if (inputState->guessing==0) {
				astFactory->addASTChild( currentAST, returnAST );
			}
			smasegd_AST = currentAST.root;
			break;
		}
		case SVIGI_OPNA:
		{
			match(SVIGI_OPNA);
			segd();
			if (inputState->guessing==0) {
				astFactory->addASTChild( currentAST, returnAST );
			}
			match(SVIGI_LOKA);
			smasegd_AST = currentAST.root;
			break;
		}
		case STRENGFASTI:
		{
			antlr::RefAST tmp76_AST = antlr::nullAST;
			if ( inputState->guessing == 0 ) {
				tmp76_AST = astFactory->create(LT(1));
				astFactory->addASTChild(currentAST, tmp76_AST);
			}
			match(STRENGFASTI);
			smasegd_AST = currentAST.root;
			break;
		}
		case STAFFASTI:
		{
			antlr::RefAST tmp77_AST = antlr::nullAST;
			if ( inputState->guessing == 0 ) {
				tmp77_AST = astFactory->create(LT(1));
				astFactory->addASTChild(currentAST, tmp77_AST);
			}
			match(STAFFASTI);
			smasegd_AST = currentAST.root;
			break;
		}
		case FJOLDATALA:
		{
			antlr::RefAST tmp78_AST = antlr::nullAST;
			if ( inputState->guessing == 0 ) {
				tmp78_AST = astFactory->create(LT(1));
				astFactory->addASTChild(currentAST, tmp78_AST);
			}
			match(FJOLDATALA);
			smasegd_AST = currentAST.root;
			break;
		}
		case HEILTALA:
		{
			antlr::RefAST tmp79_AST = antlr::nullAST;
			if ( inputState->guessing == 0 ) {
				tmp79_AST = astFactory->create(LT(1));
				astFactory->addASTChild(currentAST, tmp79_AST);
			}
			match(HEILTALA);
			smasegd_AST = currentAST.root;
			break;
		}
		case FLEYTITALA:
		{
			antlr::RefAST tmp80_AST = antlr::nullAST;
			if ( inputState->guessing == 0 ) {
				tmp80_AST = astFactory->create(LT(1));
				astFactory->addASTChild(currentAST, tmp80_AST);
			}
			match(FLEYTITALA);
			smasegd_AST = currentAST.root;
			break;
		}
		case TOMAGILDI:
		{
			antlr::RefAST tmp81_AST = antlr::nullAST;
			if ( inputState->guessing == 0 ) {
				tmp81_AST = astFactory->create(LT(1));
				astFactory->addASTChild(currentAST, tmp81_AST);
			}
			match(TOMAGILDI);
			smasegd_AST = currentAST.root;
			break;
		}
		case L_STEF:
		{
			antlr::RefAST tmp82_AST = antlr::nullAST;
			if ( inputState->guessing == 0 ) {
				tmp82_AST = astFactory->create(LT(1));
				astFactory->makeASTRoot(currentAST, tmp82_AST);
			}
			match(L_STEF);
			antlr::RefAST tmp83_AST = antlr::nullAST;
			if ( inputState->guessing == 0 ) {
				tmp83_AST = astFactory->create(LT(1));
				astFactory->addASTChild(currentAST, tmp83_AST);
			}
			match(NAFN);
			match(SVIGI_OPNA);
			antlr::RefAST tmp85_AST = antlr::nullAST;
			if ( inputState->guessing == 0 ) {
				tmp85_AST = astFactory->create(LT(1));
				astFactory->addASTChild(currentAST, tmp85_AST);
			}
			match(FJOLDATALA);
			match(SEMIKOMMA);
			antlr::RefAST tmp87_AST = antlr::nullAST;
			if ( inputState->guessing == 0 ) {
				tmp87_AST = astFactory->create(LT(1));
				astFactory->addASTChild(currentAST, tmp87_AST);
			}
			match(FJOLDATALA);
			match(SVIGI_LOKA);
			smasegd_AST = currentAST.root;
			break;
		}
		default:
			bool synPredMatched93 = false;
			if ((((LA(1) >= ADGERD_7 && LA(1) <= ADGERD_1)) && (LA(2) == SVIGI_OPNA) && (LA(3) == SEMIKOMMA))) {
				int _m93 = mark();
				synPredMatched93 = true;
				inputState->guessing++;
				try {
					{
					adgerd();
					match(SVIGI_OPNA);
					}
				}
				catch (antlr::RecognitionException& pe) {
					synPredMatched93 = false;
				}
				rewind(_m93);
				inputState->guessing--;
			}
			if ( synPredMatched93 ) {
				adgerd();
				if (inputState->guessing==0) {
					astFactory->addASTChild( currentAST, returnAST );
				}
				antlr::RefAST tmp89_AST = antlr::nullAST;
				if ( inputState->guessing == 0 ) {
					tmp89_AST = astFactory->create(LT(1));
					astFactory->makeASTRoot(currentAST, tmp89_AST);
				}
				match(SVIGI_OPNA);
				match(SEMIKOMMA);
				segdaruna();
				if (inputState->guessing==0) {
					astFactory->addASTChild( currentAST, returnAST );
				}
				match(SVIGI_LOKA);
				smasegd_AST = currentAST.root;
			}
			else if (((LA(1) >= ADGERD_7 && LA(1) <= ADGERD_1)) && (_tokenSet_20.member(LA(2))) && (_tokenSet_17.member(LA(3)))) {
				einundaradgerd();
				if (inputState->guessing==0) {
					astFactory->addASTChild( currentAST, returnAST );
				}
				smasegd_AST = currentAST.root;
			}
		else {
			throw antlr::NoViableAltException(LT(1), getFilename());
		}
		}
	}
	catch (antlr::RecognitionException& ex) {
		if( inputState->guessing == 0 ) {
			reportError(ex);
			consume();
			consumeUntil(_tokenSet_18);
		} else {
			throw;
		}
	}
	returnAST = smasegd_AST;
}

void FjolnirParser::nafnsegd() {
	returnAST = antlr::nullAST;
	antlr::ASTPair currentAST;
	antlr::RefAST nafnsegd_AST = antlr::nullAST;
	
	try {      // for error handling
		if ((LA(1) == NAFN) && (_tokenSet_18.member(LA(2)))) {
			antlr::RefAST tmp92_AST = antlr::nullAST;
			if ( inputState->guessing == 0 ) {
				tmp92_AST = astFactory->create(LT(1));
				astFactory->addASTChild(currentAST, tmp92_AST);
			}
			match(NAFN);
			nafnsegd_AST = currentAST.root;
		}
		else if ((LA(1) == NAFN) && (LA(2) == GILDISVEITING)) {
			antlr::RefAST tmp93_AST = antlr::nullAST;
			if ( inputState->guessing == 0 ) {
				tmp93_AST = astFactory->create(LT(1));
				astFactory->addASTChild(currentAST, tmp93_AST);
			}
			match(NAFN);
			antlr::RefAST tmp94_AST = antlr::nullAST;
			if ( inputState->guessing == 0 ) {
				tmp94_AST = astFactory->create(LT(1));
				astFactory->makeASTRoot(currentAST, tmp94_AST);
			}
			match(GILDISVEITING);
			segd();
			if (inputState->guessing==0) {
				astFactory->addASTChild( currentAST, returnAST );
			}
			nafnsegd_AST = currentAST.root;
		}
		else if ((LA(1) == NAFN) && (LA(2) == SVIGI_OPNA)) {
			antlr::RefAST tmp95_AST = antlr::nullAST;
			if ( inputState->guessing == 0 ) {
				tmp95_AST = astFactory->create(LT(1));
				astFactory->addASTChild(currentAST, tmp95_AST);
			}
			match(NAFN);
			antlr::RefAST tmp96_AST = antlr::nullAST;
			if ( inputState->guessing == 0 ) {
				tmp96_AST = astFactory->create(LT(1));
				astFactory->makeASTRoot(currentAST, tmp96_AST);
			}
			match(SVIGI_OPNA);
			nafnaruna();
			if (inputState->guessing==0) {
				astFactory->addASTChild( currentAST, returnAST );
			}
			match(SEMIKOMMA);
			segdaruna();
			if (inputState->guessing==0) {
				astFactory->addASTChild( currentAST, returnAST );
			}
			match(SVIGI_LOKA);
			nafnsegd_AST = currentAST.root;
		}
		else {
			throw antlr::NoViableAltException(LT(1), getFilename());
		}
		
	}
	catch (antlr::RecognitionException& ex) {
		if( inputState->guessing == 0 ) {
			reportError(ex);
			consume();
			consumeUntil(_tokenSet_18);
		} else {
			throw;
		}
	}
	returnAST = nafnsegd_AST;
}

void FjolnirParser::einundaradgerd() {
	returnAST = antlr::nullAST;
	antlr::ASTPair currentAST;
	antlr::RefAST einundaradgerd_AST = antlr::nullAST;
	
	try {      // for error handling
		{
		switch ( LA(1)) {
		case ADGERD_1:
		{
			antlr::RefAST tmp99_AST = antlr::nullAST;
			if ( inputState->guessing == 0 ) {
				tmp99_AST = astFactory->create(LT(1));
				astFactory->makeASTRoot(currentAST, tmp99_AST);
			}
			match(ADGERD_1);
			break;
		}
		case ADGERD_2:
		{
			antlr::RefAST tmp100_AST = antlr::nullAST;
			if ( inputState->guessing == 0 ) {
				tmp100_AST = astFactory->create(LT(1));
				astFactory->makeASTRoot(currentAST, tmp100_AST);
			}
			match(ADGERD_2);
			break;
		}
		case ADGERD_3:
		{
			antlr::RefAST tmp101_AST = antlr::nullAST;
			if ( inputState->guessing == 0 ) {
				tmp101_AST = astFactory->create(LT(1));
				astFactory->makeASTRoot(currentAST, tmp101_AST);
			}
			match(ADGERD_3);
			break;
		}
		case ADGERD_4:
		{
			antlr::RefAST tmp102_AST = antlr::nullAST;
			if ( inputState->guessing == 0 ) {
				tmp102_AST = astFactory->create(LT(1));
				astFactory->makeASTRoot(currentAST, tmp102_AST);
			}
			match(ADGERD_4);
			break;
		}
		case ADGERD_5:
		{
			antlr::RefAST tmp103_AST = antlr::nullAST;
			if ( inputState->guessing == 0 ) {
				tmp103_AST = astFactory->create(LT(1));
				astFactory->makeASTRoot(currentAST, tmp103_AST);
			}
			match(ADGERD_5);
			break;
		}
		case ADGERD_6:
		{
			antlr::RefAST tmp104_AST = antlr::nullAST;
			if ( inputState->guessing == 0 ) {
				tmp104_AST = astFactory->create(LT(1));
				astFactory->makeASTRoot(currentAST, tmp104_AST);
			}
			match(ADGERD_6);
			break;
		}
		case ADGERD_7:
		{
			antlr::RefAST tmp105_AST = antlr::nullAST;
			if ( inputState->guessing == 0 ) {
				tmp105_AST = astFactory->create(LT(1));
				astFactory->makeASTRoot(currentAST, tmp105_AST);
			}
			match(ADGERD_7);
			break;
		}
		default:
		{
			throw antlr::NoViableAltException(LT(1), getFilename());
		}
		}
		}
		smasegd();
		if (inputState->guessing==0) {
			astFactory->addASTChild( currentAST, returnAST );
		}
		if ( inputState->guessing==0 ) {
			einundaradgerd_AST = antlr::RefAST(currentAST.root);
#line 234 "FjolnirParser.g"
			einundaradgerd_AST->setType(EINUNDARADGERD);
#line 2452 "FjolnirParser.cpp"
		}
		einundaradgerd_AST = currentAST.root;
	}
	catch (antlr::RecognitionException& ex) {
		if( inputState->guessing == 0 ) {
			reportError(ex);
			consume();
			consumeUntil(_tokenSet_18);
		} else {
			throw;
		}
	}
	returnAST = einundaradgerd_AST;
}

void FjolnirParser::efsegd() {
	returnAST = antlr::nullAST;
	antlr::ASTPair currentAST;
	antlr::RefAST efsegd_AST = antlr::nullAST;
	
	try {      // for error handling
		antlr::RefAST tmp106_AST = antlr::nullAST;
		if ( inputState->guessing == 0 ) {
			tmp106_AST = astFactory->create(LT(1));
			astFactory->makeASTRoot(currentAST, tmp106_AST);
		}
		match(L_EF);
		segd();
		if (inputState->guessing==0) {
			astFactory->addASTChild( currentAST, returnAST );
		}
		match(L_THA);
		segdaruna();
		if (inputState->guessing==0) {
			astFactory->addASTChild( currentAST, returnAST );
		}
		{ // ( ... )*
		for (;;) {
			if ((LA(1) == L_ANNARSEF)) {
				annarsef();
				if (inputState->guessing==0) {
					astFactory->addASTChild( currentAST, returnAST );
				}
			}
			else {
				goto _loop100;
			}
			
		}
		_loop100:;
		} // ( ... )*
		{
		switch ( LA(1)) {
		case L_ANNARS:
		{
			match(L_ANNARS);
			segdaruna();
			if (inputState->guessing==0) {
				astFactory->addASTChild( currentAST, returnAST );
			}
			break;
		}
		case L_EFLOK:
		{
			break;
		}
		default:
		{
			throw antlr::NoViableAltException(LT(1), getFilename());
		}
		}
		}
		match(L_EFLOK);
		efsegd_AST = currentAST.root;
	}
	catch (antlr::RecognitionException& ex) {
		if( inputState->guessing == 0 ) {
			reportError(ex);
			consume();
			consumeUntil(_tokenSet_18);
		} else {
			throw;
		}
	}
	returnAST = efsegd_AST;
}

void FjolnirParser::lykkjusegd() {
	returnAST = antlr::nullAST;
	antlr::ASTPair currentAST;
	antlr::RefAST lykkjusegd_AST = antlr::nullAST;
	
	try {      // for error handling
		switch ( LA(1)) {
		case L_LYKKJA:
		{
			antlr::RefAST tmp110_AST = antlr::nullAST;
			if ( inputState->guessing == 0 ) {
				tmp110_AST = astFactory->create(LT(1));
				astFactory->makeASTRoot(currentAST, tmp110_AST);
			}
			match(L_LYKKJA);
			segdaruna();
			if (inputState->guessing==0) {
				astFactory->addASTChild( currentAST, returnAST );
			}
			match(L_LYKKJULOK);
			lykkjusegd_AST = currentAST.root;
			break;
		}
		case L_MEDAN:
		{
			antlr::RefAST tmp112_AST = antlr::nullAST;
			if ( inputState->guessing == 0 ) {
				tmp112_AST = astFactory->create(LT(1));
				astFactory->makeASTRoot(currentAST, tmp112_AST);
			}
			match(L_MEDAN);
			segd();
			if (inputState->guessing==0) {
				astFactory->addASTChild( currentAST, returnAST );
			}
			match(L_LYKKJA);
			segdaruna();
			if (inputState->guessing==0) {
				astFactory->addASTChild( currentAST, returnAST );
			}
			match(L_LYKKJULOK);
			lykkjusegd_AST = currentAST.root;
			break;
		}
		case L_FYRIR:
		{
			antlr::RefAST tmp115_AST = antlr::nullAST;
			if ( inputState->guessing == 0 ) {
				tmp115_AST = astFactory->create(LT(1));
				astFactory->makeASTRoot(currentAST, tmp115_AST);
			}
			match(L_FYRIR);
			match(SVIGI_OPNA);
			segdaruna();
			if (inputState->guessing==0) {
				astFactory->addASTChild( currentAST, returnAST );
			}
			match(SEMIKOMMA);
			segd();
			if (inputState->guessing==0) {
				astFactory->addASTChild( currentAST, returnAST );
			}
			match(SEMIKOMMA);
			segdaruna();
			if (inputState->guessing==0) {
				astFactory->addASTChild( currentAST, returnAST );
			}
			match(SVIGI_LOKA);
			match(L_LYKKJA);
			segdaruna();
			if (inputState->guessing==0) {
				astFactory->addASTChild( currentAST, returnAST );
			}
			match(L_LYKKJULOK);
			lykkjusegd_AST = currentAST.root;
			break;
		}
		default:
		{
			throw antlr::NoViableAltException(LT(1), getFilename());
		}
		}
	}
	catch (antlr::RecognitionException& ex) {
		if( inputState->guessing == 0 ) {
			reportError(ex);
			consume();
			consumeUntil(_tokenSet_18);
		} else {
			throw;
		}
	}
	returnAST = lykkjusegd_AST;
}

void FjolnirParser::valsegd() {
	returnAST = antlr::nullAST;
	antlr::ASTPair currentAST;
	antlr::RefAST valsegd_AST = antlr::nullAST;
	
	try {      // for error handling
		antlr::RefAST tmp122_AST = antlr::nullAST;
		if ( inputState->guessing == 0 ) {
			tmp122_AST = astFactory->create(LT(1));
			astFactory->makeASTRoot(currentAST, tmp122_AST);
		}
		match(L_VAL);
		segd();
		if (inputState->guessing==0) {
			astFactory->addASTChild( currentAST, returnAST );
		}
		match(L_UR);
		{ // ( ... )*
		for (;;) {
			if ((LA(1) == L_KOSTUR)) {
				valkostur();
				if (inputState->guessing==0) {
					astFactory->addASTChild( currentAST, returnAST );
				}
			}
			else {
				goto _loop105;
			}
			
		}
		_loop105:;
		} // ( ... )*
		{
		switch ( LA(1)) {
		case L_ANNARS:
		{
			match(L_ANNARS);
			segdaruna();
			if (inputState->guessing==0) {
				astFactory->addASTChild( currentAST, returnAST );
			}
			break;
		}
		case L_VALLOK:
		{
			break;
		}
		default:
		{
			throw antlr::NoViableAltException(LT(1), getFilename());
		}
		}
		}
		match(L_VALLOK);
		valsegd_AST = currentAST.root;
	}
	catch (antlr::RecognitionException& ex) {
		if( inputState->guessing == 0 ) {
			reportError(ex);
			consume();
			consumeUntil(_tokenSet_18);
		} else {
			throw;
		}
	}
	returnAST = valsegd_AST;
}

void FjolnirParser::annarsef() {
	returnAST = antlr::nullAST;
	antlr::ASTPair currentAST;
	antlr::RefAST annarsef_AST = antlr::nullAST;
	
	try {      // for error handling
		antlr::RefAST tmp126_AST = antlr::nullAST;
		if ( inputState->guessing == 0 ) {
			tmp126_AST = astFactory->create(LT(1));
			astFactory->makeASTRoot(currentAST, tmp126_AST);
		}
		match(L_ANNARSEF);
		segd();
		if (inputState->guessing==0) {
			astFactory->addASTChild( currentAST, returnAST );
		}
		match(L_THA);
		segdaruna();
		if (inputState->guessing==0) {
			astFactory->addASTChild( currentAST, returnAST );
		}
		annarsef_AST = currentAST.root;
	}
	catch (antlr::RecognitionException& ex) {
		if( inputState->guessing == 0 ) {
			reportError(ex);
			consume();
			consumeUntil(_tokenSet_26);
		} else {
			throw;
		}
	}
	returnAST = annarsef_AST;
}

void FjolnirParser::valkostur() {
	returnAST = antlr::nullAST;
	antlr::ASTPair currentAST;
	antlr::RefAST valkostur_AST = antlr::nullAST;
	
	try {      // for error handling
		antlr::RefAST tmp128_AST = antlr::nullAST;
		if ( inputState->guessing == 0 ) {
			tmp128_AST = astFactory->create(LT(1));
			astFactory->makeASTRoot(currentAST, tmp128_AST);
		}
		match(L_KOSTUR);
		valfasti_range();
		if (inputState->guessing==0) {
			astFactory->addASTChild( currentAST, returnAST );
		}
		match(L_THA);
		segdaruna();
		if (inputState->guessing==0) {
			astFactory->addASTChild( currentAST, returnAST );
		}
		valkostur_AST = currentAST.root;
	}
	catch (antlr::RecognitionException& ex) {
		if( inputState->guessing == 0 ) {
			reportError(ex);
			consume();
			consumeUntil(_tokenSet_27);
		} else {
			throw;
		}
	}
	returnAST = valkostur_AST;
}

void FjolnirParser::valfasti_range() {
	returnAST = antlr::nullAST;
	antlr::ASTPair currentAST;
	antlr::RefAST valfasti_range_AST = antlr::nullAST;
	
	try {      // for error handling
		valfasti();
		if (inputState->guessing==0) {
			astFactory->addASTChild( currentAST, returnAST );
		}
		{
		switch ( LA(1)) {
		case PUNKTURPUNKTUR:
		{
			antlr::RefAST tmp130_AST = antlr::nullAST;
			if ( inputState->guessing == 0 ) {
				tmp130_AST = astFactory->create(LT(1));
				astFactory->makeASTRoot(currentAST, tmp130_AST);
			}
			match(PUNKTURPUNKTUR);
			valfasti();
			if (inputState->guessing==0) {
				astFactory->addASTChild( currentAST, returnAST );
			}
			break;
		}
		case L_THA:
		{
			break;
		}
		default:
		{
			throw antlr::NoViableAltException(LT(1), getFilename());
		}
		}
		}
		valfasti_range_AST = currentAST.root;
	}
	catch (antlr::RecognitionException& ex) {
		if( inputState->guessing == 0 ) {
			reportError(ex);
			consume();
			consumeUntil(_tokenSet_28);
		} else {
			throw;
		}
	}
	returnAST = valfasti_range_AST;
}

void FjolnirParser::valfasti() {
	returnAST = antlr::nullAST;
	antlr::ASTPair currentAST;
	antlr::RefAST valfasti_AST = antlr::nullAST;
	
	try {      // for error handling
		switch ( LA(1)) {
		case STAFFASTI:
		{
			antlr::RefAST tmp131_AST = antlr::nullAST;
			if ( inputState->guessing == 0 ) {
				tmp131_AST = astFactory->create(LT(1));
				astFactory->addASTChild(currentAST, tmp131_AST);
			}
			match(STAFFASTI);
			valfasti_AST = currentAST.root;
			break;
		}
		case HEILTALA:
		{
			antlr::RefAST tmp132_AST = antlr::nullAST;
			if ( inputState->guessing == 0 ) {
				tmp132_AST = astFactory->create(LT(1));
				astFactory->addASTChild(currentAST, tmp132_AST);
			}
			match(HEILTALA);
			valfasti_AST = currentAST.root;
			break;
		}
		default:
		{
			throw antlr::NoViableAltException(LT(1), getFilename());
		}
		}
	}
	catch (antlr::RecognitionException& ex) {
		if( inputState->guessing == 0 ) {
			reportError(ex);
			consume();
			consumeUntil(_tokenSet_29);
		} else {
			throw;
		}
	}
	returnAST = valfasti_AST;
}

antlr::RefAST FjolnirParser::getAST()
{
	return returnAST;
}

void FjolnirParser::initializeASTFactory( antlr::ASTFactory& factory )
{
	factory.setMaxNodeType(85);
}
const char* FjolnirParser::tokenNames[] = {
	"<0>",
	"EOF",
	"<2>",
	"NULL_TREE_LOOKAHEAD",
	"EIN_SEMIKOMMA",
	"EIN_JAFNTOG",
	"EIN_MINNA",
	"EIN_SVIGIOPNA",
	"EIN_SVIGILOKA",
	"EIN_ITRUN",
	"EIN_INNFLUTT",
	"EIN_SAMSETNING",
	"EIN_HLIDSETNING",
	"EIN_ITRUDHLIDS",
	"EIN_OPNASLAUFU",
	"EIN_STRENGUR",
	"StyriStafur",
	"HexStafur",
	"NafnStafur",
	"EIN_NAFN",
	"WS",
	"COMMENT",
	"EndOfLine",
	"EIN_LOKASLAUFU",
	"ADGERD_7",
	"ADGERD_6",
	"ADGERD_5",
	"ADGERD_4",
	"ADGERD_3",
	"ADGERD_2",
	"ADGERD_1",
	"\"annars\"",
	"\"annarsef\"",
	"\"breyta\"",
	"\"e\360a\"",
	"\"eflok\"",
	"\"ef\"",
	"\"ekki\"",
	"\"fyrir\"",
	"\"innflutt\"",
	"\"kostur\"",
	"\"lykkja\"",
	"\"lykkjulok\"",
	"\"me\360an\"",
	"\"og\"",
	"\"skila\"",
	"\"sta\360v\346r\"",
	"\"stef\"",
	"\"stofn\"",
	"\"stofnlok\"",
	"\"\372r\"",
	"\"\372t\"",
	"\"val\"",
	"\"vallok\"",
	"\"\376\341\"",
	"INNSETNING",
	"GILDISVEITING",
	"SVIGI_OPNA",
	"SVIGI_LOKA",
	"SEMIKOMMA",
	"KOMMA",
	"HORNKLOFI_OPNA",
	"HORNKLOFI_LOKA",
	"PUNKTUR",
	"PUNKTURPUNKTUR",
	"STAFFASTI",
	"STRENGFASTI",
	"INNSETN_GILDISV_ADGERD_EDA_TALA",
	"FJOLDATALA",
	"HEILTALA",
	"FLEYTITALA",
	"TOMAGILDI",
	"AdgerdaStafur",
	"EkkiAdgerdaStafur",
	"ADGERD",
	"EkkiNafnStafur",
	"NAFN",
	"SLAUFA_OPNA",
	"SLAUFA_LOKA",
	"NAFNARUNA",
	"SKILGREININGAR",
	"SEGDARUNA",
	"LYKKJUSKILYRDI",
	"EINUNDARADGERD",
	"LISTI",
	"FYLKISGILDISVEITING",
	0
};

const unsigned long FjolnirParser::_tokenSet_0_data_[] = { 2UL, 0UL, 0UL, 0UL };
// EOF 
const antlr::BitSet FjolnirParser::_tokenSet_0(_tokenSet_0_data_,4);
const unsigned long FjolnirParser::_tokenSet_1_data_[] = { 16UL, 0UL, 0UL, 0UL };
// EIN_SEMIKOMMA 
const antlr::BitSet FjolnirParser::_tokenSet_1(_tokenSet_1_data_,4);
const unsigned long FjolnirParser::_tokenSet_2_data_[] = { 272UL, 0UL, 0UL, 0UL };
// EIN_SEMIKOMMA EIN_SVIGILOKA 
const antlr::BitSet FjolnirParser::_tokenSet_2(_tokenSet_2_data_,4);
const unsigned long FjolnirParser::_tokenSet_3_data_[] = { 8466UL, 0UL, 0UL, 0UL };
// EOF EIN_SEMIKOMMA EIN_SVIGILOKA EIN_ITRUDHLIDS 
const antlr::BitSet FjolnirParser::_tokenSet_3(_tokenSet_3_data_,4);
const unsigned long FjolnirParser::_tokenSet_4_data_[] = { 12562UL, 0UL, 0UL, 0UL };
// EOF EIN_SEMIKOMMA EIN_SVIGILOKA EIN_HLIDSETNING EIN_ITRUDHLIDS 
const antlr::BitSet FjolnirParser::_tokenSet_4(_tokenSet_4_data_,4);
const unsigned long FjolnirParser::_tokenSet_5_data_[] = { 14610UL, 0UL, 0UL, 0UL };
// EOF EIN_SEMIKOMMA EIN_SVIGILOKA EIN_SAMSETNING EIN_HLIDSETNING EIN_ITRUDHLIDS 
const antlr::BitSet FjolnirParser::_tokenSet_5(_tokenSet_5_data_,4);
const unsigned long FjolnirParser::_tokenSet_6_data_[] = { 15634UL, 0UL, 0UL, 0UL };
// EOF EIN_SEMIKOMMA EIN_SVIGILOKA EIN_INNFLUTT EIN_SAMSETNING EIN_HLIDSETNING 
// EIN_ITRUDHLIDS 
const antlr::BitSet FjolnirParser::_tokenSet_6(_tokenSet_6_data_,4);
const unsigned long FjolnirParser::_tokenSet_7_data_[] = { 2130706432UL, 0UL, 4096UL, 0UL, 0UL, 0UL, 0UL, 0UL };
// ADGERD_7 ADGERD_6 ADGERD_5 ADGERD_4 ADGERD_3 ADGERD_2 ADGERD_1 NAFN 
const antlr::BitSet FjolnirParser::_tokenSet_7(_tokenSet_7_data_,8);
const unsigned long FjolnirParser::_tokenSet_8_data_[] = { 2139095040UL, 0UL, 4096UL, 0UL, 0UL, 0UL, 0UL, 0UL };
// EIN_LOKASLAUFU ADGERD_7 ADGERD_6 ADGERD_5 ADGERD_4 ADGERD_3 ADGERD_2 
// ADGERD_1 NAFN 
const antlr::BitSet FjolnirParser::_tokenSet_8(_tokenSet_8_data_,8);
const unsigned long FjolnirParser::_tokenSet_9_data_[] = { 2139095040UL, 41943040UL, 4096UL, 0UL, 0UL, 0UL, 0UL, 0UL };
// EIN_LOKASLAUFU ADGERD_7 ADGERD_6 ADGERD_5 ADGERD_4 ADGERD_3 ADGERD_2 
// ADGERD_1 INNSETNING SVIGI_OPNA NAFN 
const antlr::BitSet FjolnirParser::_tokenSet_9(_tokenSet_9_data_,8);
const unsigned long FjolnirParser::_tokenSet_10_data_[] = { 2139095040UL, 0UL, 20480UL, 0UL, 0UL, 0UL, 0UL, 0UL };
// EIN_LOKASLAUFU ADGERD_7 ADGERD_6 ADGERD_5 ADGERD_4 ADGERD_3 ADGERD_2 
// ADGERD_1 NAFN SLAUFA_LOKA 
const antlr::BitSet FjolnirParser::_tokenSet_10(_tokenSet_10_data_,8);
const unsigned long FjolnirParser::_tokenSet_11_data_[] = { 0UL, 201326592UL, 0UL, 0UL };
// SVIGI_LOKA SEMIKOMMA 
const antlr::BitSet FjolnirParser::_tokenSet_11(_tokenSet_11_data_,4);
const unsigned long FjolnirParser::_tokenSet_12_data_[] = { 0UL, 65536UL, 0UL, 0UL };
// "stofn" 
const antlr::BitSet FjolnirParser::_tokenSet_12(_tokenSet_12_data_,4);
const unsigned long FjolnirParser::_tokenSet_13_data_[] = { 2147483648UL, 1277297929UL, 0UL, 0UL };
// "annars" "annarsef" "eflok" "kostur" "lykkjulok" "stofnlok" "vallok" 
// SVIGI_LOKA SEMIKOMMA HORNKLOFI_LOKA 
const antlr::BitSet FjolnirParser::_tokenSet_13(_tokenSet_13_data_,4);
const unsigned long FjolnirParser::_tokenSet_14_data_[] = { 0UL, 82048UL, 0UL, 0UL };
// "innflutt" "staðvær" "stofn" 
const antlr::BitSet FjolnirParser::_tokenSet_14(_tokenSet_14_data_,4);
const unsigned long FjolnirParser::_tokenSet_15_data_[] = { 0UL, 268517504UL, 0UL, 0UL };
// "innflutt" "staðvær" "stofn" KOMMA 
const antlr::BitSet FjolnirParser::_tokenSet_15(_tokenSet_15_data_,4);
const unsigned long FjolnirParser::_tokenSet_16_data_[] = { 2130706432UL, 572107376UL, 4342UL, 0UL, 0UL, 0UL, 0UL, 0UL };
// ADGERD_7 ADGERD_6 ADGERD_5 ADGERD_4 ADGERD_3 ADGERD_2 ADGERD_1 "ef" 
// "ekki" "fyrir" "lykkja" "meðan" "skila" "stef" "stofn" "út" "val" SVIGI_OPNA 
// HORNKLOFI_OPNA STAFFASTI STRENGFASTI FJOLDATALA HEILTALA FLEYTITALA 
// TOMAGILDI NAFN 
const antlr::BitSet FjolnirParser::_tokenSet_16(_tokenSet_16_data_,8);
const unsigned long FjolnirParser::_tokenSet_17_data_[] = { 4278190080UL, 2139095037UL, 4342UL, 0UL, 0UL, 0UL, 0UL, 0UL };
// ADGERD_7 ADGERD_6 ADGERD_5 ADGERD_4 ADGERD_3 ADGERD_2 ADGERD_1 "annars" 
// "annarsef" "eða" "eflok" "ef" "ekki" "fyrir" "innflutt" "kostur" "lykkja" 
// "lykkjulok" "meðan" "og" "skila" "staðvær" "stef" "stofn" "stofnlok" 
// "úr" "út" "val" "vallok" "þá" GILDISVEITING SVIGI_OPNA SVIGI_LOKA SEMIKOMMA 
// KOMMA HORNKLOFI_OPNA HORNKLOFI_LOKA STAFFASTI STRENGFASTI FJOLDATALA 
// HEILTALA FLEYTITALA TOMAGILDI NAFN 
const antlr::BitSet FjolnirParser::_tokenSet_17(_tokenSet_17_data_,8);
const unsigned long FjolnirParser::_tokenSet_18_data_[] = { 4278190080UL, 2087147405UL, 0UL, 0UL };
// ADGERD_7 ADGERD_6 ADGERD_5 ADGERD_4 ADGERD_3 ADGERD_2 ADGERD_1 "annars" 
// "annarsef" "eða" "eflok" "innflutt" "kostur" "lykkja" "lykkjulok" "og" 
// "staðvær" "stofn" "stofnlok" "úr" "vallok" "þá" SVIGI_LOKA SEMIKOMMA 
// KOMMA HORNKLOFI_OPNA HORNKLOFI_LOKA 
const antlr::BitSet FjolnirParser::_tokenSet_18(_tokenSet_18_data_,4);
const unsigned long FjolnirParser::_tokenSet_19_data_[] = { 0UL, 0UL, 20480UL, 0UL, 0UL, 0UL, 0UL, 0UL };
// NAFN SLAUFA_LOKA 
const antlr::BitSet FjolnirParser::_tokenSet_19(_tokenSet_19_data_,8);
const unsigned long FjolnirParser::_tokenSet_20_data_[] = { 2130706432UL, 572107344UL, 4342UL, 0UL, 0UL, 0UL, 0UL, 0UL };
// ADGERD_7 ADGERD_6 ADGERD_5 ADGERD_4 ADGERD_3 ADGERD_2 ADGERD_1 "ef" 
// "fyrir" "lykkja" "meðan" "skila" "stef" "stofn" "út" "val" SVIGI_OPNA 
// HORNKLOFI_OPNA STAFFASTI STRENGFASTI FJOLDATALA HEILTALA FLEYTITALA 
// TOMAGILDI NAFN 
const antlr::BitSet FjolnirParser::_tokenSet_20(_tokenSet_20_data_,8);
const unsigned long FjolnirParser::_tokenSet_21_data_[] = { 4286578688UL, 2139095037UL, 28918UL, 0UL, 0UL, 0UL, 0UL, 0UL };
// EIN_LOKASLAUFU ADGERD_7 ADGERD_6 ADGERD_5 ADGERD_4 ADGERD_3 ADGERD_2 
// ADGERD_1 "annars" "annarsef" "eða" "eflok" "ef" "ekki" "fyrir" "innflutt" 
// "kostur" "lykkja" "lykkjulok" "meðan" "og" "skila" "staðvær" "stef" 
// "stofn" "stofnlok" "úr" "út" "val" "vallok" "þá" GILDISVEITING SVIGI_OPNA 
// SVIGI_LOKA SEMIKOMMA KOMMA HORNKLOFI_OPNA HORNKLOFI_LOKA STAFFASTI STRENGFASTI 
// FJOLDATALA HEILTALA FLEYTITALA TOMAGILDI NAFN SLAUFA_OPNA SLAUFA_LOKA 
const antlr::BitSet FjolnirParser::_tokenSet_21(_tokenSet_21_data_,8);
const unsigned long FjolnirParser::_tokenSet_22_data_[] = { 4286594322UL, 2147483645UL, 28919UL, 0UL, 0UL, 0UL, 0UL, 0UL };
// EOF EIN_SEMIKOMMA EIN_SVIGILOKA EIN_INNFLUTT EIN_SAMSETNING EIN_HLIDSETNING 
// EIN_ITRUDHLIDS EIN_LOKASLAUFU ADGERD_7 ADGERD_6 ADGERD_5 ADGERD_4 ADGERD_3 
// ADGERD_2 ADGERD_1 "annars" "annarsef" "eða" "eflok" "ef" "ekki" "fyrir" 
// "innflutt" "kostur" "lykkja" "lykkjulok" "meðan" "og" "skila" "staðvær" 
// "stef" "stofn" "stofnlok" "úr" "út" "val" "vallok" "þá" INNSETNING GILDISVEITING 
// SVIGI_OPNA SVIGI_LOKA SEMIKOMMA KOMMA HORNKLOFI_OPNA HORNKLOFI_LOKA 
// PUNKTURPUNKTUR STAFFASTI STRENGFASTI FJOLDATALA HEILTALA FLEYTITALA 
// TOMAGILDI NAFN SLAUFA_OPNA SLAUFA_LOKA 
const antlr::BitSet FjolnirParser::_tokenSet_22(_tokenSet_22_data_,8);
const unsigned long FjolnirParser::_tokenSet_23_data_[] = { 2130706432UL, 1662758512UL, 4342UL, 0UL, 0UL, 0UL, 0UL, 0UL };
// ADGERD_7 ADGERD_6 ADGERD_5 ADGERD_4 ADGERD_3 ADGERD_2 ADGERD_1 "ef" 
// "ekki" "fyrir" "lykkja" "lykkjulok" "meðan" "skila" "stef" "stofn" "stofnlok" 
// "út" "val" GILDISVEITING SVIGI_OPNA HORNKLOFI_OPNA HORNKLOFI_LOKA STAFFASTI 
// STRENGFASTI FJOLDATALA HEILTALA FLEYTITALA TOMAGILDI NAFN 
const antlr::BitSet FjolnirParser::_tokenSet_23(_tokenSet_23_data_,8);
const unsigned long FjolnirParser::_tokenSet_24_data_[] = { 2130706432UL, 2136981108UL, 4342UL, 0UL, 0UL, 0UL, 0UL, 0UL };
// ADGERD_7 ADGERD_6 ADGERD_5 ADGERD_4 ADGERD_3 ADGERD_2 ADGERD_1 "eða" 
// "ef" "ekki" "fyrir" "lykkja" "lykkjulok" "meðan" "og" "skila" "stef" 
// "stofn" "stofnlok" "úr" "út" "val" "þá" GILDISVEITING SVIGI_OPNA SVIGI_LOKA 
// SEMIKOMMA KOMMA HORNKLOFI_OPNA HORNKLOFI_LOKA STAFFASTI STRENGFASTI 
// FJOLDATALA HEILTALA FLEYTITALA TOMAGILDI NAFN 
const antlr::BitSet FjolnirParser::_tokenSet_24(_tokenSet_24_data_,8);
const unsigned long FjolnirParser::_tokenSet_25_data_[] = { 2130706432UL, 1645849200UL, 4342UL, 0UL, 0UL, 0UL, 0UL, 0UL };
// ADGERD_7 ADGERD_6 ADGERD_5 ADGERD_4 ADGERD_3 ADGERD_2 ADGERD_1 "ef" 
// "ekki" "fyrir" "lykkja" "meðan" "skila" "stef" "stofn" "út" "val" SVIGI_OPNA 
// HORNKLOFI_OPNA HORNKLOFI_LOKA STAFFASTI STRENGFASTI FJOLDATALA HEILTALA 
// FLEYTITALA TOMAGILDI NAFN 
const antlr::BitSet FjolnirParser::_tokenSet_25(_tokenSet_25_data_,8);
const unsigned long FjolnirParser::_tokenSet_26_data_[] = { 2147483648UL, 9UL, 0UL, 0UL };
// "annars" "annarsef" "eflok" 
const antlr::BitSet FjolnirParser::_tokenSet_26(_tokenSet_26_data_,4);
const unsigned long FjolnirParser::_tokenSet_27_data_[] = { 2147483648UL, 2097408UL, 0UL, 0UL };
// "annars" "kostur" "vallok" 
const antlr::BitSet FjolnirParser::_tokenSet_27(_tokenSet_27_data_,4);
const unsigned long FjolnirParser::_tokenSet_28_data_[] = { 0UL, 4194304UL, 0UL, 0UL };
// "þá" 
const antlr::BitSet FjolnirParser::_tokenSet_28(_tokenSet_28_data_,4);
const unsigned long FjolnirParser::_tokenSet_29_data_[] = { 0UL, 4194304UL, 1UL, 0UL, 0UL, 0UL, 0UL, 0UL };
// "þá" PUNKTURPUNKTUR 
const antlr::BitSet FjolnirParser::_tokenSet_29(_tokenSet_29_data_,8);


ANTLR_END_NAMESPACE
