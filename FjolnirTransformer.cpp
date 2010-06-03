/* $ANTLR 2.7.3-20030430: "FjolnirTransformer.g" -> "FjolnirTransformer.cpp"$ */
#line 1 "FjolnirTransformer.g"

#pragma warning( disable : 4251 4267 4101 4267 )

#line 7 "FjolnirTransformer.cpp"
#include "FjolnirTransformer.hpp"
#include <antlr/Token.hpp>
#include <antlr/AST.hpp>
#include <antlr/NoViableAltException.hpp>
#include <antlr/MismatchedTokenException.hpp>
#include <antlr/SemanticException.hpp>
#include <antlr/BitSet.hpp>
ANTLR_BEGIN_NAMESPACE(ff)
#line 1 "FjolnirTransformer.g"
#line 16 "FjolnirTransformer.cpp"
FjolnirTransformer::FjolnirTransformer()
	: antlr::TreeParser() {
}

void FjolnirTransformer::forrit(antlr::RefAST _t) {
	antlr::RefAST forrit_AST_in = _t;
	returnAST = antlr::nullAST;
	antlr::ASTPair currentAST;
	antlr::RefAST forrit_AST = antlr::nullAST;
	
	try {      // for error handling
		{ // ( ... )*
		for (;;) {
			if (_t == antlr::nullAST )
				_t = ASTNULL;
			if ((_t->getType() == EIN_JAFNTOG || _t->getType() == EIN_MINNA)) {
				veiting(_t);
				_t = _retTree;
				if (inputState->guessing==0) {
					astFactory->addASTChild( currentAST, returnAST );
				}
			}
			else {
				goto _loop3;
			}
			
		}
		_loop3:;
		} // ( ... )*
		forrit_AST = currentAST.root;
	}
	catch (antlr::RecognitionException& ex) {
		if( inputState->guessing == 0 ) {
			reportError(ex);
			if ( _t != antlr::nullAST )
				_t = _t->getNextSibling();
		} else {
			throw;
		}
	}
	returnAST = forrit_AST;
	_retTree = _t;
}

void FjolnirTransformer::veiting(antlr::RefAST _t) {
	antlr::RefAST veiting_AST_in = _t;
	returnAST = antlr::nullAST;
	antlr::ASTPair currentAST;
	antlr::RefAST veiting_AST = antlr::nullAST;
	
	try {      // for error handling
		if (_t == antlr::nullAST )
			_t = ASTNULL;
		switch ( _t->getType()) {
		case EIN_MINNA:
		{
			antlr::RefAST __t5 = _t;
			antlr::RefAST tmp1_AST = antlr::nullAST;
			antlr::RefAST tmp1_AST_in = antlr::nullAST;
			if ( inputState->guessing == 0 ) {
				tmp1_AST = astFactory->create(_t);
				tmp1_AST_in = _t;
				astFactory->addASTChild(currentAST, tmp1_AST);
			}
			antlr::ASTPair __currentAST5 = currentAST;
			currentAST.root = currentAST.child;
			currentAST.child = antlr::nullAST;
			match(_t,EIN_MINNA);
			_t = _t->getFirstChild();
			antlr::RefAST tmp2_AST = antlr::nullAST;
			antlr::RefAST tmp2_AST_in = antlr::nullAST;
			if ( inputState->guessing == 0 ) {
				tmp2_AST = astFactory->create(_t);
				tmp2_AST_in = _t;
				astFactory->addASTChild(currentAST, tmp2_AST);
			}
			match(_t,EIN_STRENGUR);
			_t = _t->getNextSibling();
			antlr::RefAST tmp3_AST = antlr::nullAST;
			antlr::RefAST tmp3_AST_in = antlr::nullAST;
			if ( inputState->guessing == 0 ) {
				tmp3_AST = astFactory->create(_t);
				tmp3_AST_in = _t;
				astFactory->addASTChild(currentAST, tmp3_AST);
			}
			match(_t,EIN_NAFN);
			_t = _t->getNextSibling();
			eining(_t);
			_t = _retTree;
			if (inputState->guessing==0) {
				astFactory->addASTChild( currentAST, returnAST );
			}
			currentAST = __currentAST5;
			_t = __t5;
			_t = _t->getNextSibling();
			veiting_AST = currentAST.root;
			break;
		}
		case EIN_JAFNTOG:
		{
			antlr::RefAST __t6 = _t;
			antlr::RefAST tmp4_AST = antlr::nullAST;
			antlr::RefAST tmp4_AST_in = antlr::nullAST;
			if ( inputState->guessing == 0 ) {
				tmp4_AST = astFactory->create(_t);
				tmp4_AST_in = _t;
				astFactory->addASTChild(currentAST, tmp4_AST);
			}
			antlr::ASTPair __currentAST6 = currentAST;
			currentAST.root = currentAST.child;
			currentAST.child = antlr::nullAST;
			match(_t,EIN_JAFNTOG);
			_t = _t->getFirstChild();
			{
			if (_t == antlr::nullAST )
				_t = ASTNULL;
			switch ( _t->getType()) {
			case EIN_STRENGUR:
			{
				antlr::RefAST tmp5_AST = antlr::nullAST;
				antlr::RefAST tmp5_AST_in = antlr::nullAST;
				if ( inputState->guessing == 0 ) {
					tmp5_AST = astFactory->create(_t);
					tmp5_AST_in = _t;
					astFactory->addASTChild(currentAST, tmp5_AST);
				}
				match(_t,EIN_STRENGUR);
				_t = _t->getNextSibling();
				break;
			}
			case EIN_NAFN:
			{
				antlr::RefAST tmp6_AST = antlr::nullAST;
				antlr::RefAST tmp6_AST_in = antlr::nullAST;
				if ( inputState->guessing == 0 ) {
					tmp6_AST = astFactory->create(_t);
					tmp6_AST_in = _t;
					astFactory->addASTChild(currentAST, tmp6_AST);
				}
				match(_t,EIN_NAFN);
				_t = _t->getNextSibling();
				break;
			}
			default:
			{
				throw antlr::NoViableAltException(_t);
			}
			}
			}
			eining(_t);
			_t = _retTree;
			if (inputState->guessing==0) {
				astFactory->addASTChild( currentAST, returnAST );
			}
			currentAST = __currentAST6;
			_t = __t6;
			_t = _t->getNextSibling();
			veiting_AST = currentAST.root;
			break;
		}
		default:
		{
			throw antlr::NoViableAltException(_t);
		}
		}
	}
	catch (antlr::RecognitionException& ex) {
		if( inputState->guessing == 0 ) {
			reportError(ex);
			if ( _t != antlr::nullAST )
				_t = _t->getNextSibling();
		} else {
			throw;
		}
	}
	returnAST = veiting_AST;
	_retTree = _t;
}

void FjolnirTransformer::eining(antlr::RefAST _t) {
	antlr::RefAST eining_AST_in = _t;
	returnAST = antlr::nullAST;
	antlr::ASTPair currentAST;
	antlr::RefAST eining_AST = antlr::nullAST;
	
	try {      // for error handling
		if (_t == antlr::nullAST )
			_t = ASTNULL;
		switch ( _t->getType()) {
		case EIN_ITRUN:
		{
			antlr::RefAST __t9 = _t;
			antlr::RefAST tmp7_AST = antlr::nullAST;
			antlr::RefAST tmp7_AST_in = antlr::nullAST;
			if ( inputState->guessing == 0 ) {
				tmp7_AST = astFactory->create(_t);
				tmp7_AST_in = _t;
				astFactory->addASTChild(currentAST, tmp7_AST);
			}
			antlr::ASTPair __currentAST9 = currentAST;
			currentAST.root = currentAST.child;
			currentAST.child = antlr::nullAST;
			match(_t,EIN_ITRUN);
			_t = _t->getFirstChild();
			eining(_t);
			_t = _retTree;
			if (inputState->guessing==0) {
				astFactory->addASTChild( currentAST, returnAST );
			}
			currentAST = __currentAST9;
			_t = __t9;
			_t = _t->getNextSibling();
			eining_AST = currentAST.root;
			break;
		}
		case EIN_ITRUDHLIDS:
		{
			antlr::RefAST __t10 = _t;
			antlr::RefAST tmp8_AST = antlr::nullAST;
			antlr::RefAST tmp8_AST_in = antlr::nullAST;
			if ( inputState->guessing == 0 ) {
				tmp8_AST = astFactory->create(_t);
				tmp8_AST_in = _t;
				astFactory->addASTChild(currentAST, tmp8_AST);
			}
			antlr::ASTPair __currentAST10 = currentAST;
			currentAST.root = currentAST.child;
			currentAST.child = antlr::nullAST;
			match(_t,EIN_ITRUDHLIDS);
			_t = _t->getFirstChild();
			eining(_t);
			_t = _retTree;
			if (inputState->guessing==0) {
				astFactory->addASTChild( currentAST, returnAST );
			}
			eining(_t);
			_t = _retTree;
			if (inputState->guessing==0) {
				astFactory->addASTChild( currentAST, returnAST );
			}
			currentAST = __currentAST10;
			_t = __t10;
			_t = _t->getNextSibling();
			eining_AST = currentAST.root;
			break;
		}
		case EIN_HLIDSETNING:
		{
			antlr::RefAST __t11 = _t;
			antlr::RefAST tmp9_AST = antlr::nullAST;
			antlr::RefAST tmp9_AST_in = antlr::nullAST;
			if ( inputState->guessing == 0 ) {
				tmp9_AST = astFactory->create(_t);
				tmp9_AST_in = _t;
				astFactory->addASTChild(currentAST, tmp9_AST);
			}
			antlr::ASTPair __currentAST11 = currentAST;
			currentAST.root = currentAST.child;
			currentAST.child = antlr::nullAST;
			match(_t,EIN_HLIDSETNING);
			_t = _t->getFirstChild();
			eining(_t);
			_t = _retTree;
			if (inputState->guessing==0) {
				astFactory->addASTChild( currentAST, returnAST );
			}
			eining(_t);
			_t = _retTree;
			if (inputState->guessing==0) {
				astFactory->addASTChild( currentAST, returnAST );
			}
			currentAST = __currentAST11;
			_t = __t11;
			_t = _t->getNextSibling();
			eining_AST = currentAST.root;
			break;
		}
		case EIN_SAMSETNING:
		{
			antlr::RefAST __t12 = _t;
			antlr::RefAST tmp10_AST = antlr::nullAST;
			antlr::RefAST tmp10_AST_in = antlr::nullAST;
			if ( inputState->guessing == 0 ) {
				tmp10_AST = astFactory->create(_t);
				tmp10_AST_in = _t;
				astFactory->addASTChild(currentAST, tmp10_AST);
			}
			antlr::ASTPair __currentAST12 = currentAST;
			currentAST.root = currentAST.child;
			currentAST.child = antlr::nullAST;
			match(_t,EIN_SAMSETNING);
			_t = _t->getFirstChild();
			eining(_t);
			_t = _retTree;
			if (inputState->guessing==0) {
				astFactory->addASTChild( currentAST, returnAST );
			}
			eining(_t);
			_t = _retTree;
			if (inputState->guessing==0) {
				astFactory->addASTChild( currentAST, returnAST );
			}
			currentAST = __currentAST12;
			_t = __t12;
			_t = _t->getNextSibling();
			eining_AST = currentAST.root;
			break;
		}
		case EIN_INNFLUTT:
		{
			antlr::RefAST __t13 = _t;
			antlr::RefAST tmp11_AST = antlr::nullAST;
			antlr::RefAST tmp11_AST_in = antlr::nullAST;
			if ( inputState->guessing == 0 ) {
				tmp11_AST = astFactory->create(_t);
				tmp11_AST_in = _t;
				astFactory->addASTChild(currentAST, tmp11_AST);
			}
			antlr::ASTPair __currentAST13 = currentAST;
			currentAST.root = currentAST.child;
			currentAST.child = antlr::nullAST;
			match(_t,EIN_INNFLUTT);
			_t = _t->getFirstChild();
			eining(_t);
			_t = _retTree;
			if (inputState->guessing==0) {
				astFactory->addASTChild( currentAST, returnAST );
			}
			eining(_t);
			_t = _retTree;
			if (inputState->guessing==0) {
				astFactory->addASTChild( currentAST, returnAST );
			}
			currentAST = __currentAST13;
			_t = __t13;
			_t = _t->getNextSibling();
			eining_AST = currentAST.root;
			break;
		}
		case EIN_STRENGUR:
		{
			antlr::RefAST tmp12_AST = antlr::nullAST;
			antlr::RefAST tmp12_AST_in = antlr::nullAST;
			if ( inputState->guessing == 0 ) {
				tmp12_AST = astFactory->create(_t);
				tmp12_AST_in = _t;
				astFactory->addASTChild(currentAST, tmp12_AST);
			}
			match(_t,EIN_STRENGUR);
			_t = _t->getNextSibling();
			eining_AST = currentAST.root;
			break;
		}
		case EIN_NAFN:
		{
			antlr::RefAST tmp13_AST = antlr::nullAST;
			antlr::RefAST tmp13_AST_in = antlr::nullAST;
			if ( inputState->guessing == 0 ) {
				tmp13_AST = astFactory->create(_t);
				tmp13_AST_in = _t;
				astFactory->addASTChild(currentAST, tmp13_AST);
			}
			match(_t,EIN_NAFN);
			_t = _t->getNextSibling();
			eining_AST = currentAST.root;
			break;
		}
		case EIN_OPNASLAUFU:
		{
			antlr::RefAST __t14 = _t;
			antlr::RefAST tmp14_AST = antlr::nullAST;
			antlr::RefAST tmp14_AST_in = antlr::nullAST;
			if ( inputState->guessing == 0 ) {
				tmp14_AST = astFactory->create(_t);
				tmp14_AST_in = _t;
				astFactory->addASTChild(currentAST, tmp14_AST);
			}
			antlr::ASTPair __currentAST14 = currentAST;
			currentAST.root = currentAST.child;
			currentAST.child = antlr::nullAST;
			match(_t,EIN_OPNASLAUFU);
			_t = _t->getFirstChild();
			{ // ( ... )*
			for (;;) {
				if (_t == antlr::nullAST )
					_t = ASTNULL;
				if ((_t->getType() == INNSETNING)) {
					vorpun(_t);
					_t = _retTree;
					if (inputState->guessing==0) {
						astFactory->addASTChild( currentAST, returnAST );
					}
				}
				else {
					goto _loop16;
				}
				
			}
			_loop16:;
			} // ( ... )*
			currentAST = __currentAST14;
			_t = __t14;
			_t = _t->getNextSibling();
			eining_AST = currentAST.root;
			break;
		}
		default:
		{
			throw antlr::NoViableAltException(_t);
		}
		}
	}
	catch (antlr::RecognitionException& ex) {
		if( inputState->guessing == 0 ) {
			reportError(ex);
			if ( _t != antlr::nullAST )
				_t = _t->getNextSibling();
		} else {
			throw;
		}
	}
	returnAST = eining_AST;
	_retTree = _t;
}

void FjolnirTransformer::vorpun(antlr::RefAST _t) {
	antlr::RefAST vorpun_AST_in = _t;
	returnAST = antlr::nullAST;
	antlr::ASTPair currentAST;
	antlr::RefAST vorpun_AST = antlr::nullAST;
	
	try {      // for error handling
		antlr::RefAST __t18 = _t;
		antlr::RefAST tmp15_AST = antlr::nullAST;
		antlr::RefAST tmp15_AST_in = antlr::nullAST;
		if ( inputState->guessing == 0 ) {
			tmp15_AST = astFactory->create(_t);
			tmp15_AST_in = _t;
			astFactory->addASTChild(currentAST, tmp15_AST);
		}
		antlr::ASTPair __currentAST18 = currentAST;
		currentAST.root = currentAST.child;
		currentAST.child = antlr::nullAST;
		match(_t,INNSETNING);
		_t = _t->getFirstChild();
		{
		if (_t == antlr::nullAST )
			_t = ASTNULL;
		switch ( _t->getType()) {
		case NAFN:
		{
			antlr::RefAST tmp16_AST = antlr::nullAST;
			antlr::RefAST tmp16_AST_in = antlr::nullAST;
			if ( inputState->guessing == 0 ) {
				tmp16_AST = astFactory->create(_t);
				tmp16_AST_in = _t;
				astFactory->addASTChild(currentAST, tmp16_AST);
			}
			match(_t,NAFN);
			_t = _t->getNextSibling();
			break;
		}
		case ADGERD:
		{
			antlr::RefAST tmp17_AST = antlr::nullAST;
			antlr::RefAST tmp17_AST_in = antlr::nullAST;
			if ( inputState->guessing == 0 ) {
				tmp17_AST = astFactory->create(_t);
				tmp17_AST_in = _t;
				astFactory->addASTChild(currentAST, tmp17_AST);
			}
			match(_t,ADGERD);
			_t = _t->getNextSibling();
			break;
		}
		default:
		{
			throw antlr::NoViableAltException(_t);
		}
		}
		}
		minnissvaedi(_t);
		_t = _retTree;
		if (inputState->guessing==0) {
			astFactory->addASTChild( currentAST, returnAST );
		}
		currentAST = __currentAST18;
		_t = __t18;
		_t = _t->getNextSibling();
		vorpun_AST = currentAST.root;
	}
	catch (antlr::RecognitionException& ex) {
		if( inputState->guessing == 0 ) {
			reportError(ex);
			if ( _t != antlr::nullAST )
				_t = _t->getNextSibling();
		} else {
			throw;
		}
	}
	returnAST = vorpun_AST;
	_retTree = _t;
}

void FjolnirTransformer::minnissvaedi(antlr::RefAST _t) {
	antlr::RefAST minnissvaedi_AST_in = _t;
	returnAST = antlr::nullAST;
	antlr::ASTPair currentAST;
	antlr::RefAST minnissvaedi_AST = antlr::nullAST;
	
	try {      // for error handling
		if (_t == antlr::nullAST )
			_t = ASTNULL;
		switch ( _t->getType()) {
		case NAFN:
		{
			antlr::RefAST tmp18_AST = antlr::nullAST;
			antlr::RefAST tmp18_AST_in = antlr::nullAST;
			if ( inputState->guessing == 0 ) {
				tmp18_AST = astFactory->create(_t);
				tmp18_AST_in = _t;
				astFactory->addASTChild(currentAST, tmp18_AST);
			}
			match(_t,NAFN);
			_t = _t->getNextSibling();
			minnissvaedi_AST = currentAST.root;
			break;
		}
		case ADGERD:
		{
			antlr::RefAST tmp19_AST = antlr::nullAST;
			antlr::RefAST tmp19_AST_in = antlr::nullAST;
			if ( inputState->guessing == 0 ) {
				tmp19_AST = astFactory->create(_t);
				tmp19_AST_in = _t;
				astFactory->addASTChild(currentAST, tmp19_AST);
			}
			match(_t,ADGERD);
			_t = _t->getNextSibling();
			minnissvaedi_AST = currentAST.root;
			break;
		}
		case L_BREYTA:
		{
			antlr::RefAST tmp20_AST = antlr::nullAST;
			antlr::RefAST tmp20_AST_in = antlr::nullAST;
			if ( inputState->guessing == 0 ) {
				tmp20_AST = astFactory->create(_t);
				tmp20_AST_in = _t;
				astFactory->addASTChild(currentAST, tmp20_AST);
			}
			match(_t,L_BREYTA);
			_t = _t->getNextSibling();
			minnissvaedi_AST = currentAST.root;
			break;
		}
		case L_BOD:
		{
			antlr::RefAST tmp21_AST = antlr::nullAST;
			antlr::RefAST tmp21_AST_in = antlr::nullAST;
			if ( inputState->guessing == 0 ) {
				tmp21_AST = astFactory->create(_t);
				tmp21_AST_in = _t;
				astFactory->addASTChild(currentAST, tmp21_AST);
			}
			match(_t,L_BOD);
			_t = _t->getNextSibling();
			minnissvaedi_AST = currentAST.root;
			break;
		}
		case L_STEF:
		{
			stefskilgreining(_t);
			_t = _retTree;
			if (inputState->guessing==0) {
				astFactory->addASTChild( currentAST, returnAST );
			}
			minnissvaedi_AST = currentAST.root;
			break;
		}
		case L_HLUTUR:
		{
			hlutskilgreining(_t);
			_t = _retTree;
			if (inputState->guessing==0) {
				astFactory->addASTChild( currentAST, returnAST );
			}
			minnissvaedi_AST = currentAST.root;
			break;
		}
		default:
		{
			throw antlr::NoViableAltException(_t);
		}
		}
	}
	catch (antlr::RecognitionException& ex) {
		if( inputState->guessing == 0 ) {
			reportError(ex);
			if ( _t != antlr::nullAST )
				_t = _t->getNextSibling();
		} else {
			throw;
		}
	}
	returnAST = minnissvaedi_AST;
	_retTree = _t;
}

void FjolnirTransformer::stefskilgreining(antlr::RefAST _t) {
	antlr::RefAST stefskilgreining_AST_in = _t;
	returnAST = antlr::nullAST;
	antlr::ASTPair currentAST;
	antlr::RefAST stefskilgreining_AST = antlr::nullAST;
	
	try {      // for error handling
		antlr::RefAST __t22 = _t;
		antlr::RefAST tmp22_AST = antlr::nullAST;
		antlr::RefAST tmp22_AST_in = antlr::nullAST;
		if ( inputState->guessing == 0 ) {
			tmp22_AST = astFactory->create(_t);
			tmp22_AST_in = _t;
			astFactory->addASTChild(currentAST, tmp22_AST);
		}
		antlr::ASTPair __currentAST22 = currentAST;
		currentAST.root = currentAST.child;
		currentAST.child = antlr::nullAST;
		match(_t,L_STEF);
		_t = _t->getFirstChild();
		nafnaruna(_t);
		_t = _retTree;
		if (inputState->guessing==0) {
			astFactory->addASTChild( currentAST, returnAST );
		}
		nafnaruna(_t);
		_t = _retTree;
		if (inputState->guessing==0) {
			astFactory->addASTChild( currentAST, returnAST );
		}
		skilgreiningar(_t);
		_t = _retTree;
		if (inputState->guessing==0) {
			astFactory->addASTChild( currentAST, returnAST );
		}
		segdaruna(_t);
		_t = _retTree;
		if (inputState->guessing==0) {
			astFactory->addASTChild( currentAST, returnAST );
		}
		{
		if (_t == antlr::nullAST )
			_t = ASTNULL;
		switch ( _t->getType()) {
		case SLAUFA_OPNA:
		{
			innriTextaeining(_t);
			_t = _retTree;
			if (inputState->guessing==0) {
				astFactory->addASTChild( currentAST, returnAST );
			}
			break;
		}
		case 3:
		{
			break;
		}
		default:
		{
			throw antlr::NoViableAltException(_t);
		}
		}
		}
		currentAST = __currentAST22;
		_t = __t22;
		_t = _t->getNextSibling();
		stefskilgreining_AST = currentAST.root;
	}
	catch (antlr::RecognitionException& ex) {
		if( inputState->guessing == 0 ) {
			reportError(ex);
			if ( _t != antlr::nullAST )
				_t = _t->getNextSibling();
		} else {
			throw;
		}
	}
	returnAST = stefskilgreining_AST;
	_retTree = _t;
}

void FjolnirTransformer::hlutskilgreining(antlr::RefAST _t) {
	antlr::RefAST hlutskilgreining_AST_in = _t;
	returnAST = antlr::nullAST;
	antlr::ASTPair currentAST;
	antlr::RefAST hlutskilgreining_AST = antlr::nullAST;
	
	try {      // for error handling
		antlr::RefAST __t48 = _t;
		antlr::RefAST tmp23_AST = antlr::nullAST;
		antlr::RefAST tmp23_AST_in = antlr::nullAST;
		if ( inputState->guessing == 0 ) {
			tmp23_AST = astFactory->create(_t);
			tmp23_AST_in = _t;
			astFactory->addASTChild(currentAST, tmp23_AST);
		}
		antlr::ASTPair __currentAST48 = currentAST;
		currentAST.root = currentAST.child;
		currentAST.child = antlr::nullAST;
		match(_t,L_HLUTUR);
		_t = _t->getFirstChild();
		nafnaruna(_t);
		_t = _retTree;
		if (inputState->guessing==0) {
			astFactory->addASTChild( currentAST, returnAST );
		}
		antlr::RefAST __t49 = _t;
		antlr::RefAST tmp24_AST = antlr::nullAST;
		antlr::RefAST tmp24_AST_in = antlr::nullAST;
		if ( inputState->guessing == 0 ) {
			tmp24_AST = astFactory->create(_t);
			tmp24_AST_in = _t;
			astFactory->addASTChild(currentAST, tmp24_AST);
		}
		antlr::ASTPair __currentAST49 = currentAST;
		currentAST.root = currentAST.child;
		currentAST.child = antlr::nullAST;
		match(_t,L_ARFUR);
		_t = _t->getFirstChild();
		{
		if (_t == antlr::nullAST )
			_t = ASTNULL;
		switch ( _t->getType()) {
		case NAFN:
		{
			antlr::RefAST tmp25_AST = antlr::nullAST;
			antlr::RefAST tmp25_AST_in = antlr::nullAST;
			if ( inputState->guessing == 0 ) {
				tmp25_AST = astFactory->create(_t);
				tmp25_AST_in = _t;
				astFactory->addASTChild(currentAST, tmp25_AST);
			}
			match(_t,NAFN);
			_t = _t->getNextSibling();
			break;
		}
		case 3:
		{
			break;
		}
		default:
		{
			throw antlr::NoViableAltException(_t);
		}
		}
		}
		currentAST = __currentAST49;
		_t = __t49;
		_t = _t->getNextSibling();
		{ // ( ... )*
		for (;;) {
			if (_t == antlr::nullAST )
				_t = ASTNULL;
			if ((_t->getType() == L_BOD)) {
				bodskilgreining(_t);
				_t = _retTree;
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
		currentAST = __currentAST48;
		_t = __t48;
		_t = _t->getNextSibling();
		hlutskilgreining_AST = currentAST.root;
	}
	catch (antlr::RecognitionException& ex) {
		if( inputState->guessing == 0 ) {
			reportError(ex);
			if ( _t != antlr::nullAST )
				_t = _t->getNextSibling();
		} else {
			throw;
		}
	}
	returnAST = hlutskilgreining_AST;
	_retTree = _t;
}

void FjolnirTransformer::nafnaruna(antlr::RefAST _t) {
	antlr::RefAST nafnaruna_AST_in = _t;
	returnAST = antlr::nullAST;
	antlr::ASTPair currentAST;
	antlr::RefAST nafnaruna_AST = antlr::nullAST;
	
	try {      // for error handling
		antlr::RefAST __t25 = _t;
		antlr::RefAST tmp26_AST = antlr::nullAST;
		antlr::RefAST tmp26_AST_in = antlr::nullAST;
		if ( inputState->guessing == 0 ) {
			tmp26_AST = astFactory->create(_t);
			tmp26_AST_in = _t;
			astFactory->addASTChild(currentAST, tmp26_AST);
		}
		antlr::ASTPair __currentAST25 = currentAST;
		currentAST.root = currentAST.child;
		currentAST.child = antlr::nullAST;
		match(_t,NAFNARUNA);
		_t = _t->getFirstChild();
		{ // ( ... )*
		for (;;) {
			if (_t == antlr::nullAST )
				_t = ASTNULL;
			if ((_t->getType() == NAFN)) {
				antlr::RefAST tmp27_AST = antlr::nullAST;
				antlr::RefAST tmp27_AST_in = antlr::nullAST;
				if ( inputState->guessing == 0 ) {
					tmp27_AST = astFactory->create(_t);
					tmp27_AST_in = _t;
					astFactory->addASTChild(currentAST, tmp27_AST);
				}
				match(_t,NAFN);
				_t = _t->getNextSibling();
			}
			else {
				goto _loop27;
			}
			
		}
		_loop27:;
		} // ( ... )*
		currentAST = __currentAST25;
		_t = __t25;
		_t = _t->getNextSibling();
		nafnaruna_AST = currentAST.root;
	}
	catch (antlr::RecognitionException& ex) {
		if( inputState->guessing == 0 ) {
			reportError(ex);
			if ( _t != antlr::nullAST )
				_t = _t->getNextSibling();
		} else {
			throw;
		}
	}
	returnAST = nafnaruna_AST;
	_retTree = _t;
}

void FjolnirTransformer::skilgreiningar(antlr::RefAST _t) {
	antlr::RefAST skilgreiningar_AST_in = _t;
	returnAST = antlr::nullAST;
	antlr::ASTPair currentAST;
	antlr::RefAST skilgreiningar_AST = antlr::nullAST;
	antlr::RefAST dummy = antlr::nullAST;
	antlr::RefAST dummy_AST = antlr::nullAST;
	antlr::RefAST nr_AST = antlr::nullAST;
	antlr::RefAST nr = antlr::nullAST;
	antlr::RefAST fr_AST = antlr::nullAST;
	antlr::RefAST fr = antlr::nullAST;
#line 63 "FjolnirTransformer.g"
	
			antlr::RefAST innflutt = antlr::RefAST(astFactory->make((new antlr::ASTArray(1))->add(astFactory->create(L_INNFLUTT,"innflutt"))));
			antlr::RefAST stadvaerar = antlr::RefAST(astFactory->make((new antlr::ASTArray(1))->add(astFactory->create(L_STADVAER,"staðvær"))));
		
#line 887 "FjolnirTransformer.cpp"
	
	try {      // for error handling
		antlr::RefAST __t32 = _t;
		dummy = (_t == ASTNULL) ? antlr::nullAST : _t;
		antlr::RefAST dummy_AST_in = antlr::nullAST;
		if ( inputState->guessing == 0 ) {
			dummy_AST = astFactory->create(dummy);
		}
		antlr::ASTPair __currentAST32 = currentAST;
		currentAST.root = currentAST.child;
		currentAST.child = antlr::nullAST;
		match(_t,SKILGREININGAR);
		_t = _t->getFirstChild();
		{ // ( ... )*
		for (;;) {
			if (_t == antlr::nullAST )
				_t = ASTNULL;
			switch ( _t->getType()) {
			case L_INNFLUTT:
			{
				antlr::RefAST __t34 = _t;
				antlr::RefAST tmp28_AST = antlr::nullAST;
				antlr::RefAST tmp28_AST_in = antlr::nullAST;
				if ( inputState->guessing == 0 ) {
					tmp28_AST = astFactory->create(_t);
					tmp28_AST_in = _t;
				}
				antlr::ASTPair __currentAST34 = currentAST;
				currentAST.root = currentAST.child;
				currentAST.child = antlr::nullAST;
				match(_t,L_INNFLUTT);
				_t = _t->getFirstChild();
				nr = (_t == ASTNULL) ? antlr::nullAST : _t;
				nafnaruna_ekkitom(_t);
				_t = _retTree;
				if (inputState->guessing==0) {
					nr_AST = returnAST;
				}
				currentAST = __currentAST34;
				_t = __t34;
				_t = _t->getNextSibling();
				if ( inputState->guessing==0 ) {
#line 70 "FjolnirTransformer.g"
					innflutt->addChild(nr_AST);
#line 932 "FjolnirTransformer.cpp"
				}
				break;
			}
			case L_STADVAER:
			{
				antlr::RefAST __t35 = _t;
				antlr::RefAST tmp29_AST = antlr::nullAST;
				antlr::RefAST tmp29_AST_in = antlr::nullAST;
				if ( inputState->guessing == 0 ) {
					tmp29_AST = astFactory->create(_t);
					tmp29_AST_in = _t;
				}
				antlr::ASTPair __currentAST35 = currentAST;
				currentAST.root = currentAST.child;
				currentAST.child = antlr::nullAST;
				match(_t,L_STADVAER);
				_t = _t->getFirstChild();
				fr = (_t == ASTNULL) ? antlr::nullAST : _t;
				frumstillingaruna(_t);
				_t = _retTree;
				if (inputState->guessing==0) {
					fr_AST = returnAST;
				}
				currentAST = __currentAST35;
				_t = __t35;
				_t = _t->getNextSibling();
				if ( inputState->guessing==0 ) {
#line 72 "FjolnirTransformer.g"
					stadvaerar->addChild(fr_AST);
#line 962 "FjolnirTransformer.cpp"
				}
				break;
			}
			default:
			{
				goto _loop36;
			}
			}
		}
		_loop36:;
		} // ( ... )*
		if ( inputState->guessing==0 ) {
			skilgreiningar_AST = antlr::RefAST(currentAST.root);
#line 74 "FjolnirTransformer.g"
			
						skilgreiningar_AST = antlr::RefAST(astFactory->make((new antlr::ASTArray(1))->add(astFactory->create(SKILGREININGAR,"skilgreiningar"))));
						skilgreiningar_AST->setFirstChild(innflutt);
						innflutt->setNextSibling(stadvaerar);
						stadvaerar->setNextSibling(antlr::nullAST);
					
#line 983 "FjolnirTransformer.cpp"
			currentAST.root = skilgreiningar_AST;
			if ( skilgreiningar_AST!=antlr::nullAST &&
				skilgreiningar_AST->getFirstChild() != antlr::nullAST )
				  currentAST.child = skilgreiningar_AST->getFirstChild();
			else
				currentAST.child = skilgreiningar_AST;
			currentAST.advanceChildToEnd();
		}
		currentAST = __currentAST32;
		_t = __t32;
		_t = _t->getNextSibling();
	}
	catch (antlr::RecognitionException& ex) {
		if( inputState->guessing == 0 ) {
			reportError(ex);
			if ( _t != antlr::nullAST )
				_t = _t->getNextSibling();
		} else {
			throw;
		}
	}
	returnAST = skilgreiningar_AST;
	_retTree = _t;
}

void FjolnirTransformer::segdaruna(antlr::RefAST _t) {
	antlr::RefAST segdaruna_AST_in = _t;
	returnAST = antlr::nullAST;
	antlr::ASTPair currentAST;
	antlr::RefAST segdaruna_AST = antlr::nullAST;
	
	try {      // for error handling
		antlr::RefAST __t57 = _t;
		antlr::RefAST tmp30_AST = antlr::nullAST;
		antlr::RefAST tmp30_AST_in = antlr::nullAST;
		if ( inputState->guessing == 0 ) {
			tmp30_AST = astFactory->create(_t);
			tmp30_AST_in = _t;
			astFactory->addASTChild(currentAST, tmp30_AST);
		}
		antlr::ASTPair __currentAST57 = currentAST;
		currentAST.root = currentAST.child;
		currentAST.child = antlr::nullAST;
		match(_t,SEGDARUNA);
		_t = _t->getFirstChild();
		{ // ( ... )*
		for (;;) {
			if (_t == antlr::nullAST )
				_t = ASTNULL;
			if ((_tokenSet_0.member(_t->getType()))) {
				segd(_t);
				_t = _retTree;
				if (inputState->guessing==0) {
					astFactory->addASTChild( currentAST, returnAST );
				}
			}
			else {
				goto _loop59;
			}
			
		}
		_loop59:;
		} // ( ... )*
		currentAST = __currentAST57;
		_t = __t57;
		_t = _t->getNextSibling();
		segdaruna_AST = currentAST.root;
	}
	catch (antlr::RecognitionException& ex) {
		if( inputState->guessing == 0 ) {
			reportError(ex);
			if ( _t != antlr::nullAST )
				_t = _t->getNextSibling();
		} else {
			throw;
		}
	}
	returnAST = segdaruna_AST;
	_retTree = _t;
}

void FjolnirTransformer::innriTextaeining(antlr::RefAST _t) {
	antlr::RefAST innriTextaeining_AST_in = _t;
	returnAST = antlr::nullAST;
	antlr::ASTPair currentAST;
	antlr::RefAST innriTextaeining_AST = antlr::nullAST;
	
	try {      // for error handling
		antlr::RefAST __t42 = _t;
		antlr::RefAST tmp31_AST = antlr::nullAST;
		antlr::RefAST tmp31_AST_in = antlr::nullAST;
		if ( inputState->guessing == 0 ) {
			tmp31_AST = astFactory->create(_t);
			tmp31_AST_in = _t;
			astFactory->addASTChild(currentAST, tmp31_AST);
		}
		antlr::ASTPair __currentAST42 = currentAST;
		currentAST.root = currentAST.child;
		currentAST.child = antlr::nullAST;
		match(_t,SLAUFA_OPNA);
		_t = _t->getFirstChild();
		{ // ( ... )*
		for (;;) {
			if (_t == antlr::nullAST )
				_t = ASTNULL;
			if ((_t->getType() == INNSETNING)) {
				innraStef(_t);
				_t = _retTree;
				if (inputState->guessing==0) {
					astFactory->addASTChild( currentAST, returnAST );
				}
			}
			else {
				goto _loop44;
			}
			
		}
		_loop44:;
		} // ( ... )*
		currentAST = __currentAST42;
		_t = __t42;
		_t = _t->getNextSibling();
		innriTextaeining_AST = currentAST.root;
	}
	catch (antlr::RecognitionException& ex) {
		if( inputState->guessing == 0 ) {
			reportError(ex);
			if ( _t != antlr::nullAST )
				_t = _t->getNextSibling();
		} else {
			throw;
		}
	}
	returnAST = innriTextaeining_AST;
	_retTree = _t;
}

void FjolnirTransformer::nafnaruna_ekkitom(antlr::RefAST _t) {
	antlr::RefAST nafnaruna_ekkitom_AST_in = _t;
	returnAST = antlr::nullAST;
	antlr::ASTPair currentAST;
	antlr::RefAST nafnaruna_ekkitom_AST = antlr::nullAST;
	
	try {      // for error handling
		{ // ( ... )+
		int _cnt30=0;
		for (;;) {
			if (_t == antlr::nullAST )
				_t = ASTNULL;
			if ((_t->getType() == NAFN)) {
				antlr::RefAST tmp32_AST = antlr::nullAST;
				antlr::RefAST tmp32_AST_in = antlr::nullAST;
				if ( inputState->guessing == 0 ) {
					tmp32_AST = astFactory->create(_t);
					tmp32_AST_in = _t;
					astFactory->addASTChild(currentAST, tmp32_AST);
				}
				match(_t,NAFN);
				_t = _t->getNextSibling();
			}
			else {
				if ( _cnt30>=1 ) { goto _loop30; } else {throw antlr::NoViableAltException(_t);}
			}
			
			_cnt30++;
		}
		_loop30:;
		}  // ( ... )+
		nafnaruna_ekkitom_AST = currentAST.root;
	}
	catch (antlr::RecognitionException& ex) {
		if( inputState->guessing == 0 ) {
			reportError(ex);
			if ( _t != antlr::nullAST )
				_t = _t->getNextSibling();
		} else {
			throw;
		}
	}
	returnAST = nafnaruna_ekkitom_AST;
	_retTree = _t;
}

void FjolnirTransformer::frumstillingaruna(antlr::RefAST _t) {
	antlr::RefAST frumstillingaruna_AST_in = _t;
	returnAST = antlr::nullAST;
	antlr::ASTPair currentAST;
	antlr::RefAST frumstillingaruna_AST = antlr::nullAST;
	
	try {      // for error handling
		{ // ( ... )+
		int _cnt40=0;
		for (;;) {
			if (_t == antlr::nullAST )
				_t = ASTNULL;
			switch ( _t->getType()) {
			case NAFN:
			{
				antlr::RefAST tmp33_AST = antlr::nullAST;
				antlr::RefAST tmp33_AST_in = antlr::nullAST;
				if ( inputState->guessing == 0 ) {
					tmp33_AST = astFactory->create(_t);
					tmp33_AST_in = _t;
					astFactory->addASTChild(currentAST, tmp33_AST);
				}
				match(_t,NAFN);
				_t = _t->getNextSibling();
				break;
			}
			case GILDISVEITING:
			{
				antlr::RefAST __t39 = _t;
				antlr::RefAST tmp34_AST = antlr::nullAST;
				antlr::RefAST tmp34_AST_in = antlr::nullAST;
				if ( inputState->guessing == 0 ) {
					tmp34_AST = astFactory->create(_t);
					tmp34_AST_in = _t;
					astFactory->addASTChild(currentAST, tmp34_AST);
				}
				antlr::ASTPair __currentAST39 = currentAST;
				currentAST.root = currentAST.child;
				currentAST.child = antlr::nullAST;
				match(_t,GILDISVEITING);
				_t = _t->getFirstChild();
				antlr::RefAST tmp35_AST = antlr::nullAST;
				antlr::RefAST tmp35_AST_in = antlr::nullAST;
				if ( inputState->guessing == 0 ) {
					tmp35_AST = astFactory->create(_t);
					tmp35_AST_in = _t;
					astFactory->addASTChild(currentAST, tmp35_AST);
				}
				match(_t,NAFN);
				_t = _t->getNextSibling();
				segd(_t);
				_t = _retTree;
				if (inputState->guessing==0) {
					astFactory->addASTChild( currentAST, returnAST );
				}
				currentAST = __currentAST39;
				_t = __t39;
				_t = _t->getNextSibling();
				break;
			}
			default:
			{
				if ( _cnt40>=1 ) { goto _loop40; } else {throw antlr::NoViableAltException(_t);}
			}
			}
			_cnt40++;
		}
		_loop40:;
		}  // ( ... )+
		frumstillingaruna_AST = currentAST.root;
	}
	catch (antlr::RecognitionException& ex) {
		if( inputState->guessing == 0 ) {
			reportError(ex);
			if ( _t != antlr::nullAST )
				_t = _t->getNextSibling();
		} else {
			throw;
		}
	}
	returnAST = frumstillingaruna_AST;
	_retTree = _t;
}

void FjolnirTransformer::segd(antlr::RefAST _t) {
	antlr::RefAST segd_AST_in = _t;
	returnAST = antlr::nullAST;
	antlr::ASTPair currentAST;
	antlr::RefAST segd_AST = antlr::nullAST;
	antlr::RefAST s1_AST = antlr::nullAST;
	antlr::RefAST s1 = antlr::nullAST;
	antlr::RefAST s2_AST = antlr::nullAST;
	antlr::RefAST s2 = antlr::nullAST;
	antlr::RefAST s_AST = antlr::nullAST;
	antlr::RefAST s = antlr::nullAST;
	antlr::RefAST foo = antlr::nullAST;
	antlr::RefAST foo_AST = antlr::nullAST;
	antlr::RefAST sr_AST = antlr::nullAST;
	antlr::RefAST sr = antlr::nullAST;
	antlr::RefAST slist_AST = antlr::nullAST;
	antlr::RefAST slist = antlr::nullAST;
	antlr::RefAST efannars_AST = antlr::nullAST;
	antlr::RefAST efannars = antlr::nullAST;
	antlr::RefAST valannars_AST = antlr::nullAST;
	antlr::RefAST valannars = antlr::nullAST;
	
	try {      // for error handling
		if (_t == antlr::nullAST )
			_t = ASTNULL;
		switch ( _t->getType()) {
		case L_OG:
		{
			antlr::RefAST __t61 = _t;
			antlr::RefAST tmp36_AST = antlr::nullAST;
			antlr::RefAST tmp36_AST_in = antlr::nullAST;
			if ( inputState->guessing == 0 ) {
				tmp36_AST = astFactory->create(_t);
				tmp36_AST_in = _t;
				astFactory->addASTChild(currentAST, tmp36_AST);
			}
			antlr::ASTPair __currentAST61 = currentAST;
			currentAST.root = currentAST.child;
			currentAST.child = antlr::nullAST;
			match(_t,L_OG);
			_t = _t->getFirstChild();
			segd(_t);
			_t = _retTree;
			if (inputState->guessing==0) {
				astFactory->addASTChild( currentAST, returnAST );
			}
			segd(_t);
			_t = _retTree;
			if (inputState->guessing==0) {
				astFactory->addASTChild( currentAST, returnAST );
			}
			currentAST = __currentAST61;
			_t = __t61;
			_t = _t->getNextSibling();
			segd_AST = currentAST.root;
			break;
		}
		case L_EDA:
		{
			antlr::RefAST __t62 = _t;
			antlr::RefAST tmp37_AST = antlr::nullAST;
			antlr::RefAST tmp37_AST_in = antlr::nullAST;
			if ( inputState->guessing == 0 ) {
				tmp37_AST = astFactory->create(_t);
				tmp37_AST_in = _t;
				astFactory->addASTChild(currentAST, tmp37_AST);
			}
			antlr::ASTPair __currentAST62 = currentAST;
			currentAST.root = currentAST.child;
			currentAST.child = antlr::nullAST;
			match(_t,L_EDA);
			_t = _t->getFirstChild();
			segd(_t);
			_t = _retTree;
			if (inputState->guessing==0) {
				astFactory->addASTChild( currentAST, returnAST );
			}
			segd(_t);
			_t = _retTree;
			if (inputState->guessing==0) {
				astFactory->addASTChild( currentAST, returnAST );
			}
			currentAST = __currentAST62;
			_t = __t62;
			_t = _t->getNextSibling();
			segd_AST = currentAST.root;
			break;
		}
		case L_EKKI:
		{
			antlr::RefAST __t63 = _t;
			antlr::RefAST tmp38_AST = antlr::nullAST;
			antlr::RefAST tmp38_AST_in = antlr::nullAST;
			if ( inputState->guessing == 0 ) {
				tmp38_AST = astFactory->create(_t);
				tmp38_AST_in = _t;
				astFactory->addASTChild(currentAST, tmp38_AST);
			}
			antlr::ASTPair __currentAST63 = currentAST;
			currentAST.root = currentAST.child;
			currentAST.child = antlr::nullAST;
			match(_t,L_EKKI);
			_t = _t->getFirstChild();
			segd(_t);
			_t = _retTree;
			if (inputState->guessing==0) {
				astFactory->addASTChild( currentAST, returnAST );
			}
			currentAST = __currentAST63;
			_t = __t63;
			_t = _t->getNextSibling();
			segd_AST = currentAST.root;
			break;
		}
		case ADGERD:
		{
			antlr::RefAST __t64 = _t;
			antlr::RefAST tmp39_AST = antlr::nullAST;
			antlr::RefAST tmp39_AST_in = antlr::nullAST;
			if ( inputState->guessing == 0 ) {
				tmp39_AST = astFactory->create(_t);
				tmp39_AST_in = _t;
			}
			antlr::ASTPair __currentAST64 = currentAST;
			currentAST.root = currentAST.child;
			currentAST.child = antlr::nullAST;
			match(_t,ADGERD);
			_t = _t->getFirstChild();
			s1 = (_t == ASTNULL) ? antlr::nullAST : _t;
			segd(_t);
			_t = _retTree;
			if (inputState->guessing==0) {
				s1_AST = returnAST;
			}
			s2 = (_t == ASTNULL) ? antlr::nullAST : _t;
			segd(_t);
			_t = _retTree;
			if (inputState->guessing==0) {
				s2_AST = returnAST;
			}
			currentAST = __currentAST64;
			_t = __t64;
			_t = _t->getNextSibling();
			if ( inputState->guessing==0 ) {
				segd_AST = antlr::RefAST(currentAST.root);
#line 112 "FjolnirTransformer.g"
				
							tmp39_AST->setType(NAFN);
							segd_AST = antlr::RefAST(astFactory->make((new antlr::ASTArray(4))->add(astFactory->create(SVIGI_OPNA,"("))->add(tmp39_AST)->add(antlr::RefAST(astFactory->make((new antlr::ASTArray(1))->add(astFactory->create(NAFNARUNA,"inn-út")))))->add(antlr::RefAST(astFactory->make((new antlr::ASTArray(3))->add(astFactory->create(SEGDARUNA,"aðgerðarviðf"))->add(s1_AST)->add(s2_AST))))));
						
#line 1401 "FjolnirTransformer.cpp"
				currentAST.root = segd_AST;
				if ( segd_AST!=antlr::nullAST &&
					segd_AST->getFirstChild() != antlr::nullAST )
					  currentAST.child = segd_AST->getFirstChild();
				else
					currentAST.child = segd_AST;
				currentAST.advanceChildToEnd();
			}
			break;
		}
		case HORNKLOFI_OPNA:
		case FYLKISGILDISVEITING:
		{
			hlutfylkissegd(_t);
			_t = _retTree;
			if (inputState->guessing==0) {
				astFactory->addASTChild( currentAST, returnAST );
			}
			segd_AST = currentAST.root;
			break;
		}
		case GILDISVEITING:
		{
			antlr::RefAST __t65 = _t;
			antlr::RefAST tmp40_AST = antlr::nullAST;
			antlr::RefAST tmp40_AST_in = antlr::nullAST;
			if ( inputState->guessing == 0 ) {
				tmp40_AST = astFactory->create(_t);
				tmp40_AST_in = _t;
				astFactory->addASTChild(currentAST, tmp40_AST);
			}
			antlr::ASTPair __currentAST65 = currentAST;
			currentAST.root = currentAST.child;
			currentAST.child = antlr::nullAST;
			match(_t,GILDISVEITING);
			_t = _t->getFirstChild();
			antlr::RefAST tmp41_AST = antlr::nullAST;
			antlr::RefAST tmp41_AST_in = antlr::nullAST;
			if ( inputState->guessing == 0 ) {
				tmp41_AST = astFactory->create(_t);
				tmp41_AST_in = _t;
				astFactory->addASTChild(currentAST, tmp41_AST);
			}
			match(_t,NAFN);
			_t = _t->getNextSibling();
			segd(_t);
			_t = _retTree;
			if (inputState->guessing==0) {
				astFactory->addASTChild( currentAST, returnAST );
			}
			currentAST = __currentAST65;
			_t = __t65;
			_t = _t->getNextSibling();
			segd_AST = currentAST.root;
			break;
		}
		case EINUNDARADGERD:
		{
			antlr::RefAST __t66 = _t;
			antlr::RefAST tmp42_AST = antlr::nullAST;
			antlr::RefAST tmp42_AST_in = antlr::nullAST;
			if ( inputState->guessing == 0 ) {
				tmp42_AST = astFactory->create(_t);
				tmp42_AST_in = _t;
			}
			antlr::ASTPair __currentAST66 = currentAST;
			currentAST.root = currentAST.child;
			currentAST.child = antlr::nullAST;
			match(_t,EINUNDARADGERD);
			_t = _t->getFirstChild();
			s = (_t == ASTNULL) ? antlr::nullAST : _t;
			segd(_t);
			_t = _retTree;
			if (inputState->guessing==0) {
				s_AST = returnAST;
			}
			currentAST = __currentAST66;
			_t = __t66;
			_t = _t->getNextSibling();
			if ( inputState->guessing==0 ) {
				segd_AST = antlr::RefAST(currentAST.root);
#line 119 "FjolnirTransformer.g"
					tmp42_AST->setType(NAFN);
							segd_AST = antlr::RefAST(astFactory->make((new antlr::ASTArray(4))->add(astFactory->create(SVIGI_OPNA,"("))->add(tmp42_AST)->add(antlr::RefAST(astFactory->make((new antlr::ASTArray(1))->add(astFactory->create(NAFNARUNA,"inn-út")))))->add(antlr::RefAST(astFactory->make((new antlr::ASTArray(2))->add(astFactory->create(SEGDARUNA,"einundaraðgerðarviðf"))->add(s_AST))))));
						
#line 1487 "FjolnirTransformer.cpp"
				currentAST.root = segd_AST;
				if ( segd_AST!=antlr::nullAST &&
					segd_AST->getFirstChild() != antlr::nullAST )
					  currentAST.child = segd_AST->getFirstChild();
				else
					currentAST.child = segd_AST;
				currentAST.advanceChildToEnd();
			}
			break;
		}
		case LISTI:
		{
			antlr::RefAST __t72 = _t;
			antlr::RefAST tmp43_AST = antlr::nullAST;
			antlr::RefAST tmp43_AST_in = antlr::nullAST;
			if ( inputState->guessing == 0 ) {
				tmp43_AST = astFactory->create(_t);
				tmp43_AST_in = _t;
			}
			antlr::ASTPair __currentAST72 = currentAST;
			currentAST.root = currentAST.child;
			currentAST.child = antlr::nullAST;
			match(_t,LISTI);
			_t = _t->getFirstChild();
			slist = (_t == ASTNULL) ? antlr::nullAST : _t;
			segdaruna(_t);
			_t = _retTree;
			if (inputState->guessing==0) {
				slist_AST = returnAST;
			}
			currentAST = __currentAST72;
			_t = __t72;
			_t = _t->getNextSibling();
			if ( inputState->guessing==0 ) {
				segd_AST = antlr::RefAST(currentAST.root);
#line 128 "FjolnirTransformer.g"
				
				/* breytir [a,b,c] í :(;a,:(;b,c)) */
				antlr::RefAST current = slist_AST->getFirstChild();
							if (current == antlr::nullAST) {
								segd_AST = antlr::RefAST(astFactory->make((new antlr::ASTArray(1))->add(astFactory->create(TOMAGILDI,"[]"))));
							} else {
								antlr::RefAST subtree = antlr::RefAST(astFactory->make((new antlr::ASTArray(1))->add(astFactory->create(SEGDARUNA,"gildisviðf"))));
								antlr::RefAST root = antlr::RefAST(astFactory->make((new antlr::ASTArray(4))->add(astFactory->create(SVIGI_OPNA,"("))->add(astFactory->create(NAFN,":"))->add(antlr::RefAST(astFactory->make((new antlr::ASTArray(1))->add(astFactory->create(NAFNARUNA,"inn-út")))))->add(subtree)));
								while (current != antlr::nullAST) {
									subtree->addChild(current);
									antlr::RefAST temp1 = current->getNextSibling();
									current->setNextSibling(antlr::nullAST);
									current = temp1;
									if (current != antlr::nullAST) {
										antlr::RefAST newSubtree = antlr::RefAST(astFactory->make((new antlr::ASTArray(1))->add(astFactory->create(SEGDARUNA,"gildisviðf"))));
										antlr::RefAST temp2 = antlr::RefAST(astFactory->make((new antlr::ASTArray(4))->add(astFactory->create(SVIGI_OPNA,"("))->add(astFactory->create(NAFN,":"))->add(antlr::RefAST(astFactory->make((new antlr::ASTArray(1))->add(astFactory->create(NAFNARUNA,"inn-út")))))->add(newSubtree)));
										subtree->addChild(temp2);
										subtree = newSubtree;
									}
								}
								subtree->addChild( antlr::RefAST(astFactory->make((new antlr::ASTArray(1))->add(astFactory->create(TOMAGILDI,"[]")))) );
								segd_AST = root;
							}
				
#line 1548 "FjolnirTransformer.cpp"
				currentAST.root = segd_AST;
				if ( segd_AST!=antlr::nullAST &&
					segd_AST->getFirstChild() != antlr::nullAST )
					  currentAST.child = segd_AST->getFirstChild();
				else
					currentAST.child = segd_AST;
				currentAST.advanceChildToEnd();
			}
			break;
		}
		case L_STOFN:
		{
			antlr::RefAST __t73 = _t;
			antlr::RefAST tmp44_AST = antlr::nullAST;
			antlr::RefAST tmp44_AST_in = antlr::nullAST;
			if ( inputState->guessing == 0 ) {
				tmp44_AST = astFactory->create(_t);
				tmp44_AST_in = _t;
				astFactory->addASTChild(currentAST, tmp44_AST);
			}
			antlr::ASTPair __currentAST73 = currentAST;
			currentAST.root = currentAST.child;
			currentAST.child = antlr::nullAST;
			match(_t,L_STOFN);
			_t = _t->getFirstChild();
			segdaruna(_t);
			_t = _retTree;
			if (inputState->guessing==0) {
				astFactory->addASTChild( currentAST, returnAST );
			}
			currentAST = __currentAST73;
			_t = __t73;
			_t = _t->getNextSibling();
			segd_AST = currentAST.root;
			break;
		}
		case L_EF:
		{
			antlr::RefAST __t74 = _t;
			antlr::RefAST tmp45_AST = antlr::nullAST;
			antlr::RefAST tmp45_AST_in = antlr::nullAST;
			if ( inputState->guessing == 0 ) {
				tmp45_AST = astFactory->create(_t);
				tmp45_AST_in = _t;
				astFactory->addASTChild(currentAST, tmp45_AST);
			}
			antlr::ASTPair __currentAST74 = currentAST;
			currentAST.root = currentAST.child;
			currentAST.child = antlr::nullAST;
			match(_t,L_EF);
			_t = _t->getFirstChild();
			segd(_t);
			_t = _retTree;
			if (inputState->guessing==0) {
				astFactory->addASTChild( currentAST, returnAST );
			}
			segdaruna(_t);
			_t = _retTree;
			if (inputState->guessing==0) {
				astFactory->addASTChild( currentAST, returnAST );
			}
			{ // ( ... )*
			for (;;) {
				if (_t == antlr::nullAST )
					_t = ASTNULL;
				if ((_t->getType() == L_ANNARSEF)) {
					antlr::RefAST __t76 = _t;
					antlr::RefAST tmp46_AST = antlr::nullAST;
					antlr::RefAST tmp46_AST_in = antlr::nullAST;
					if ( inputState->guessing == 0 ) {
						tmp46_AST = astFactory->create(_t);
						tmp46_AST_in = _t;
						astFactory->addASTChild(currentAST, tmp46_AST);
					}
					antlr::ASTPair __currentAST76 = currentAST;
					currentAST.root = currentAST.child;
					currentAST.child = antlr::nullAST;
					match(_t,L_ANNARSEF);
					_t = _t->getFirstChild();
					segd(_t);
					_t = _retTree;
					if (inputState->guessing==0) {
						astFactory->addASTChild( currentAST, returnAST );
					}
					segdaruna(_t);
					_t = _retTree;
					if (inputState->guessing==0) {
						astFactory->addASTChild( currentAST, returnAST );
					}
					currentAST = __currentAST76;
					_t = __t76;
					_t = _t->getNextSibling();
				}
				else {
					goto _loop77;
				}
				
			}
			_loop77:;
			} // ( ... )*
			{
			if (_t == antlr::nullAST )
				_t = ASTNULL;
			switch ( _t->getType()) {
			case SEGDARUNA:
			{
				efannars = (_t == ASTNULL) ? antlr::nullAST : _t;
				segdaruna(_t);
				_t = _retTree;
				if (inputState->guessing==0) {
					efannars_AST = returnAST;
					astFactory->addASTChild( currentAST, returnAST );
				}
				break;
			}
			case 3:
			{
				break;
			}
			default:
			{
				throw antlr::NoViableAltException(_t);
			}
			}
			}
			currentAST = __currentAST74;
			_t = __t74;
			_t = _t->getNextSibling();
			if ( inputState->guessing==0 ) {
				segd_AST = antlr::RefAST(currentAST.root);
#line 154 "FjolnirTransformer.g"
				if (antlr::nullAST == efannars) segd_AST->addChild(antlr::RefAST(astFactory->make((new antlr::ASTArray(2))->add(astFactory->create(SEGDARUNA,"segðaruna"))->add(astFactory->create(TOMAGILDI,"[]")))));
#line 1681 "FjolnirTransformer.cpp"
			}
			segd_AST = currentAST.root;
			break;
		}
		case L_FYRIR:
		case L_LYKKJA:
		case L_MEDAN:
		{
			lykkjusegd(_t);
			_t = _retTree;
			if (inputState->guessing==0) {
				astFactory->addASTChild( currentAST, returnAST );
			}
			segd_AST = currentAST.root;
			break;
		}
		case L_VAL:
		{
			antlr::RefAST __t79 = _t;
			antlr::RefAST tmp47_AST = antlr::nullAST;
			antlr::RefAST tmp47_AST_in = antlr::nullAST;
			if ( inputState->guessing == 0 ) {
				tmp47_AST = astFactory->create(_t);
				tmp47_AST_in = _t;
				astFactory->addASTChild(currentAST, tmp47_AST);
			}
			antlr::ASTPair __currentAST79 = currentAST;
			currentAST.root = currentAST.child;
			currentAST.child = antlr::nullAST;
			match(_t,L_VAL);
			_t = _t->getFirstChild();
			segd(_t);
			_t = _retTree;
			if (inputState->guessing==0) {
				astFactory->addASTChild( currentAST, returnAST );
			}
			{ // ( ... )*
			for (;;) {
				if (_t == antlr::nullAST )
					_t = ASTNULL;
				if ((_t->getType() == L_KOSTUR)) {
					antlr::RefAST __t81 = _t;
					antlr::RefAST tmp48_AST = antlr::nullAST;
					antlr::RefAST tmp48_AST_in = antlr::nullAST;
					if ( inputState->guessing == 0 ) {
						tmp48_AST = astFactory->create(_t);
						tmp48_AST_in = _t;
						astFactory->addASTChild(currentAST, tmp48_AST);
					}
					antlr::ASTPair __currentAST81 = currentAST;
					currentAST.root = currentAST.child;
					currentAST.child = antlr::nullAST;
					match(_t,L_KOSTUR);
					_t = _t->getFirstChild();
					valfasti_range(_t);
					_t = _retTree;
					if (inputState->guessing==0) {
						astFactory->addASTChild( currentAST, returnAST );
					}
					segdaruna(_t);
					_t = _retTree;
					if (inputState->guessing==0) {
						astFactory->addASTChild( currentAST, returnAST );
					}
					currentAST = __currentAST81;
					_t = __t81;
					_t = _t->getNextSibling();
				}
				else {
					goto _loop82;
				}
				
			}
			_loop82:;
			} // ( ... )*
			{
			if (_t == antlr::nullAST )
				_t = ASTNULL;
			switch ( _t->getType()) {
			case SEGDARUNA:
			{
				valannars = (_t == ASTNULL) ? antlr::nullAST : _t;
				segdaruna(_t);
				_t = _retTree;
				if (inputState->guessing==0) {
					valannars_AST = returnAST;
					astFactory->addASTChild( currentAST, returnAST );
				}
				break;
			}
			case 3:
			{
				break;
			}
			default:
			{
				throw antlr::NoViableAltException(_t);
			}
			}
			}
			currentAST = __currentAST79;
			_t = __t79;
			_t = _t->getNextSibling();
			if ( inputState->guessing==0 ) {
				segd_AST = antlr::RefAST(currentAST.root);
#line 157 "FjolnirTransformer.g"
				if (antlr::nullAST == valannars) segd_AST->addChild(antlr::RefAST(astFactory->make((new antlr::ASTArray(2))->add(astFactory->create(SEGDARUNA,"segðaruna"))->add(astFactory->create(TOMAGILDI,"[]")))));
#line 1789 "FjolnirTransformer.cpp"
			}
			segd_AST = currentAST.root;
			break;
		}
		case L_SKILA:
		{
			antlr::RefAST __t84 = _t;
			antlr::RefAST tmp49_AST = antlr::nullAST;
			antlr::RefAST tmp49_AST_in = antlr::nullAST;
			if ( inputState->guessing == 0 ) {
				tmp49_AST = astFactory->create(_t);
				tmp49_AST_in = _t;
				astFactory->addASTChild(currentAST, tmp49_AST);
			}
			antlr::ASTPair __currentAST84 = currentAST;
			currentAST.root = currentAST.child;
			currentAST.child = antlr::nullAST;
			match(_t,L_SKILA);
			_t = _t->getFirstChild();
			segd(_t);
			_t = _retTree;
			if (inputState->guessing==0) {
				astFactory->addASTChild( currentAST, returnAST );
			}
			currentAST = __currentAST84;
			_t = __t84;
			_t = _t->getNextSibling();
			segd_AST = currentAST.root;
			break;
		}
		case L_UT:
		{
			antlr::RefAST tmp50_AST = antlr::nullAST;
			antlr::RefAST tmp50_AST_in = antlr::nullAST;
			if ( inputState->guessing == 0 ) {
				tmp50_AST = astFactory->create(_t);
				tmp50_AST_in = _t;
				astFactory->addASTChild(currentAST, tmp50_AST);
			}
			match(_t,L_UT);
			_t = _t->getNextSibling();
			segd_AST = currentAST.root;
			break;
		}
		case NAFN:
		{
			antlr::RefAST tmp51_AST = antlr::nullAST;
			antlr::RefAST tmp51_AST_in = antlr::nullAST;
			if ( inputState->guessing == 0 ) {
				tmp51_AST = astFactory->create(_t);
				tmp51_AST_in = _t;
				astFactory->addASTChild(currentAST, tmp51_AST);
			}
			match(_t,NAFN);
			_t = _t->getNextSibling();
			segd_AST = currentAST.root;
			break;
		}
		case STRENGFASTI:
		{
			antlr::RefAST tmp52_AST = antlr::nullAST;
			antlr::RefAST tmp52_AST_in = antlr::nullAST;
			if ( inputState->guessing == 0 ) {
				tmp52_AST = astFactory->create(_t);
				tmp52_AST_in = _t;
				astFactory->addASTChild(currentAST, tmp52_AST);
			}
			match(_t,STRENGFASTI);
			_t = _t->getNextSibling();
			segd_AST = currentAST.root;
			break;
		}
		case STAFFASTI:
		{
			antlr::RefAST tmp53_AST = antlr::nullAST;
			antlr::RefAST tmp53_AST_in = antlr::nullAST;
			if ( inputState->guessing == 0 ) {
				tmp53_AST = astFactory->create(_t);
				tmp53_AST_in = _t;
				astFactory->addASTChild(currentAST, tmp53_AST);
			}
			match(_t,STAFFASTI);
			_t = _t->getNextSibling();
			segd_AST = currentAST.root;
			break;
		}
		case FJOLDATALA:
		{
			antlr::RefAST tmp54_AST = antlr::nullAST;
			antlr::RefAST tmp54_AST_in = antlr::nullAST;
			if ( inputState->guessing == 0 ) {
				tmp54_AST = astFactory->create(_t);
				tmp54_AST_in = _t;
				astFactory->addASTChild(currentAST, tmp54_AST);
			}
			match(_t,FJOLDATALA);
			_t = _t->getNextSibling();
			segd_AST = currentAST.root;
			break;
		}
		case HEILTALA:
		{
			antlr::RefAST tmp55_AST = antlr::nullAST;
			antlr::RefAST tmp55_AST_in = antlr::nullAST;
			if ( inputState->guessing == 0 ) {
				tmp55_AST = astFactory->create(_t);
				tmp55_AST_in = _t;
				astFactory->addASTChild(currentAST, tmp55_AST);
			}
			match(_t,HEILTALA);
			_t = _t->getNextSibling();
			segd_AST = currentAST.root;
			break;
		}
		case FLEYTITALA:
		{
			antlr::RefAST tmp56_AST = antlr::nullAST;
			antlr::RefAST tmp56_AST_in = antlr::nullAST;
			if ( inputState->guessing == 0 ) {
				tmp56_AST = astFactory->create(_t);
				tmp56_AST_in = _t;
				astFactory->addASTChild(currentAST, tmp56_AST);
			}
			match(_t,FLEYTITALA);
			_t = _t->getNextSibling();
			segd_AST = currentAST.root;
			break;
		}
		case TOMAGILDI:
		{
			antlr::RefAST tmp57_AST = antlr::nullAST;
			antlr::RefAST tmp57_AST_in = antlr::nullAST;
			if ( inputState->guessing == 0 ) {
				tmp57_AST = astFactory->create(_t);
				tmp57_AST_in = _t;
				astFactory->addASTChild(currentAST, tmp57_AST);
			}
			match(_t,TOMAGILDI);
			_t = _t->getNextSibling();
			segd_AST = currentAST.root;
			break;
		}
		case L_STEF:
		{
			antlr::RefAST __t85 = _t;
			antlr::RefAST tmp58_AST = antlr::nullAST;
			antlr::RefAST tmp58_AST_in = antlr::nullAST;
			if ( inputState->guessing == 0 ) {
				tmp58_AST = astFactory->create(_t);
				tmp58_AST_in = _t;
				astFactory->addASTChild(currentAST, tmp58_AST);
			}
			antlr::ASTPair __currentAST85 = currentAST;
			currentAST.root = currentAST.child;
			currentAST.child = antlr::nullAST;
			match(_t,L_STEF);
			_t = _t->getFirstChild();
			antlr::RefAST tmp59_AST = antlr::nullAST;
			antlr::RefAST tmp59_AST_in = antlr::nullAST;
			if ( inputState->guessing == 0 ) {
				tmp59_AST = astFactory->create(_t);
				tmp59_AST_in = _t;
				astFactory->addASTChild(currentAST, tmp59_AST);
			}
			match(_t,NAFN);
			_t = _t->getNextSibling();
			antlr::RefAST tmp60_AST = antlr::nullAST;
			antlr::RefAST tmp60_AST_in = antlr::nullAST;
			if ( inputState->guessing == 0 ) {
				tmp60_AST = astFactory->create(_t);
				tmp60_AST_in = _t;
				astFactory->addASTChild(currentAST, tmp60_AST);
			}
			match(_t,FJOLDATALA);
			_t = _t->getNextSibling();
			antlr::RefAST tmp61_AST = antlr::nullAST;
			antlr::RefAST tmp61_AST_in = antlr::nullAST;
			if ( inputState->guessing == 0 ) {
				tmp61_AST = astFactory->create(_t);
				tmp61_AST_in = _t;
				astFactory->addASTChild(currentAST, tmp61_AST);
			}
			match(_t,FJOLDATALA);
			_t = _t->getNextSibling();
			currentAST = __currentAST85;
			_t = __t85;
			_t = _t->getNextSibling();
			segd_AST = currentAST.root;
			break;
		}
		default:
			bool synPredMatched69 = false;
			if (((_t->getType() == SVIGI_OPNA) && (_tokenSet_1.member(_t->getType())) && (_tokenSet_2.member(_t->getType())))) {
				antlr::RefAST __t69 = _t;
				synPredMatched69 = true;
				inputState->guessing++;
				try {
					{
					antlr::RefAST __t68 = _t;
					antlr::ASTPair __currentAST68 = currentAST;
					currentAST.root = currentAST.child;
					currentAST.child = antlr::nullAST;
					match(_t,SVIGI_OPNA);
					_t = _t->getFirstChild();
					match(_t,ADGERD);
					_t = _t->getNextSibling();
					currentAST = __currentAST68;
					_t = __t68;
					_t = _t->getNextSibling();
					}
				}
				catch (antlr::RecognitionException& pe) {
					synPredMatched69 = false;
				}
				_t = __t69;
				inputState->guessing--;
			}
			if ( synPredMatched69 ) {
				antlr::RefAST __t70 = _t;
				foo = (_t == ASTNULL) ? antlr::nullAST : _t;
				antlr::RefAST foo_AST_in = antlr::nullAST;
				if ( inputState->guessing == 0 ) {
					foo_AST = astFactory->create(foo);
				}
				antlr::ASTPair __currentAST70 = currentAST;
				currentAST.root = currentAST.child;
				currentAST.child = antlr::nullAST;
				match(_t,SVIGI_OPNA);
				_t = _t->getFirstChild();
				antlr::RefAST tmp62_AST = antlr::nullAST;
				antlr::RefAST tmp62_AST_in = antlr::nullAST;
				if ( inputState->guessing == 0 ) {
					tmp62_AST = astFactory->create(_t);
					tmp62_AST_in = _t;
				}
				match(_t,ADGERD);
				_t = _t->getNextSibling();
				sr = (_t == ASTNULL) ? antlr::nullAST : _t;
				segdaruna(_t);
				_t = _retTree;
				if (inputState->guessing==0) {
					sr_AST = returnAST;
				}
				currentAST = __currentAST70;
				_t = __t70;
				_t = _t->getNextSibling();
				if ( inputState->guessing==0 ) {
					segd_AST = antlr::RefAST(currentAST.root);
#line 123 "FjolnirTransformer.g"
						tmp62_AST->setType(NAFN);
								segd_AST = antlr::RefAST(astFactory->make((new antlr::ASTArray(4))->add(astFactory->create(SVIGI_OPNA,"("))->add(tmp62_AST)->add(antlr::RefAST(astFactory->make((new antlr::ASTArray(1))->add(astFactory->create(NAFNARUNA,"inn-út")))))->add(sr_AST)));
							
#line 2042 "FjolnirTransformer.cpp"
					currentAST.root = segd_AST;
					if ( segd_AST!=antlr::nullAST &&
						segd_AST->getFirstChild() != antlr::nullAST )
						  currentAST.child = segd_AST->getFirstChild();
					else
						currentAST.child = segd_AST;
					currentAST.advanceChildToEnd();
				}
			}
			else if ((_t->getType() == SVIGI_OPNA) && (_tokenSet_1.member(_t->getType())) && (_tokenSet_2.member(_t->getType()))) {
				antlr::RefAST __t71 = _t;
				antlr::RefAST tmp63_AST = antlr::nullAST;
				antlr::RefAST tmp63_AST_in = antlr::nullAST;
				if ( inputState->guessing == 0 ) {
					tmp63_AST = astFactory->create(_t);
					tmp63_AST_in = _t;
					astFactory->addASTChild(currentAST, tmp63_AST);
				}
				antlr::ASTPair __currentAST71 = currentAST;
				currentAST.root = currentAST.child;
				currentAST.child = antlr::nullAST;
				match(_t,SVIGI_OPNA);
				_t = _t->getFirstChild();
				antlr::RefAST tmp64_AST = antlr::nullAST;
				antlr::RefAST tmp64_AST_in = antlr::nullAST;
				if ( inputState->guessing == 0 ) {
					tmp64_AST = astFactory->create(_t);
					tmp64_AST_in = _t;
					astFactory->addASTChild(currentAST, tmp64_AST);
				}
				match(_t,NAFN);
				_t = _t->getNextSibling();
				nafnaruna(_t);
				_t = _retTree;
				if (inputState->guessing==0) {
					astFactory->addASTChild( currentAST, returnAST );
				}
				segdaruna(_t);
				_t = _retTree;
				if (inputState->guessing==0) {
					astFactory->addASTChild( currentAST, returnAST );
				}
				currentAST = __currentAST71;
				_t = __t71;
				_t = _t->getNextSibling();
				segd_AST = currentAST.root;
			}
		else {
			throw antlr::NoViableAltException(_t);
		}
		}
	}
	catch (antlr::RecognitionException& ex) {
		if( inputState->guessing == 0 ) {
			reportError(ex);
			if ( _t != antlr::nullAST )
				_t = _t->getNextSibling();
		} else {
			throw;
		}
	}
	returnAST = segd_AST;
	_retTree = _t;
}

void FjolnirTransformer::innraStef(antlr::RefAST _t) {
	antlr::RefAST innraStef_AST_in = _t;
	returnAST = antlr::nullAST;
	antlr::ASTPair currentAST;
	antlr::RefAST innraStef_AST = antlr::nullAST;
	
	try {      // for error handling
		antlr::RefAST __t46 = _t;
		antlr::RefAST tmp65_AST = antlr::nullAST;
		antlr::RefAST tmp65_AST_in = antlr::nullAST;
		if ( inputState->guessing == 0 ) {
			tmp65_AST = astFactory->create(_t);
			tmp65_AST_in = _t;
			astFactory->addASTChild(currentAST, tmp65_AST);
		}
		antlr::ASTPair __currentAST46 = currentAST;
		currentAST.root = currentAST.child;
		currentAST.child = antlr::nullAST;
		match(_t,INNSETNING);
		_t = _t->getFirstChild();
		antlr::RefAST tmp66_AST = antlr::nullAST;
		antlr::RefAST tmp66_AST_in = antlr::nullAST;
		if ( inputState->guessing == 0 ) {
			tmp66_AST = astFactory->create(_t);
			tmp66_AST_in = _t;
			astFactory->addASTChild(currentAST, tmp66_AST);
		}
		match(_t,NAFN);
		_t = _t->getNextSibling();
		stefskilgreining(_t);
		_t = _retTree;
		if (inputState->guessing==0) {
			astFactory->addASTChild( currentAST, returnAST );
		}
		currentAST = __currentAST46;
		_t = __t46;
		_t = _t->getNextSibling();
		innraStef_AST = currentAST.root;
	}
	catch (antlr::RecognitionException& ex) {
		if( inputState->guessing == 0 ) {
			reportError(ex);
			if ( _t != antlr::nullAST )
				_t = _t->getNextSibling();
		} else {
			throw;
		}
	}
	returnAST = innraStef_AST;
	_retTree = _t;
}

void FjolnirTransformer::bodskilgreining(antlr::RefAST _t) {
	antlr::RefAST bodskilgreining_AST_in = _t;
	returnAST = antlr::nullAST;
	antlr::ASTPair currentAST;
	antlr::RefAST bodskilgreining_AST = antlr::nullAST;
	
	try {      // for error handling
		antlr::RefAST __t54 = _t;
		antlr::RefAST tmp67_AST = antlr::nullAST;
		antlr::RefAST tmp67_AST_in = antlr::nullAST;
		if ( inputState->guessing == 0 ) {
			tmp67_AST = astFactory->create(_t);
			tmp67_AST_in = _t;
			astFactory->addASTChild(currentAST, tmp67_AST);
		}
		antlr::ASTPair __currentAST54 = currentAST;
		currentAST.root = currentAST.child;
		currentAST.child = antlr::nullAST;
		match(_t,L_BOD);
		_t = _t->getFirstChild();
		antlr::RefAST tmp68_AST = antlr::nullAST;
		antlr::RefAST tmp68_AST_in = antlr::nullAST;
		if ( inputState->guessing == 0 ) {
			tmp68_AST = astFactory->create(_t);
			tmp68_AST_in = _t;
			astFactory->addASTChild(currentAST, tmp68_AST);
		}
		match(_t,NAFN);
		_t = _t->getNextSibling();
		nafnaruna(_t);
		_t = _retTree;
		if (inputState->guessing==0) {
			astFactory->addASTChild( currentAST, returnAST );
		}
		nafnaruna(_t);
		_t = _retTree;
		if (inputState->guessing==0) {
			astFactory->addASTChild( currentAST, returnAST );
		}
		skilgreiningar(_t);
		_t = _retTree;
		if (inputState->guessing==0) {
			astFactory->addASTChild( currentAST, returnAST );
		}
		segdaruna(_t);
		_t = _retTree;
		if (inputState->guessing==0) {
			astFactory->addASTChild( currentAST, returnAST );
		}
		{
		if (_t == antlr::nullAST )
			_t = ASTNULL;
		switch ( _t->getType()) {
		case SLAUFA_OPNA:
		{
			innriTextaeining(_t);
			_t = _retTree;
			if (inputState->guessing==0) {
				astFactory->addASTChild( currentAST, returnAST );
			}
			break;
		}
		case 3:
		{
			break;
		}
		default:
		{
			throw antlr::NoViableAltException(_t);
		}
		}
		}
		currentAST = __currentAST54;
		_t = __t54;
		_t = _t->getNextSibling();
		bodskilgreining_AST = currentAST.root;
	}
	catch (antlr::RecognitionException& ex) {
		if( inputState->guessing == 0 ) {
			reportError(ex);
			if ( _t != antlr::nullAST )
				_t = _t->getNextSibling();
		} else {
			throw;
		}
	}
	returnAST = bodskilgreining_AST;
	_retTree = _t;
}

void FjolnirTransformer::hlutfylkissegd(antlr::RefAST _t) {
	antlr::RefAST hlutfylkissegd_AST_in = _t;
	returnAST = antlr::nullAST;
	antlr::ASTPair currentAST;
	antlr::RefAST hlutfylkissegd_AST = antlr::nullAST;
	antlr::RefAST s_AST = antlr::nullAST;
	antlr::RefAST s = antlr::nullAST;
	antlr::RefAST r_AST = antlr::nullAST;
	antlr::RefAST r = antlr::nullAST;
	antlr::RefAST ss_AST = antlr::nullAST;
	antlr::RefAST ss = antlr::nullAST;
	antlr::RefAST rr_AST = antlr::nullAST;
	antlr::RefAST rr = antlr::nullAST;
	antlr::RefAST gildi_AST = antlr::nullAST;
	antlr::RefAST gildi = antlr::nullAST;
	
	try {      // for error handling
		if (_t == antlr::nullAST )
			_t = ASTNULL;
		switch ( _t->getType()) {
		case HORNKLOFI_OPNA:
		{
			antlr::RefAST __t87 = _t;
			antlr::RefAST tmp69_AST = antlr::nullAST;
			antlr::RefAST tmp69_AST_in = antlr::nullAST;
			if ( inputState->guessing == 0 ) {
				tmp69_AST = astFactory->create(_t);
				tmp69_AST_in = _t;
			}
			antlr::ASTPair __currentAST87 = currentAST;
			currentAST.root = currentAST.child;
			currentAST.child = antlr::nullAST;
			match(_t,HORNKLOFI_OPNA);
			_t = _t->getFirstChild();
			s = (_t == ASTNULL) ? antlr::nullAST : _t;
			segd(_t);
			_t = _retTree;
			if (inputState->guessing==0) {
				s_AST = returnAST;
			}
			r = (_t == ASTNULL) ? antlr::nullAST : _t;
			segdaruna(_t);
			_t = _retTree;
			if (inputState->guessing==0) {
				r_AST = returnAST;
			}
			currentAST = __currentAST87;
			_t = __t87;
			_t = _t->getNextSibling();
			if ( inputState->guessing==0 ) {
				hlutfylkissegd_AST = antlr::RefAST(currentAST.root);
#line 169 "FjolnirTransformer.g"
				
							antlr::RefAST sr = antlr::RefAST(astFactory->make((new antlr::ASTArray(2))->add(astFactory->create(SEGDARUNA))->add(s_AST)));
							int i = 0;
							antlr::RefAST hali = sr->getFirstChild();
							antlr::RefAST c = r_AST->getFirstChild();
							while (antlr::nullAST != c) {
								hali->setNextSibling(c);
								i++;
								hali = c;
								c = c->getNextSibling();
							}
							char fallnafn[64];
							::_snprintf(fallnafn, 64, "fylkisækja%d", i);
							hlutfylkissegd_AST = antlr::RefAST(astFactory->make((new antlr::ASTArray(4))->add(astFactory->create(SVIGI_OPNA))->add(astFactory->create(NAFN,fallnafn))->add(antlr::RefAST(astFactory->make((new antlr::ASTArray(1))->add(astFactory->create(NAFNARUNA)))))->add(sr)));
						
#line 2317 "FjolnirTransformer.cpp"
				currentAST.root = hlutfylkissegd_AST;
				if ( hlutfylkissegd_AST!=antlr::nullAST &&
					hlutfylkissegd_AST->getFirstChild() != antlr::nullAST )
					  currentAST.child = hlutfylkissegd_AST->getFirstChild();
				else
					currentAST.child = hlutfylkissegd_AST;
				currentAST.advanceChildToEnd();
			}
			break;
		}
		case FYLKISGILDISVEITING:
		{
			antlr::RefAST __t88 = _t;
			antlr::RefAST tmp70_AST = antlr::nullAST;
			antlr::RefAST tmp70_AST_in = antlr::nullAST;
			if ( inputState->guessing == 0 ) {
				tmp70_AST = astFactory->create(_t);
				tmp70_AST_in = _t;
			}
			antlr::ASTPair __currentAST88 = currentAST;
			currentAST.root = currentAST.child;
			currentAST.child = antlr::nullAST;
			match(_t,FYLKISGILDISVEITING);
			_t = _t->getFirstChild();
			antlr::RefAST __t89 = _t;
			antlr::RefAST tmp71_AST = antlr::nullAST;
			antlr::RefAST tmp71_AST_in = antlr::nullAST;
			if ( inputState->guessing == 0 ) {
				tmp71_AST = astFactory->create(_t);
				tmp71_AST_in = _t;
			}
			antlr::ASTPair __currentAST89 = currentAST;
			currentAST.root = currentAST.child;
			currentAST.child = antlr::nullAST;
			match(_t,HORNKLOFI_OPNA);
			_t = _t->getFirstChild();
			ss = (_t == ASTNULL) ? antlr::nullAST : _t;
			segd(_t);
			_t = _retTree;
			if (inputState->guessing==0) {
				ss_AST = returnAST;
			}
			rr = (_t == ASTNULL) ? antlr::nullAST : _t;
			segdaruna(_t);
			_t = _retTree;
			if (inputState->guessing==0) {
				rr_AST = returnAST;
			}
			currentAST = __currentAST89;
			_t = __t89;
			_t = _t->getNextSibling();
			gildi = (_t == ASTNULL) ? antlr::nullAST : _t;
			segd(_t);
			_t = _retTree;
			if (inputState->guessing==0) {
				gildi_AST = returnAST;
			}
			currentAST = __currentAST88;
			_t = __t88;
			_t = _t->getNextSibling();
			if ( inputState->guessing==0 ) {
				hlutfylkissegd_AST = antlr::RefAST(currentAST.root);
#line 185 "FjolnirTransformer.g"
				
							antlr::RefAST sr = antlr::RefAST(astFactory->make((new antlr::ASTArray(2))->add(astFactory->create(SEGDARUNA))->add(ss_AST)));
							int i = 0;
							antlr::RefAST hali = sr->getFirstChild();
							antlr::RefAST c = rr_AST->getFirstChild();
							while (antlr::nullAST != c) {
								hali->setNextSibling(c);
								i++;
								hali = c;
								c = c->getNextSibling();
							}
							hali->setNextSibling(gildi);
							char fallnafn[64];
							::_snprintf(fallnafn, 64, "fylkisetja%d", i);
							hlutfylkissegd_AST = antlr::RefAST(astFactory->make((new antlr::ASTArray(4))->add(astFactory->create(SVIGI_OPNA))->add(astFactory->create(NAFN,fallnafn))->add(antlr::RefAST(astFactory->make((new antlr::ASTArray(1))->add(astFactory->create(NAFNARUNA)))))->add(sr)));
						
#line 2397 "FjolnirTransformer.cpp"
				currentAST.root = hlutfylkissegd_AST;
				if ( hlutfylkissegd_AST!=antlr::nullAST &&
					hlutfylkissegd_AST->getFirstChild() != antlr::nullAST )
					  currentAST.child = hlutfylkissegd_AST->getFirstChild();
				else
					currentAST.child = hlutfylkissegd_AST;
				currentAST.advanceChildToEnd();
			}
			break;
		}
		default:
		{
			throw antlr::NoViableAltException(_t);
		}
		}
	}
	catch (antlr::RecognitionException& ex) {
		if( inputState->guessing == 0 ) {
			reportError(ex);
			if ( _t != antlr::nullAST )
				_t = _t->getNextSibling();
		} else {
			throw;
		}
	}
	returnAST = hlutfylkissegd_AST;
	_retTree = _t;
}

void FjolnirTransformer::lykkjusegd(antlr::RefAST _t) {
	antlr::RefAST lykkjusegd_AST_in = _t;
	returnAST = antlr::nullAST;
	antlr::ASTPair currentAST;
	antlr::RefAST lykkjusegd_AST = antlr::nullAST;
	
	try {      // for error handling
		if (_t == antlr::nullAST )
			_t = ASTNULL;
		switch ( _t->getType()) {
		case L_LYKKJA:
		{
			antlr::RefAST __t91 = _t;
			antlr::RefAST tmp72_AST = antlr::nullAST;
			antlr::RefAST tmp72_AST_in = antlr::nullAST;
			if ( inputState->guessing == 0 ) {
				tmp72_AST = astFactory->create(_t);
				tmp72_AST_in = _t;
				astFactory->addASTChild(currentAST, tmp72_AST);
			}
			antlr::ASTPair __currentAST91 = currentAST;
			currentAST.root = currentAST.child;
			currentAST.child = antlr::nullAST;
			match(_t,L_LYKKJA);
			_t = _t->getFirstChild();
			segdaruna(_t);
			_t = _retTree;
			if (inputState->guessing==0) {
				astFactory->addASTChild( currentAST, returnAST );
			}
			currentAST = __currentAST91;
			_t = __t91;
			_t = _t->getNextSibling();
			lykkjusegd_AST = currentAST.root;
			break;
		}
		case L_MEDAN:
		{
			antlr::RefAST __t92 = _t;
			antlr::RefAST tmp73_AST = antlr::nullAST;
			antlr::RefAST tmp73_AST_in = antlr::nullAST;
			if ( inputState->guessing == 0 ) {
				tmp73_AST = astFactory->create(_t);
				tmp73_AST_in = _t;
				astFactory->addASTChild(currentAST, tmp73_AST);
			}
			antlr::ASTPair __currentAST92 = currentAST;
			currentAST.root = currentAST.child;
			currentAST.child = antlr::nullAST;
			match(_t,L_MEDAN);
			_t = _t->getFirstChild();
			segd(_t);
			_t = _retTree;
			if (inputState->guessing==0) {
				astFactory->addASTChild( currentAST, returnAST );
			}
			segdaruna(_t);
			_t = _retTree;
			if (inputState->guessing==0) {
				astFactory->addASTChild( currentAST, returnAST );
			}
			currentAST = __currentAST92;
			_t = __t92;
			_t = _t->getNextSibling();
			lykkjusegd_AST = currentAST.root;
			break;
		}
		case L_FYRIR:
		{
			antlr::RefAST __t93 = _t;
			antlr::RefAST tmp74_AST = antlr::nullAST;
			antlr::RefAST tmp74_AST_in = antlr::nullAST;
			if ( inputState->guessing == 0 ) {
				tmp74_AST = astFactory->create(_t);
				tmp74_AST_in = _t;
				astFactory->addASTChild(currentAST, tmp74_AST);
			}
			antlr::ASTPair __currentAST93 = currentAST;
			currentAST.root = currentAST.child;
			currentAST.child = antlr::nullAST;
			match(_t,L_FYRIR);
			_t = _t->getFirstChild();
			segdaruna(_t);
			_t = _retTree;
			if (inputState->guessing==0) {
				astFactory->addASTChild( currentAST, returnAST );
			}
			segd(_t);
			_t = _retTree;
			if (inputState->guessing==0) {
				astFactory->addASTChild( currentAST, returnAST );
			}
			segdaruna(_t);
			_t = _retTree;
			if (inputState->guessing==0) {
				astFactory->addASTChild( currentAST, returnAST );
			}
			segdaruna(_t);
			_t = _retTree;
			if (inputState->guessing==0) {
				astFactory->addASTChild( currentAST, returnAST );
			}
			currentAST = __currentAST93;
			_t = __t93;
			_t = _t->getNextSibling();
			if ( inputState->guessing==0 ) {
				lykkjusegd_AST = antlr::RefAST(currentAST.root);
#line 208 "FjolnirTransformer.g"
				
							/* breytum "fyrir" lykkju í "meðan" lykkju */
							lykkjusegd_AST->setType(L_MEDAN);
							antlr::RefAST ini = lykkjusegd_AST->getFirstChild();
							antlr::RefAST tst = ini->getNextSibling();
							antlr::RefAST incr = tst->getNextSibling();
							antlr::RefAST body = incr->getNextSibling();
							lykkjusegd_AST->setFirstChild(tst);
							antlr::RefAST lastBody = body->getFirstChild();
							if (antlr::nullAST != lastBody) {
								antlr::RefAST incr1 = incr->getFirstChild();
								incr->setFirstChild(lastBody);
								while (antlr::nullAST != lastBody->getNextSibling())
									lastBody = lastBody->getNextSibling();
								lastBody->setNextSibling(incr1);
							}
							incr->setNextSibling(antlr::nullAST);
							
							antlr::RefAST lastInit = ini->getFirstChild();
							if (antlr::nullAST != lastInit) {
								while (antlr::nullAST != lastInit->getNextSibling())
									lastInit = lastInit->getNextSibling();
								lastInit->setNextSibling(lykkjusegd_AST);
								lykkjusegd_AST = lastInit;
							}
						
#line 2561 "FjolnirTransformer.cpp"
				currentAST.root = lykkjusegd_AST;
				if ( lykkjusegd_AST!=antlr::nullAST &&
					lykkjusegd_AST->getFirstChild() != antlr::nullAST )
					  currentAST.child = lykkjusegd_AST->getFirstChild();
				else
					currentAST.child = lykkjusegd_AST;
				currentAST.advanceChildToEnd();
			}
			lykkjusegd_AST = currentAST.root;
			break;
		}
		default:
		{
			throw antlr::NoViableAltException(_t);
		}
		}
	}
	catch (antlr::RecognitionException& ex) {
		if( inputState->guessing == 0 ) {
			reportError(ex);
			if ( _t != antlr::nullAST )
				_t = _t->getNextSibling();
		} else {
			throw;
		}
	}
	returnAST = lykkjusegd_AST;
	_retTree = _t;
}

void FjolnirTransformer::valfasti_range(antlr::RefAST _t) {
	antlr::RefAST valfasti_range_AST_in = _t;
	returnAST = antlr::nullAST;
	antlr::ASTPair currentAST;
	antlr::RefAST valfasti_range_AST = antlr::nullAST;
	
	try {      // for error handling
		if (_t == antlr::nullAST )
			_t = ASTNULL;
		switch ( _t->getType()) {
		case STAFFASTI:
		{
			antlr::RefAST tmp75_AST = antlr::nullAST;
			antlr::RefAST tmp75_AST_in = antlr::nullAST;
			if ( inputState->guessing == 0 ) {
				tmp75_AST = astFactory->create(_t);
				tmp75_AST_in = _t;
				astFactory->addASTChild(currentAST, tmp75_AST);
			}
			match(_t,STAFFASTI);
			_t = _t->getNextSibling();
			valfasti_range_AST = currentAST.root;
			break;
		}
		case HEILTALA:
		{
			antlr::RefAST tmp76_AST = antlr::nullAST;
			antlr::RefAST tmp76_AST_in = antlr::nullAST;
			if ( inputState->guessing == 0 ) {
				tmp76_AST = astFactory->create(_t);
				tmp76_AST_in = _t;
				astFactory->addASTChild(currentAST, tmp76_AST);
			}
			match(_t,HEILTALA);
			_t = _t->getNextSibling();
			valfasti_range_AST = currentAST.root;
			break;
		}
		case PUNKTURPUNKTUR:
		{
			antlr::RefAST __t104 = _t;
			antlr::RefAST tmp77_AST = antlr::nullAST;
			antlr::RefAST tmp77_AST_in = antlr::nullAST;
			if ( inputState->guessing == 0 ) {
				tmp77_AST = astFactory->create(_t);
				tmp77_AST_in = _t;
				astFactory->addASTChild(currentAST, tmp77_AST);
			}
			antlr::ASTPair __currentAST104 = currentAST;
			currentAST.root = currentAST.child;
			currentAST.child = antlr::nullAST;
			match(_t,PUNKTURPUNKTUR);
			_t = _t->getFirstChild();
			valfasti_range(_t);
			_t = _retTree;
			if (inputState->guessing==0) {
				astFactory->addASTChild( currentAST, returnAST );
			}
			valfasti_range(_t);
			_t = _retTree;
			if (inputState->guessing==0) {
				astFactory->addASTChild( currentAST, returnAST );
			}
			currentAST = __currentAST104;
			_t = __t104;
			_t = _t->getNextSibling();
			valfasti_range_AST = currentAST.root;
			break;
		}
		default:
		{
			throw antlr::NoViableAltException(_t);
		}
		}
	}
	catch (antlr::RecognitionException& ex) {
		if( inputState->guessing == 0 ) {
			reportError(ex);
			if ( _t != antlr::nullAST )
				_t = _t->getNextSibling();
		} else {
			throw;
		}
	}
	returnAST = valfasti_range_AST;
	_retTree = _t;
}

void FjolnirTransformer::lykkjuskilyrdi(antlr::RefAST _t) {
	antlr::RefAST lykkjuskilyrdi_AST_in = _t;
	returnAST = antlr::nullAST;
	antlr::ASTPair currentAST;
	antlr::RefAST lykkjuskilyrdi_AST = antlr::nullAST;
	
	try {      // for error handling
		bool synPredMatched97 = false;
		if (((_t->getType() == LYKKJUSKILYRDI) && (_t->getType() == 3) && (_t->getType() == 3))) {
			antlr::RefAST __t97 = _t;
			synPredMatched97 = true;
			inputState->guessing++;
			try {
				{
				antlr::RefAST __t96 = _t;
				antlr::ASTPair __currentAST96 = currentAST;
				currentAST.root = currentAST.child;
				currentAST.child = antlr::nullAST;
				match(_t,LYKKJUSKILYRDI);
				_t = _t->getFirstChild();
				match(_t,L_MEDAN);
				_t = _t->getNextSibling();
				currentAST = __currentAST96;
				_t = __t96;
				_t = _t->getNextSibling();
				}
			}
			catch (antlr::RecognitionException& pe) {
				synPredMatched97 = false;
			}
			_t = __t97;
			inputState->guessing--;
		}
		if ( synPredMatched97 ) {
			antlr::RefAST __t98 = _t;
			antlr::RefAST tmp78_AST = antlr::nullAST;
			antlr::RefAST tmp78_AST_in = antlr::nullAST;
			if ( inputState->guessing == 0 ) {
				tmp78_AST = astFactory->create(_t);
				tmp78_AST_in = _t;
				astFactory->addASTChild(currentAST, tmp78_AST);
			}
			antlr::ASTPair __currentAST98 = currentAST;
			currentAST.root = currentAST.child;
			currentAST.child = antlr::nullAST;
			match(_t,LYKKJUSKILYRDI);
			_t = _t->getFirstChild();
			antlr::RefAST tmp79_AST = antlr::nullAST;
			antlr::RefAST tmp79_AST_in = antlr::nullAST;
			if ( inputState->guessing == 0 ) {
				tmp79_AST = astFactory->create(_t);
				tmp79_AST_in = _t;
				astFactory->addASTChild(currentAST, tmp79_AST);
			}
			match(_t,L_MEDAN);
			_t = _t->getNextSibling();
			segd(_t);
			_t = _retTree;
			if (inputState->guessing==0) {
				astFactory->addASTChild( currentAST, returnAST );
			}
			currentAST = __currentAST98;
			_t = __t98;
			_t = _t->getNextSibling();
			lykkjuskilyrdi_AST = currentAST.root;
		}
		else {
			bool synPredMatched101 = false;
			if (((_t->getType() == LYKKJUSKILYRDI) && (_t->getType() == 3) && (_t->getType() == 3))) {
				antlr::RefAST __t101 = _t;
				synPredMatched101 = true;
				inputState->guessing++;
				try {
					{
					antlr::RefAST __t100 = _t;
					antlr::ASTPair __currentAST100 = currentAST;
					currentAST.root = currentAST.child;
					currentAST.child = antlr::nullAST;
					match(_t,LYKKJUSKILYRDI);
					_t = _t->getFirstChild();
					match(_t,L_FYRIR);
					_t = _t->getNextSibling();
					currentAST = __currentAST100;
					_t = __t100;
					_t = _t->getNextSibling();
					}
				}
				catch (antlr::RecognitionException& pe) {
					synPredMatched101 = false;
				}
				_t = __t101;
				inputState->guessing--;
			}
			if ( synPredMatched101 ) {
				antlr::RefAST __t102 = _t;
				antlr::RefAST tmp80_AST = antlr::nullAST;
				antlr::RefAST tmp80_AST_in = antlr::nullAST;
				if ( inputState->guessing == 0 ) {
					tmp80_AST = astFactory->create(_t);
					tmp80_AST_in = _t;
					astFactory->addASTChild(currentAST, tmp80_AST);
				}
				antlr::ASTPair __currentAST102 = currentAST;
				currentAST.root = currentAST.child;
				currentAST.child = antlr::nullAST;
				match(_t,LYKKJUSKILYRDI);
				_t = _t->getFirstChild();
				antlr::RefAST tmp81_AST = antlr::nullAST;
				antlr::RefAST tmp81_AST_in = antlr::nullAST;
				if ( inputState->guessing == 0 ) {
					tmp81_AST = astFactory->create(_t);
					tmp81_AST_in = _t;
					astFactory->addASTChild(currentAST, tmp81_AST);
				}
				match(_t,L_FYRIR);
				_t = _t->getNextSibling();
				segdaruna(_t);
				_t = _retTree;
				if (inputState->guessing==0) {
					astFactory->addASTChild( currentAST, returnAST );
				}
				segd(_t);
				_t = _retTree;
				if (inputState->guessing==0) {
					astFactory->addASTChild( currentAST, returnAST );
				}
				segdaruna(_t);
				_t = _retTree;
				if (inputState->guessing==0) {
					astFactory->addASTChild( currentAST, returnAST );
				}
				currentAST = __currentAST102;
				_t = __t102;
				_t = _t->getNextSibling();
				lykkjuskilyrdi_AST = currentAST.root;
			}
			else if ((_t->getType() == LYKKJUSKILYRDI) && (_t->getType() == 3) && (_t->getType() == 3)) {
				antlr::RefAST tmp82_AST = antlr::nullAST;
				antlr::RefAST tmp82_AST_in = antlr::nullAST;
				if ( inputState->guessing == 0 ) {
					tmp82_AST = astFactory->create(_t);
					tmp82_AST_in = _t;
					astFactory->addASTChild(currentAST, tmp82_AST);
				}
				match(_t,LYKKJUSKILYRDI);
				_t = _t->getNextSibling();
				lykkjuskilyrdi_AST = currentAST.root;
			}
		else {
			throw antlr::NoViableAltException(_t);
		}
		}
	}
	catch (antlr::RecognitionException& ex) {
		if( inputState->guessing == 0 ) {
			reportError(ex);
			if ( _t != antlr::nullAST )
				_t = _t->getNextSibling();
		} else {
			throw;
		}
	}
	returnAST = lykkjuskilyrdi_AST;
	_retTree = _t;
}

void FjolnirTransformer::initializeASTFactory( antlr::ASTFactory& factory )
{
	factory.setMaxNodeType(88);
}
const char* FjolnirTransformer::tokenNames[] = {
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
	"L_BOD",
	"L_HLUTUR",
	"L_ARFUR",
	0
};

const unsigned long FjolnirTransformer::_tokenSet_0_data_[] = { 0UL, 588888692UL, 3675382UL, 0UL, 0UL, 0UL, 0UL, 0UL };
// "eða" "ef" "ekki" "fyrir" "lykkja" "meðan" "og" "skila" "stef" "stofn" 
// "út" "val" GILDISVEITING SVIGI_OPNA HORNKLOFI_OPNA STAFFASTI STRENGFASTI 
// FJOLDATALA HEILTALA FLEYTITALA TOMAGILDI ADGERD NAFN EINUNDARADGERD 
// LISTI FYLKISGILDISVEITING 
const antlr::BitSet FjolnirTransformer::_tokenSet_0(_tokenSet_0_data_,8);
const unsigned long FjolnirTransformer::_tokenSet_1_data_[] = { 8UL, 588888948UL, 3806454UL, 0UL, 0UL, 0UL, 0UL, 0UL };
// NULL_TREE_LOOKAHEAD "eða" "ef" "ekki" "fyrir" "kostur" "lykkja" "meðan" 
// "og" "skila" "stef" "stofn" "út" "val" GILDISVEITING SVIGI_OPNA HORNKLOFI_OPNA 
// STAFFASTI STRENGFASTI FJOLDATALA HEILTALA FLEYTITALA TOMAGILDI ADGERD 
// NAFN SEGDARUNA EINUNDARADGERD LISTI FYLKISGILDISVEITING 
const antlr::BitSet FjolnirTransformer::_tokenSet_1(_tokenSet_1_data_,8);
const unsigned long FjolnirTransformer::_tokenSet_2_data_[] = { 8UL, 588888949UL, 3806454UL, 0UL, 0UL, 0UL, 0UL, 0UL };
// NULL_TREE_LOOKAHEAD "annarsef" "eða" "ef" "ekki" "fyrir" "kostur" "lykkja" 
// "meðan" "og" "skila" "stef" "stofn" "út" "val" GILDISVEITING SVIGI_OPNA 
// HORNKLOFI_OPNA STAFFASTI STRENGFASTI FJOLDATALA HEILTALA FLEYTITALA 
// TOMAGILDI ADGERD NAFN SEGDARUNA EINUNDARADGERD LISTI FYLKISGILDISVEITING 
const antlr::BitSet FjolnirTransformer::_tokenSet_2(_tokenSet_2_data_,8);


ANTLR_END_NAMESPACE
