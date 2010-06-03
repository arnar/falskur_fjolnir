/* $ANTLR 2.7.3-20030430: "FjolnirCodegen.g" -> "FjolnirCodegen.cpp"$ */
#line 1 "FjolnirCodegen.g"

#pragma warning( disable : 4251 4267 4101 4267 )

#line 7 "FjolnirCodegen.cpp"
#include "FjolnirCodegen.hpp"
#include <antlr/Token.hpp>
#include <antlr/AST.hpp>
#include <antlr/NoViableAltException.hpp>
#include <antlr/MismatchedTokenException.hpp>
#include <antlr/SemanticException.hpp>
#include <antlr/BitSet.hpp>
#line 11 "FjolnirCodegen.g"


#include "myast.h"
//#define loc(s,t) if (NULL != static_cast<ff::ffAST*>(t.get().ptr)) \
//					(s)->setLine((static_cast<ff::ffAST*>(t.get().ptr))->getLine());
#define loc(s,t) (s)->setLine((static_cast<ffAST*>(t.get()))->getLine());

using namespace std;

#line 25 "FjolnirCodegen.cpp"
ANTLR_BEGIN_NAMESPACE(ff)
#line 1 "FjolnirCodegen.g"
#line 27 "FjolnirCodegen.cpp"
FjolnirCodegen::FjolnirCodegen()
	: antlr::TreeParser() {
}

void FjolnirCodegen::forrit(antlr::RefAST _t) {
	antlr::RefAST forrit_AST_in = _t;
	
	try {      // for error handling
		{ // ( ... )*
		for (;;) {
			if (_t == antlr::nullAST )
				_t = ASTNULL;
			if ((_t->getType() == EIN_JAFNTOG || _t->getType() == EIN_MINNA)) {
				veiting(_t);
				_t = _retTree;
			}
			else {
				goto _loop3;
			}
			
		}
		_loop3:;
		} // ( ... )*
	}
	catch (antlr::RecognitionException& ex) {
		reportError(ex);
		if ( _t != antlr::nullAST )
			_t = _t->getNextSibling();
	}
	_retTree = _t;
}

void FjolnirCodegen::veiting(antlr::RefAST _t) {
	antlr::RefAST veiting_AST_in = _t;
	antlr::RefAST nafn = antlr::nullAST;
	antlr::RefAST start = antlr::nullAST;
	antlr::RefAST s = antlr::nullAST;
	antlr::RefAST n = antlr::nullAST;
	
	try {      // for error handling
		if (_t == antlr::nullAST )
			_t = ASTNULL;
		switch ( _t->getType()) {
		case EIN_MINNA:
		{
			antlr::RefAST __t5 = _t;
			antlr::RefAST tmp1_AST_in = _t;
			match(_t,EIN_MINNA);
			_t = _t->getFirstChild();
			nafn = _t;
			match(_t,EIN_STRENGUR);
			_t = _t->getNextSibling();
			start = _t;
			match(_t,EIN_NAFN);
			_t = _t->getNextSibling();
#line 52 "FjolnirCodegen.g"
			
						*out << '"' << nafn->getText() << "\" < " << start->getText() << endl;
					
#line 87 "FjolnirCodegen.cpp"
			eining(_t);
			_t = _retTree;
#line 55 "FjolnirCodegen.g"
			*out << ";";
#line 92 "FjolnirCodegen.cpp"
			_t = __t5;
			_t = _t->getNextSibling();
			break;
		}
		case EIN_JAFNTOG:
		{
			antlr::RefAST __t6 = _t;
			antlr::RefAST tmp2_AST_in = _t;
			match(_t,EIN_JAFNTOG);
			_t = _t->getFirstChild();
			{
			if (_t == antlr::nullAST )
				_t = ASTNULL;
			switch ( _t->getType()) {
			case EIN_STRENGUR:
			{
				s = _t;
				match(_t,EIN_STRENGUR);
				_t = _t->getNextSibling();
#line 56 "FjolnirCodegen.g"
				*out << '"' << s->getText() << '"';
#line 114 "FjolnirCodegen.cpp"
				break;
			}
			case EIN_NAFN:
			{
				n = _t;
				match(_t,EIN_NAFN);
				_t = _t->getNextSibling();
#line 56 "FjolnirCodegen.g"
				*out << n->getText();
#line 124 "FjolnirCodegen.cpp"
				break;
			}
			default:
			{
				throw antlr::NoViableAltException(_t);
			}
			}
			}
#line 57 "FjolnirCodegen.g"
			
						*out << " =" << endl;
					
#line 137 "FjolnirCodegen.cpp"
			eining(_t);
			_t = _retTree;
#line 60 "FjolnirCodegen.g"
			*out << ";";
#line 142 "FjolnirCodegen.cpp"
			_t = __t6;
			_t = _t->getNextSibling();
			break;
		}
		default:
		{
			throw antlr::NoViableAltException(_t);
		}
		}
	}
	catch (antlr::RecognitionException& ex) {
		reportError(ex);
		if ( _t != antlr::nullAST )
			_t = _t->getNextSibling();
	}
	_retTree = _t;
}

void FjolnirCodegen::eining(antlr::RefAST _t) {
	antlr::RefAST eining_AST_in = _t;
	
	try {      // for error handling
		if (_t == antlr::nullAST )
			_t = ASTNULL;
		switch ( _t->getType()) {
		case EIN_ITRUN:
		{
			antlr::RefAST __t9 = _t;
			antlr::RefAST tmp3_AST_in = _t;
			match(_t,EIN_ITRUN);
			_t = _t->getFirstChild();
#line 64 "FjolnirCodegen.g"
			*out << "(!";
#line 176 "FjolnirCodegen.cpp"
			eining(_t);
			_t = _retTree;
#line 64 "FjolnirCodegen.g"
			*out << ")";
#line 181 "FjolnirCodegen.cpp"
			_t = __t9;
			_t = _t->getNextSibling();
			break;
		}
		case EIN_ITRUDHLIDS:
		{
			antlr::RefAST __t10 = _t;
			antlr::RefAST tmp4_AST_in = _t;
			match(_t,EIN_ITRUDHLIDS);
			_t = _t->getFirstChild();
#line 65 "FjolnirCodegen.g"
			*out << "(";
#line 194 "FjolnirCodegen.cpp"
			eining(_t);
			_t = _retTree;
#line 65 "FjolnirCodegen.g"
			*out << " & ";
#line 199 "FjolnirCodegen.cpp"
			eining(_t);
			_t = _retTree;
#line 65 "FjolnirCodegen.g"
			*out << ")";
#line 204 "FjolnirCodegen.cpp"
			_t = __t10;
			_t = _t->getNextSibling();
			break;
		}
		case EIN_HLIDSETNING:
		{
			antlr::RefAST __t11 = _t;
			antlr::RefAST tmp5_AST_in = _t;
			match(_t,EIN_HLIDSETNING);
			_t = _t->getFirstChild();
#line 66 "FjolnirCodegen.g"
			*out << "(";
#line 217 "FjolnirCodegen.cpp"
			eining(_t);
			_t = _retTree;
#line 66 "FjolnirCodegen.g"
			*out << " + ";
#line 222 "FjolnirCodegen.cpp"
			eining(_t);
			_t = _retTree;
#line 66 "FjolnirCodegen.g"
			*out << ")";
#line 227 "FjolnirCodegen.cpp"
			_t = __t11;
			_t = _t->getNextSibling();
			break;
		}
		case EIN_SAMSETNING:
		{
			antlr::RefAST __t12 = _t;
			antlr::RefAST tmp6_AST_in = _t;
			match(_t,EIN_SAMSETNING);
			_t = _t->getFirstChild();
#line 67 "FjolnirCodegen.g"
			*out << "(";
#line 240 "FjolnirCodegen.cpp"
			eining(_t);
			_t = _retTree;
#line 67 "FjolnirCodegen.g"
			*out << " : ";
#line 245 "FjolnirCodegen.cpp"
			eining(_t);
			_t = _retTree;
#line 67 "FjolnirCodegen.g"
			*out << ")";
#line 250 "FjolnirCodegen.cpp"
			_t = __t12;
			_t = _t->getNextSibling();
			break;
		}
		case EIN_INNFLUTT:
		{
			antlr::RefAST __t13 = _t;
			antlr::RefAST tmp7_AST_in = _t;
			match(_t,EIN_INNFLUTT);
			_t = _t->getFirstChild();
#line 68 "FjolnirCodegen.g"
			*out << "(";
#line 263 "FjolnirCodegen.cpp"
			eining(_t);
			_t = _retTree;
#line 68 "FjolnirCodegen.g"
			*out << " * ";
#line 268 "FjolnirCodegen.cpp"
			eining(_t);
			_t = _retTree;
#line 68 "FjolnirCodegen.g"
			*out << ")";
#line 273 "FjolnirCodegen.cpp"
			_t = __t13;
			_t = _t->getNextSibling();
			break;
		}
		case EIN_STRENGUR:
		{
			antlr::RefAST tmp8_AST_in = _t;
			match(_t,EIN_STRENGUR);
			_t = _t->getNextSibling();
#line 69 "FjolnirCodegen.g"
			*out << '"' << tmp8_AST_in->getText() << '"';
#line 285 "FjolnirCodegen.cpp"
			break;
		}
		case EIN_NAFN:
		{
			antlr::RefAST tmp9_AST_in = _t;
			match(_t,EIN_NAFN);
			_t = _t->getNextSibling();
#line 70 "FjolnirCodegen.g"
			*out << tmp9_AST_in->getText();
#line 295 "FjolnirCodegen.cpp"
			break;
		}
		case EIN_OPNASLAUFU:
		{
			antlr::RefAST __t14 = _t;
			antlr::RefAST tmp10_AST_in = _t;
			match(_t,EIN_OPNASLAUFU);
			_t = _t->getFirstChild();
#line 72 "FjolnirCodegen.g"
			*out << endl << "{" << endl;
#line 306 "FjolnirCodegen.cpp"
			{ // ( ... )*
			for (;;) {
				if (_t == antlr::nullAST )
					_t = ASTNULL;
				if ((_t->getType() == INNSETNING)) {
					vorpun(_t);
					_t = _retTree;
				}
				else {
					goto _loop16;
				}
				
			}
			_loop16:;
			} // ( ... )*
#line 74 "FjolnirCodegen.g"
			*out << endl << "}" << endl;
#line 324 "FjolnirCodegen.cpp"
			_t = __t14;
			_t = _t->getNextSibling();
			break;
		}
		default:
		{
			throw antlr::NoViableAltException(_t);
		}
		}
	}
	catch (antlr::RecognitionException& ex) {
		reportError(ex);
		if ( _t != antlr::nullAST )
			_t = _t->getNextSibling();
	}
	_retTree = _t;
}

void FjolnirCodegen::vorpun(antlr::RefAST _t) {
	antlr::RefAST vorpun_AST_in = _t;
#line 78 "FjolnirCodegen.g"
	string nafn;
#line 347 "FjolnirCodegen.cpp"
	
	try {      // for error handling
		antlr::RefAST __t18 = _t;
		antlr::RefAST tmp11_AST_in = _t;
		match(_t,INNSETNING);
		_t = _t->getFirstChild();
		{
		if (_t == antlr::nullAST )
			_t = ASTNULL;
		switch ( _t->getType()) {
		case NAFN:
		{
			antlr::RefAST tmp12_AST_in = _t;
			match(_t,NAFN);
			_t = _t->getNextSibling();
#line 81 "FjolnirCodegen.g"
			*out << (nafn = tmp12_AST_in->getText());
#line 365 "FjolnirCodegen.cpp"
			break;
		}
		case ADGERD:
		{
			antlr::RefAST tmp13_AST_in = _t;
			match(_t,ADGERD);
			_t = _t->getNextSibling();
#line 82 "FjolnirCodegen.g"
			*out << (nafn = tmp13_AST_in->getText());
#line 375 "FjolnirCodegen.cpp"
			break;
		}
		default:
		{
			throw antlr::NoViableAltException(_t);
		}
		}
		}
#line 83 "FjolnirCodegen.g"
		*out << " -> ";
#line 386 "FjolnirCodegen.cpp"
		minnissvaedi(_t,nafn);
		_t = _retTree;
		_t = __t18;
		_t = _t->getNextSibling();
	}
	catch (antlr::RecognitionException& ex) {
		reportError(ex);
		if ( _t != antlr::nullAST )
			_t = _t->getNextSibling();
	}
	_retTree = _t;
}

void FjolnirCodegen::minnissvaedi(antlr::RefAST _t,
	string& nafn
) {
	antlr::RefAST minnissvaedi_AST_in = _t;
#line 87 "FjolnirCodegen.g"
	Stef* s=NULL;
#line 406 "FjolnirCodegen.cpp"
	
	try {      // for error handling
		if (_t == antlr::nullAST )
			_t = ASTNULL;
		switch ( _t->getType()) {
		case NAFN:
		{
			antlr::RefAST tmp14_AST_in = _t;
			match(_t,NAFN);
			_t = _t->getNextSibling();
#line 89 "FjolnirCodegen.g"
			*out << tmp14_AST_in->getText() << endl;
#line 419 "FjolnirCodegen.cpp"
			break;
		}
		case ADGERD:
		{
			antlr::RefAST tmp15_AST_in = _t;
			match(_t,ADGERD);
			_t = _t->getNextSibling();
#line 90 "FjolnirCodegen.g"
			*out << tmp15_AST_in->getText() << endl;
#line 429 "FjolnirCodegen.cpp"
			break;
		}
		case L_BREYTA:
		{
			antlr::RefAST tmp16_AST_in = _t;
			match(_t,L_BREYTA);
			_t = _t->getNextSibling();
#line 91 "FjolnirCodegen.g"
			*out << "breyta" << endl;
#line 439 "FjolnirCodegen.cpp"
			break;
		}
		case L_STEF:
		{
			s=stefskilgreining(_t,nafn);
			_t = _retTree;
#line 92 "FjolnirCodegen.g"
			
					*out << '@' << s->getFjoldiVidfanga(AFRIT)
					     << ',' << s->getFjoldiVidfanga(GILDI) << "@(" << endl;
					s->generate(*out);
					*out << ')' << endl;
				
#line 453 "FjolnirCodegen.cpp"
			break;
		}
		default:
		{
			throw antlr::NoViableAltException(_t);
		}
		}
	}
	catch (antlr::RecognitionException& ex) {
		reportError(ex);
		if ( _t != antlr::nullAST )
			_t = _t->getNextSibling();
	}
	_retTree = _t;
}

Stef*  FjolnirCodegen::stefskilgreining(antlr::RefAST _t,
	string& nafn
) {
#line 100 "FjolnirCodegen.g"
	Stef* ret;
#line 475 "FjolnirCodegen.cpp"
	antlr::RefAST stefskilgreining_AST_in = _t;
	antlr::RefAST a = antlr::nullAST;
	antlr::RefAST b = antlr::nullAST;
	antlr::RefAST c = antlr::nullAST;
	antlr::RefAST d = antlr::nullAST;
	antlr::RefAST e = antlr::nullAST;
	antlr::RefAST f = antlr::nullAST;
#line 100 "FjolnirCodegen.g"
	Segd* s; Stef* stef;
#line 485 "FjolnirCodegen.cpp"
	
	try {      // for error handling
		antlr::RefAST __t22 = _t;
		antlr::RefAST tmp17_AST_in = _t;
		match(_t,L_STEF);
		_t = _t->getFirstChild();
#line 102 "FjolnirCodegen.g"
		ret = new Stef(nafn);
#line 494 "FjolnirCodegen.cpp"
		antlr::RefAST __t23 = _t;
		antlr::RefAST tmp18_AST_in = _t;
		match(_t,NAFNARUNA);
		_t = _t->getFirstChild();
		{ // ( ... )*
		for (;;) {
			if (_t == antlr::nullAST )
				_t = ASTNULL;
			if ((_t->getType() == NAFN)) {
				a = _t;
				match(_t,NAFN);
				_t = _t->getNextSibling();
#line 103 "FjolnirCodegen.g"
				
							if (ret->isLocallyDefined(a->getText())) {
								cerr << "Nafnið \"" << a->getText() << "\" er þegar skilgreint." << endl;
								exit(1);
							}
							ret->addVidfang(AFRIT,a->getText());
						
#line 515 "FjolnirCodegen.cpp"
			}
			else {
				goto _loop25;
			}
			
		}
		_loop25:;
		} // ( ... )*
		_t = __t23;
		_t = _t->getNextSibling();
		antlr::RefAST __t26 = _t;
		antlr::RefAST tmp19_AST_in = _t;
		match(_t,NAFNARUNA);
		_t = _t->getFirstChild();
		{ // ( ... )*
		for (;;) {
			if (_t == antlr::nullAST )
				_t = ASTNULL;
			if ((_t->getType() == NAFN)) {
				b = _t;
				match(_t,NAFN);
				_t = _t->getNextSibling();
#line 110 "FjolnirCodegen.g"
				
							if (ret->isLocallyDefined(b->getText())) {
								cerr << "Nafnið \"" << b->getText() << "\" er þegar skilgreint." << endl;
								exit(1);
							}
							ret->addVidfang(GILDI,b->getText());
						
#line 546 "FjolnirCodegen.cpp"
			}
			else {
				goto _loop28;
			}
			
		}
		_loop28:;
		} // ( ... )*
		_t = __t26;
		_t = _t->getNextSibling();
		antlr::RefAST __t29 = _t;
		antlr::RefAST tmp20_AST_in = _t;
		match(_t,SKILGREININGAR);
		_t = _t->getFirstChild();
		antlr::RefAST __t30 = _t;
		antlr::RefAST tmp21_AST_in = _t;
		match(_t,L_INNFLUTT);
		_t = _t->getFirstChild();
		{ // ( ... )*
		for (;;) {
			if (_t == antlr::nullAST )
				_t = ASTNULL;
			if ((_t->getType() == NAFN)) {
				c = _t;
				match(_t,NAFN);
				_t = _t->getNextSibling();
#line 118 "FjolnirCodegen.g"
				
								ret->addInnflutt(c->getText());
							
#line 577 "FjolnirCodegen.cpp"
			}
			else {
				goto _loop32;
			}
			
		}
		_loop32:;
		} // ( ... )*
		_t = __t30;
		_t = _t->getNextSibling();
		antlr::RefAST __t33 = _t;
		antlr::RefAST tmp22_AST_in = _t;
		match(_t,L_STADVAER);
		_t = _t->getFirstChild();
		{ // ( ... )*
		for (;;) {
			if (_t == antlr::nullAST )
				_t = ASTNULL;
			switch ( _t->getType()) {
			case NAFN:
			{
				d = _t;
				match(_t,NAFN);
				_t = _t->getNextSibling();
#line 122 "FjolnirCodegen.g"
				
									if (ret->isLocallyDefined(d->getText())) {
										cerr << "Nafnið \"" << d->getText() << "\" er þegar skilgreint." << endl;
										exit(1);
									}
									ret->addStadvaer(d->getText());
								
#line 610 "FjolnirCodegen.cpp"
				break;
			}
			case GILDISVEITING:
			{
				antlr::RefAST __t35 = _t;
				antlr::RefAST tmp23_AST_in = _t;
				match(_t,GILDISVEITING);
				_t = _t->getFirstChild();
				e = _t;
				match(_t,NAFN);
				_t = _t->getNextSibling();
				s=segd(_t);
				_t = _retTree;
				_t = __t35;
				_t = _t->getNextSibling();
#line 129 "FjolnirCodegen.g"
				
									if (ret->isLocallyDefined(e->getText())) {
										cerr << "Nafnið \"" << e->getText() << "\" er þegar skilgreint." << endl;
										exit(1);
									}
									ret->addStadvaer(e->getText(), s); 
								
#line 634 "FjolnirCodegen.cpp"
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
		_t = __t33;
		_t = _t->getNextSibling();
		_t = __t29;
		_t = _t->getNextSibling();
		antlr::RefAST __t37 = _t;
		antlr::RefAST tmp24_AST_in = _t;
		match(_t,SEGDARUNA);
		_t = _t->getFirstChild();
		{ // ( ... )*
		for (;;) {
			if (_t == antlr::nullAST )
				_t = ASTNULL;
			if ((_tokenSet_0.member(_t->getType()))) {
				s=segd(_t);
				_t = _retTree;
#line 139 "FjolnirCodegen.g"
				ret->addSegd(s);
#line 662 "FjolnirCodegen.cpp"
			}
			else {
				goto _loop39;
			}
			
		}
		_loop39:;
		} // ( ... )*
		_t = __t37;
		_t = _t->getNextSibling();
		{
		if (_t == antlr::nullAST )
			_t = ASTNULL;
		switch ( _t->getType()) {
		case SLAUFA_OPNA:
		{
			antlr::RefAST __t41 = _t;
			antlr::RefAST tmp25_AST_in = _t;
			match(_t,SLAUFA_OPNA);
			_t = _t->getFirstChild();
			{ // ( ... )*
			for (;;) {
				if (_t == antlr::nullAST )
					_t = ASTNULL;
				if ((_t->getType() == INNSETNING)) {
					antlr::RefAST __t43 = _t;
					antlr::RefAST tmp26_AST_in = _t;
					match(_t,INNSETNING);
					_t = _t->getFirstChild();
					f = _t;
					match(_t,NAFN);
					_t = _t->getNextSibling();
					stef=stefskilgreining(_t,f->getText());
					_t = _retTree;
#line 142 "FjolnirCodegen.g"
					
										if (ret->isLocallyDefinedUndirstef(stef->getNafn(),
												stef->getFjoldiVidfanga(AFRIT), stef->getFjoldiVidfanga(GILDI))) {
											cerr << "Undirstefið \"" << stef->getNafn() << "\" er þegar skilgreint." << endl;
											exit(1);
										}
										ret->addUndirstef(stef);
									
#line 706 "FjolnirCodegen.cpp"
					_t = __t43;
					_t = _t->getNextSibling();
				}
				else {
					goto _loop44;
				}
				
			}
			_loop44:;
			} // ( ... )*
			_t = __t41;
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
		_t = __t22;
		_t = _t->getNextSibling();
	}
	catch (antlr::RecognitionException& ex) {
		reportError(ex);
		if ( _t != antlr::nullAST )
			_t = _t->getNextSibling();
	}
	_retTree = _t;
	return ret;
}

Segd*  FjolnirCodegen::segd(antlr::RefAST _t) {
#line 181 "FjolnirCodegen.g"
	Segd* rets=NULL;
#line 746 "FjolnirCodegen.cpp"
	antlr::RefAST segd_AST_in = _t;
#line 181 "FjolnirCodegen.g"
	Segd* a=NULL; Segd* b=NULL;
#line 750 "FjolnirCodegen.cpp"
	
	try {      // for error handling
		if (_t == antlr::nullAST )
			_t = ASTNULL;
		switch ( _t->getType()) {
		case L_OG:
		{
			antlr::RefAST __t46 = _t;
			antlr::RefAST tmp27_AST_in = _t;
			match(_t,L_OG);
			_t = _t->getFirstChild();
			a=segd(_t);
			_t = _retTree;
			b=segd(_t);
			_t = _retTree;
			_t = __t46;
			_t = _t->getNextSibling();
#line 183 "FjolnirCodegen.g"
			rets = new OgSegd(a,b); loc(rets,tmp27_AST_in);
#line 770 "FjolnirCodegen.cpp"
			break;
		}
		case L_EDA:
		{
			antlr::RefAST __t47 = _t;
			antlr::RefAST tmp28_AST_in = _t;
			match(_t,L_EDA);
			_t = _t->getFirstChild();
			a=segd(_t);
			_t = _retTree;
			b=segd(_t);
			_t = _retTree;
			_t = __t47;
			_t = _t->getNextSibling();
#line 184 "FjolnirCodegen.g"
			rets = new EdaSegd(a,b); loc(rets,tmp28_AST_in);
#line 787 "FjolnirCodegen.cpp"
			break;
		}
		case L_EKKI:
		{
			antlr::RefAST __t48 = _t;
			antlr::RefAST tmp29_AST_in = _t;
			match(_t,L_EKKI);
			_t = _t->getFirstChild();
			a=segd(_t);
			_t = _retTree;
			_t = __t48;
			_t = _t->getNextSibling();
#line 185 "FjolnirCodegen.g"
			rets = new EkkiSegd(a); loc(rets, tmp29_AST_in);
#line 802 "FjolnirCodegen.cpp"
			break;
		}
		case GILDISVEITING:
		{
			antlr::RefAST __t49 = _t;
			antlr::RefAST tmp30_AST_in = _t;
			match(_t,GILDISVEITING);
			_t = _t->getFirstChild();
			antlr::RefAST tmp31_AST_in = _t;
			match(_t,NAFN);
			_t = _t->getNextSibling();
			a=segd(_t);
			_t = _retTree;
			_t = __t49;
			_t = _t->getNextSibling();
#line 186 "FjolnirCodegen.g"
			rets = new GildisveitingarSegd(tmp31_AST_in->getText(), a); loc(rets,tmp30_AST_in);
#line 820 "FjolnirCodegen.cpp"
			break;
		}
		case SVIGI_OPNA:
		{
			antlr::RefAST __t50 = _t;
			antlr::RefAST tmp32_AST_in = _t;
			match(_t,SVIGI_OPNA);
			_t = _t->getFirstChild();
			antlr::RefAST tmp33_AST_in = _t;
			match(_t,NAFN);
			_t = _t->getNextSibling();
#line 187 "FjolnirCodegen.g"
			KallSegd* kall = new KallSegd(tmp33_AST_in->getText());
#line 834 "FjolnirCodegen.cpp"
			antlr::RefAST __t51 = _t;
			antlr::RefAST tmp34_AST_in = _t;
			match(_t,NAFNARUNA);
			_t = _t->getFirstChild();
			{ // ( ... )*
			for (;;) {
				if (_t == antlr::nullAST )
					_t = ASTNULL;
				if ((_t->getType() == NAFN)) {
					antlr::RefAST tmp35_AST_in = _t;
					match(_t,NAFN);
					_t = _t->getNextSibling();
#line 188 "FjolnirCodegen.g"
					kall->addAfritsVidfang(tmp35_AST_in->getText());
#line 849 "FjolnirCodegen.cpp"
				}
				else {
					goto _loop53;
				}
				
			}
			_loop53:;
			} // ( ... )*
			_t = __t51;
			_t = _t->getNextSibling();
			antlr::RefAST __t54 = _t;
			antlr::RefAST tmp36_AST_in = _t;
			match(_t,SEGDARUNA);
			_t = _t->getFirstChild();
			{ // ( ... )*
			for (;;) {
				if (_t == antlr::nullAST )
					_t = ASTNULL;
				if ((_tokenSet_0.member(_t->getType()))) {
					a=segd(_t);
					_t = _retTree;
#line 189 "FjolnirCodegen.g"
					kall->addGildisVidfang(a);
#line 873 "FjolnirCodegen.cpp"
				}
				else {
					goto _loop56;
				}
				
			}
			_loop56:;
			} // ( ... )*
			_t = __t54;
			_t = _t->getNextSibling();
			_t = __t50;
			_t = _t->getNextSibling();
#line 190 "FjolnirCodegen.g"
			rets = kall; loc(rets, tmp32_AST_in);
#line 888 "FjolnirCodegen.cpp"
			break;
		}
		case L_STOFN:
		{
			antlr::RefAST __t57 = _t;
			antlr::RefAST tmp37_AST_in = _t;
			match(_t,L_STOFN);
			_t = _t->getFirstChild();
#line 191 "FjolnirCodegen.g"
			StofnSegd* stofn = new StofnSegd();
#line 899 "FjolnirCodegen.cpp"
			antlr::RefAST __t58 = _t;
			antlr::RefAST tmp38_AST_in = _t;
			match(_t,SEGDARUNA);
			_t = _t->getFirstChild();
			{ // ( ... )*
			for (;;) {
				if (_t == antlr::nullAST )
					_t = ASTNULL;
				if ((_tokenSet_0.member(_t->getType()))) {
					a=segd(_t);
					_t = _retTree;
#line 192 "FjolnirCodegen.g"
					stofn->addSegd(a);
#line 913 "FjolnirCodegen.cpp"
				}
				else {
					goto _loop60;
				}
				
			}
			_loop60:;
			} // ( ... )*
			_t = __t58;
			_t = _t->getNextSibling();
			_t = __t57;
			_t = _t->getNextSibling();
#line 193 "FjolnirCodegen.g"
			rets = (Segd*) stofn; loc(rets,tmp37_AST_in);
#line 928 "FjolnirCodegen.cpp"
			break;
		}
		case L_EF:
		{
			antlr::RefAST __t61 = _t;
			antlr::RefAST tmp39_AST_in = _t;
			match(_t,L_EF);
			_t = _t->getFirstChild();
			a=segd(_t);
			_t = _retTree;
#line 194 "FjolnirCodegen.g"
			EfSegd* ef = new EfSegd(); ef->addSkilyrdi(a);
#line 941 "FjolnirCodegen.cpp"
			antlr::RefAST __t62 = _t;
			antlr::RefAST tmp40_AST_in = _t;
			match(_t,SEGDARUNA);
			_t = _t->getFirstChild();
			{ // ( ... )*
			for (;;) {
				if (_t == antlr::nullAST )
					_t = ASTNULL;
				if ((_tokenSet_0.member(_t->getType()))) {
					a=segd(_t);
					_t = _retTree;
#line 195 "FjolnirCodegen.g"
					ef->addSegd(a);
#line 955 "FjolnirCodegen.cpp"
				}
				else {
					goto _loop64;
				}
				
			}
			_loop64:;
			} // ( ... )*
			_t = __t62;
			_t = _t->getNextSibling();
			{ // ( ... )*
			for (;;) {
				if (_t == antlr::nullAST )
					_t = ASTNULL;
				if ((_t->getType() == L_ANNARSEF)) {
					antlr::RefAST __t66 = _t;
					antlr::RefAST tmp41_AST_in = _t;
					match(_t,L_ANNARSEF);
					_t = _t->getFirstChild();
					a=segd(_t);
					_t = _retTree;
#line 196 "FjolnirCodegen.g"
					ef->addSkilyrdi(a);
#line 979 "FjolnirCodegen.cpp"
					antlr::RefAST __t67 = _t;
					antlr::RefAST tmp42_AST_in = _t;
					match(_t,SEGDARUNA);
					_t = _t->getFirstChild();
					{ // ( ... )*
					for (;;) {
						if (_t == antlr::nullAST )
							_t = ASTNULL;
						if ((_tokenSet_0.member(_t->getType()))) {
							a=segd(_t);
							_t = _retTree;
#line 197 "FjolnirCodegen.g"
							ef->addSegd(a);
#line 993 "FjolnirCodegen.cpp"
						}
						else {
							goto _loop69;
						}
						
					}
					_loop69:;
					} // ( ... )*
					_t = __t67;
					_t = _t->getNextSibling();
					_t = __t66;
					_t = _t->getNextSibling();
				}
				else {
					goto _loop70;
				}
				
			}
			_loop70:;
			} // ( ... )*
			antlr::RefAST __t71 = _t;
			antlr::RefAST tmp43_AST_in = _t;
			match(_t,SEGDARUNA);
			_t = _t->getFirstChild();
			{ // ( ... )*
			for (;;) {
				if (_t == antlr::nullAST )
					_t = ASTNULL;
				if ((_tokenSet_0.member(_t->getType()))) {
					a=segd(_t);
					_t = _retTree;
#line 199 "FjolnirCodegen.g"
					ef->addAnnarsSegd(a);
#line 1027 "FjolnirCodegen.cpp"
				}
				else {
					goto _loop73;
				}
				
			}
			_loop73:;
			} // ( ... )*
			_t = __t71;
			_t = _t->getNextSibling();
			_t = __t61;
			_t = _t->getNextSibling();
#line 200 "FjolnirCodegen.g"
			rets = (Segd*) ef; loc(rets,tmp39_AST_in);
#line 1042 "FjolnirCodegen.cpp"
			break;
		}
		case L_LYKKJA:
		case L_MEDAN:
		{
			rets=lykkjusegd(_t);
			_t = _retTree;
			break;
		}
		case L_VAL:
		{
			antlr::RefAST __t74 = _t;
			antlr::RefAST tmp44_AST_in = _t;
			match(_t,L_VAL);
			_t = _t->getFirstChild();
#line 202 "FjolnirCodegen.g"
			cerr << "Valsegð er ekki útfærð." << endl; exit(1);
#line 1060 "FjolnirCodegen.cpp"
			_t = __t74;
			_t = _t->getNextSibling();
			break;
		}
		case L_SKILA:
		{
			antlr::RefAST __t75 = _t;
			antlr::RefAST tmp45_AST_in = _t;
			match(_t,L_SKILA);
			_t = _t->getFirstChild();
			a=segd(_t);
			_t = _retTree;
			_t = __t75;
			_t = _t->getNextSibling();
#line 204 "FjolnirCodegen.g"
			rets = new SkilaSegd(a); loc(rets,tmp45_AST_in)
#line 1077 "FjolnirCodegen.cpp"
			break;
		}
		case L_UT:
		{
			antlr::RefAST tmp46_AST_in = _t;
			match(_t,L_UT);
			_t = _t->getNextSibling();
#line 205 "FjolnirCodegen.g"
			rets = new UtSegd(); loc(rets,tmp46_AST_in);
#line 1087 "FjolnirCodegen.cpp"
			break;
		}
		case NAFN:
		{
			antlr::RefAST tmp47_AST_in = _t;
			match(_t,NAFN);
			_t = _t->getNextSibling();
#line 206 "FjolnirCodegen.g"
			rets = new NafnSegd(tmp47_AST_in->getText()); loc(rets,tmp47_AST_in);
#line 1097 "FjolnirCodegen.cpp"
			break;
		}
		case STRENGFASTI:
		{
			antlr::RefAST tmp48_AST_in = _t;
			match(_t,STRENGFASTI);
			_t = _t->getNextSibling();
#line 207 "FjolnirCodegen.g"
			rets = new StrengSegd(tmp48_AST_in->getText()); loc(rets,tmp48_AST_in);
#line 1107 "FjolnirCodegen.cpp"
			break;
		}
		case STAFFASTI:
		{
			antlr::RefAST tmp49_AST_in = _t;
			match(_t,STAFFASTI);
			_t = _t->getNextSibling();
#line 208 "FjolnirCodegen.g"
			rets = new HeiltoluSegd(tmp49_AST_in->getText()[0]); loc(rets,tmp49_AST_in)
#line 1117 "FjolnirCodegen.cpp"
			break;
		}
		case FJOLDATALA:
		{
			antlr::RefAST tmp50_AST_in = _t;
			match(_t,FJOLDATALA);
			_t = _t->getNextSibling();
#line 209 "FjolnirCodegen.g"
			rets = new HeiltoluSegd(tmp50_AST_in->getText()); loc(rets,tmp50_AST_in);
#line 1127 "FjolnirCodegen.cpp"
			break;
		}
		case HEILTALA:
		{
			antlr::RefAST tmp51_AST_in = _t;
			match(_t,HEILTALA);
			_t = _t->getNextSibling();
#line 210 "FjolnirCodegen.g"
			rets = new HeiltoluSegd(tmp51_AST_in->getText()); loc(rets,tmp51_AST_in);
#line 1137 "FjolnirCodegen.cpp"
			break;
		}
		case FLEYTITALA:
		{
			antlr::RefAST tmp52_AST_in = _t;
			match(_t,FLEYTITALA);
			_t = _t->getNextSibling();
#line 211 "FjolnirCodegen.g"
			rets = new FleytitoluSegd(tmp52_AST_in->getText()); loc(rets,tmp52_AST_in);
#line 1147 "FjolnirCodegen.cpp"
			break;
		}
		case TOMAGILDI:
		{
			antlr::RefAST tmp53_AST_in = _t;
			match(_t,TOMAGILDI);
			_t = _t->getNextSibling();
#line 212 "FjolnirCodegen.g"
			rets = new TomaSegd(); loc(rets,tmp53_AST_in);
#line 1157 "FjolnirCodegen.cpp"
			break;
		}
		case L_STEF:
		{
			antlr::RefAST __t76 = _t;
			antlr::RefAST tmp54_AST_in = _t;
			match(_t,L_STEF);
			_t = _t->getFirstChild();
			antlr::RefAST tmp55_AST_in = _t;
			match(_t,NAFN);
			_t = _t->getNextSibling();
			antlr::RefAST tmp56_AST_in = _t;
			match(_t,FJOLDATALA);
			_t = _t->getNextSibling();
			antlr::RefAST tmp57_AST_in = _t;
			match(_t,FJOLDATALA);
			_t = _t->getNextSibling();
			_t = __t76;
			_t = _t->getNextSibling();
#line 214 "FjolnirCodegen.g"
			cerr << "Stefgildi eru ekki útfærð." << endl; exit(1);
#line 1179 "FjolnirCodegen.cpp"
			break;
		}
		default:
		{
			throw antlr::NoViableAltException(_t);
		}
		}
	}
	catch (antlr::RecognitionException& ex) {
		reportError(ex);
		if ( _t != antlr::nullAST )
			_t = _t->getNextSibling();
	}
	_retTree = _t;
	return rets;
}

Segd*  FjolnirCodegen::lykkjusegd(antlr::RefAST _t) {
#line 217 "FjolnirCodegen.g"
	Segd* rets;
#line 1200 "FjolnirCodegen.cpp"
	antlr::RefAST lykkjusegd_AST_in = _t;
#line 217 "FjolnirCodegen.g"
	Segd* a;
#line 1204 "FjolnirCodegen.cpp"
	
	try {      // for error handling
		if (_t == antlr::nullAST )
			_t = ASTNULL;
		switch ( _t->getType()) {
		case L_LYKKJA:
		{
			antlr::RefAST __t78 = _t;
			antlr::RefAST tmp58_AST_in = _t;
			match(_t,L_LYKKJA);
			_t = _t->getFirstChild();
#line 219 "FjolnirCodegen.g"
			LykkjuSegd* lykkja = new LykkjuSegd();
#line 1218 "FjolnirCodegen.cpp"
			antlr::RefAST __t79 = _t;
			antlr::RefAST tmp59_AST_in = _t;
			match(_t,SEGDARUNA);
			_t = _t->getFirstChild();
			{ // ( ... )*
			for (;;) {
				if (_t == antlr::nullAST )
					_t = ASTNULL;
				if ((_tokenSet_0.member(_t->getType()))) {
					a=segd(_t);
					_t = _retTree;
#line 220 "FjolnirCodegen.g"
					lykkja->addSegd(a);
#line 1232 "FjolnirCodegen.cpp"
				}
				else {
					goto _loop81;
				}
				
			}
			_loop81:;
			} // ( ... )*
			_t = __t79;
			_t = _t->getNextSibling();
			_t = __t78;
			_t = _t->getNextSibling();
#line 221 "FjolnirCodegen.g"
			rets = (Segd*) lykkja; loc(rets,tmp58_AST_in);
#line 1247 "FjolnirCodegen.cpp"
			break;
		}
		case L_MEDAN:
		{
			antlr::RefAST __t82 = _t;
			antlr::RefAST tmp60_AST_in = _t;
			match(_t,L_MEDAN);
			_t = _t->getFirstChild();
			a=segd(_t);
			_t = _retTree;
#line 222 "FjolnirCodegen.g"
			MedanSegd* medan = new MedanSegd(a);
#line 1260 "FjolnirCodegen.cpp"
			antlr::RefAST __t83 = _t;
			antlr::RefAST tmp61_AST_in = _t;
			match(_t,SEGDARUNA);
			_t = _t->getFirstChild();
			{ // ( ... )*
			for (;;) {
				if (_t == antlr::nullAST )
					_t = ASTNULL;
				if ((_tokenSet_0.member(_t->getType()))) {
					a=segd(_t);
					_t = _retTree;
#line 223 "FjolnirCodegen.g"
					medan->addSegd(a);
#line 1274 "FjolnirCodegen.cpp"
				}
				else {
					goto _loop85;
				}
				
			}
			_loop85:;
			} // ( ... )*
			_t = __t83;
			_t = _t->getNextSibling();
			_t = __t82;
			_t = _t->getNextSibling();
#line 224 "FjolnirCodegen.g"
			rets = (Segd*) medan; loc(rets,tmp60_AST_in);
#line 1289 "FjolnirCodegen.cpp"
			break;
		}
		default:
		{
			throw antlr::NoViableAltException(_t);
		}
		}
	}
	catch (antlr::RecognitionException& ex) {
		reportError(ex);
		if ( _t != antlr::nullAST )
			_t = _t->getNextSibling();
	}
	_retTree = _t;
	return rets;
}

void FjolnirCodegen::initializeASTFactory( antlr::ASTFactory& )
{
}
const char* FjolnirCodegen::tokenNames[] = {
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

const unsigned long FjolnirCodegen::_tokenSet_0_data_[] = { 0UL, 52017716UL, 4342UL, 0UL, 0UL, 0UL, 0UL, 0UL };
// "eða" "ef" "ekki" "lykkja" "meðan" "og" "skila" "stef" "stofn" "út" 
// "val" GILDISVEITING SVIGI_OPNA STAFFASTI STRENGFASTI FJOLDATALA HEILTALA 
// FLEYTITALA TOMAGILDI NAFN 
const antlr::BitSet FjolnirCodegen::_tokenSet_0(_tokenSet_0_data_,8);


ANTLR_END_NAMESPACE
