/* $ANTLR 2.7.3-20030430: "FjolnirEiningLexer.g" -> "FjolnirEiningLexer.cpp"$ */
#line 6 "FjolnirEiningLexer.g"

#pragma warning( disable : 4251 4267 4101 4267 )

#line 7 "FjolnirEiningLexer.cpp"
#include "FjolnirEiningLexer.hpp"
#include <antlr/CharBuffer.hpp>
#include <antlr/TokenStreamException.hpp>
#include <antlr/TokenStreamIOException.hpp>
#include <antlr/TokenStreamRecognitionException.hpp>
#include <antlr/CharStreamException.hpp>
#include <antlr/CharStreamIOException.hpp>
#include <antlr/NoViableAltForCharException.hpp>

ANTLR_BEGIN_NAMESPACE(ff)
#line 1 "FjolnirEiningLexer.g"
#line 18 "FjolnirEiningLexer.cpp"
FjolnirEiningLexer::FjolnirEiningLexer(std::istream& in)
	: antlr::CharScanner(new antlr::CharBuffer(in),true)
{
	initLiterals();
}

FjolnirEiningLexer::FjolnirEiningLexer(antlr::InputBuffer& ib)
	: antlr::CharScanner(ib,true)
{
	initLiterals();
}

FjolnirEiningLexer::FjolnirEiningLexer(const antlr::LexerSharedInputState& state)
	: antlr::CharScanner(state,true)
{
	initLiterals();
}

void FjolnirEiningLexer::initLiterals()
{
	literals["út"] = 51;
	literals["fyrir"] = 38;
	literals["annars"] = 31;
	literals["kostur"] = 40;
	literals["meðan"] = 43;
	literals["skila"] = 45;
	literals["stofnlok"] = 49;
	literals["þá"] = 54;
	literals["eflok"] = 35;
	literals["úr"] = 50;
	literals["lykkjulok"] = 42;
	literals["vallok"] = 53;
	literals["og"] = 44;
	literals["ekki"] = 37;
	literals["stofn"] = 48;
	literals["breyta"] = 33;
	literals["eða"] = 34;
	literals["stef"] = 47;
	literals["annarsef"] = 32;
	literals["lykkja"] = 41;
	literals["innflutt"] = 39;
	literals["val"] = 52;
	literals["staðvær"] = 46;
	literals["ef"] = 36;
}

antlr::RefToken FjolnirEiningLexer::nextToken()
{
	antlr::RefToken theRetToken;
	for (;;) {
		antlr::RefToken theRetToken;
		int _ttype = antlr::Token::INVALID_TYPE;
		resetText();
		try {   // for lexical and char stream error handling
			switch ( LA(1)) {
			case static_cast<unsigned char>('('):
			{
				mSVIGI_OPNA(true);
				theRetToken=_returnToken;
				break;
			}
			case static_cast<unsigned char>(')'):
			{
				mSVIGI_LOKA(true);
				theRetToken=_returnToken;
				break;
			}
			case static_cast<unsigned char>(','):
			{
				mKOMMA(true);
				theRetToken=_returnToken;
				break;
			}
			case static_cast<unsigned char>(']'):
			{
				mHORNKLOFI_LOKA(true);
				theRetToken=_returnToken;
				break;
			}
			case static_cast<unsigned char>('\''):
			{
				mSTAFFASTI(true);
				theRetToken=_returnToken;
				break;
			}
			case static_cast<unsigned char>('"'):
			{
				mSTRENGFASTI(true);
				theRetToken=_returnToken;
				break;
			}
			case static_cast<unsigned char>('!'):
			case static_cast<unsigned char>('$'):
			case static_cast<unsigned char>('%'):
			case static_cast<unsigned char>('&'):
			case static_cast<unsigned char>('*'):
			case static_cast<unsigned char>('+'):
			case static_cast<unsigned char>('-'):
			case static_cast<unsigned char>('/'):
			case static_cast<unsigned char>('0'):
			case static_cast<unsigned char>('1'):
			case static_cast<unsigned char>('2'):
			case static_cast<unsigned char>('3'):
			case static_cast<unsigned char>('4'):
			case static_cast<unsigned char>('5'):
			case static_cast<unsigned char>('6'):
			case static_cast<unsigned char>('7'):
			case static_cast<unsigned char>('8'):
			case static_cast<unsigned char>('9'):
			case static_cast<unsigned char>(':'):
			case static_cast<unsigned char>('<'):
			case static_cast<unsigned char>('='):
			case static_cast<unsigned char>('>'):
			case static_cast<unsigned char>('?'):
			case static_cast<unsigned char>('@'):
			case static_cast<unsigned char>('\\'):
			case static_cast<unsigned char>('^'):
			case static_cast<unsigned char>('|'):
			{
				mINNSETN_GILDISV_ADGERD_EDA_TALA(true);
				theRetToken=_returnToken;
				break;
			}
			case static_cast<unsigned char>('{'):
			{
				mSLAUFA_OPNA(true);
				theRetToken=_returnToken;
				break;
			}
			case static_cast<unsigned char>('}'):
			{
				mSLAUFA_LOKA(true);
				theRetToken=_returnToken;
				break;
			}
			case static_cast<unsigned char>('\t'):
			case static_cast<unsigned char>('\n'):
			case static_cast<unsigned char>('\r'):
			case static_cast<unsigned char>(' '):
			{
				mWS(true);
				theRetToken=_returnToken;
				break;
			}
			default:
				if ((LA(1) == static_cast<unsigned char>('.')) && (LA(2) == static_cast<unsigned char>('.'))) {
					mPUNKTURPUNKTUR(true);
					theRetToken=_returnToken;
				}
				else if ((LA(1) == static_cast<unsigned char>('[')) && (LA(2) == static_cast<unsigned char>(']'))) {
					mTOMAGILDI(true);
					theRetToken=_returnToken;
				}
				else if ((LA(1) == static_cast<unsigned char>(';')) && (LA(2) == static_cast<unsigned char>(';'))) {
					mCOMMENT(true);
					theRetToken=_returnToken;
				}
				else if ((LA(1) == static_cast<unsigned char>(';')) && (true)) {
					mSEMIKOMMA(true);
					theRetToken=_returnToken;
				}
				else if ((LA(1) == static_cast<unsigned char>('[')) && (true)) {
					mHORNKLOFI_OPNA(true);
					theRetToken=_returnToken;
				}
				else if ((LA(1) == static_cast<unsigned char>('.')) && (true)) {
					mPUNKTUR(true);
					theRetToken=_returnToken;
				}
				else if ((_tokenSet_0.member(LA(1)))) {
					mNAFN(true);
					theRetToken=_returnToken;
				}
			else {
				if (LA(1)==EOF_CHAR)
				{
					uponEOF();
					_returnToken = makeToken(antlr::Token::EOF_TYPE);
				}
				else {throw antlr::NoViableAltForCharException(LA(1), getFilename(), getLine(), getColumn());}
			}
			}
			if ( !_returnToken )
				goto tryAgain; // found SKIP token

			_ttype = _returnToken->getType();
			_ttype = testLiteralsTable(_ttype);
			_returnToken->setType(_ttype);
			return _returnToken;
		}
		catch (antlr::RecognitionException& e) {
				throw antlr::TokenStreamRecognitionException(e);
		}
		catch (antlr::CharStreamIOException& csie) {
			throw antlr::TokenStreamIOException(csie.io);
		}
		catch (antlr::CharStreamException& cse) {
			throw antlr::TokenStreamException(cse.getMessage());
		}
tryAgain:;
	}
}

void FjolnirEiningLexer::mINNSETNING(bool _createToken) {
	int _ttype; antlr::RefToken _token; int _begin=text.length();
	_ttype = INNSETNING;
	int _saveIndex;
	
	match("->");
	if ( _createToken && _token==antlr::nullToken && _ttype!=antlr::Token::SKIP ) {
	   _token = makeToken(_ttype);
	   _token->setText(text.substr(_begin, text.length()-_begin));
	}
	_returnToken = _token;
	_saveIndex=0;
}

void FjolnirEiningLexer::mGILDISVEITING(bool _createToken) {
	int _ttype; antlr::RefToken _token; int _begin=text.length();
	_ttype = GILDISVEITING;
	int _saveIndex;
	
	match(":=");
	if ( _createToken && _token==antlr::nullToken && _ttype!=antlr::Token::SKIP ) {
	   _token = makeToken(_ttype);
	   _token->setText(text.substr(_begin, text.length()-_begin));
	}
	_returnToken = _token;
	_saveIndex=0;
}

void FjolnirEiningLexer::mSVIGI_OPNA(bool _createToken) {
	int _ttype; antlr::RefToken _token; int _begin=text.length();
	_ttype = SVIGI_OPNA;
	int _saveIndex;
	
	match(static_cast<unsigned char>('('));
	if ( _createToken && _token==antlr::nullToken && _ttype!=antlr::Token::SKIP ) {
	   _token = makeToken(_ttype);
	   _token->setText(text.substr(_begin, text.length()-_begin));
	}
	_returnToken = _token;
	_saveIndex=0;
}

void FjolnirEiningLexer::mSVIGI_LOKA(bool _createToken) {
	int _ttype; antlr::RefToken _token; int _begin=text.length();
	_ttype = SVIGI_LOKA;
	int _saveIndex;
	
	match(static_cast<unsigned char>(')'));
	if ( _createToken && _token==antlr::nullToken && _ttype!=antlr::Token::SKIP ) {
	   _token = makeToken(_ttype);
	   _token->setText(text.substr(_begin, text.length()-_begin));
	}
	_returnToken = _token;
	_saveIndex=0;
}

void FjolnirEiningLexer::mSEMIKOMMA(bool _createToken) {
	int _ttype; antlr::RefToken _token; int _begin=text.length();
	_ttype = SEMIKOMMA;
	int _saveIndex;
	
	match(static_cast<unsigned char>(';'));
	if ( _createToken && _token==antlr::nullToken && _ttype!=antlr::Token::SKIP ) {
	   _token = makeToken(_ttype);
	   _token->setText(text.substr(_begin, text.length()-_begin));
	}
	_returnToken = _token;
	_saveIndex=0;
}

void FjolnirEiningLexer::mKOMMA(bool _createToken) {
	int _ttype; antlr::RefToken _token; int _begin=text.length();
	_ttype = KOMMA;
	int _saveIndex;
	
	match(static_cast<unsigned char>(','));
	if ( _createToken && _token==antlr::nullToken && _ttype!=antlr::Token::SKIP ) {
	   _token = makeToken(_ttype);
	   _token->setText(text.substr(_begin, text.length()-_begin));
	}
	_returnToken = _token;
	_saveIndex=0;
}

void FjolnirEiningLexer::mHORNKLOFI_OPNA(bool _createToken) {
	int _ttype; antlr::RefToken _token; int _begin=text.length();
	_ttype = HORNKLOFI_OPNA;
	int _saveIndex;
	
	match(static_cast<unsigned char>('['));
	if ( _createToken && _token==antlr::nullToken && _ttype!=antlr::Token::SKIP ) {
	   _token = makeToken(_ttype);
	   _token->setText(text.substr(_begin, text.length()-_begin));
	}
	_returnToken = _token;
	_saveIndex=0;
}

void FjolnirEiningLexer::mHORNKLOFI_LOKA(bool _createToken) {
	int _ttype; antlr::RefToken _token; int _begin=text.length();
	_ttype = HORNKLOFI_LOKA;
	int _saveIndex;
	
	match(static_cast<unsigned char>(']'));
	if ( _createToken && _token==antlr::nullToken && _ttype!=antlr::Token::SKIP ) {
	   _token = makeToken(_ttype);
	   _token->setText(text.substr(_begin, text.length()-_begin));
	}
	_returnToken = _token;
	_saveIndex=0;
}

void FjolnirEiningLexer::mPUNKTUR(bool _createToken) {
	int _ttype; antlr::RefToken _token; int _begin=text.length();
	_ttype = PUNKTUR;
	int _saveIndex;
	
	match(static_cast<unsigned char>('.'));
	if ( _createToken && _token==antlr::nullToken && _ttype!=antlr::Token::SKIP ) {
	   _token = makeToken(_ttype);
	   _token->setText(text.substr(_begin, text.length()-_begin));
	}
	_returnToken = _token;
	_saveIndex=0;
}

void FjolnirEiningLexer::mPUNKTURPUNKTUR(bool _createToken) {
	int _ttype; antlr::RefToken _token; int _begin=text.length();
	_ttype = PUNKTURPUNKTUR;
	int _saveIndex;
	
	match("..");
	if ( _createToken && _token==antlr::nullToken && _ttype!=antlr::Token::SKIP ) {
	   _token = makeToken(_ttype);
	   _token->setText(text.substr(_begin, text.length()-_begin));
	}
	_returnToken = _token;
	_saveIndex=0;
}

void FjolnirEiningLexer::mSTAFFASTI(bool _createToken) {
	int _ttype; antlr::RefToken _token; int _begin=text.length();
	_ttype = STAFFASTI;
	int _saveIndex;
	
	_saveIndex=text.length();
	match(static_cast<unsigned char>('\''));
	text.erase(_saveIndex);
	{
	if ((_tokenSet_1.member(LA(1)))) {
		matchNot(static_cast<unsigned char>('\\'));
	}
	else if ((LA(1) == static_cast<unsigned char>('\\'))) {
		mStyriStafur(false);
	}
	else {
		throw antlr::NoViableAltForCharException(LA(1), getFilename(), getLine(), getColumn());
	}
	
	}
	_saveIndex=text.length();
	match(static_cast<unsigned char>('\''));
	text.erase(_saveIndex);
	if ( _createToken && _token==antlr::nullToken && _ttype!=antlr::Token::SKIP ) {
	   _token = makeToken(_ttype);
	   _token->setText(text.substr(_begin, text.length()-_begin));
	}
	_returnToken = _token;
	_saveIndex=0;
}

void FjolnirEiningLexer::mStyriStafur(bool _createToken,
	bool expand
) {
	int _ttype; antlr::RefToken _token; int _begin=text.length();
	_ttype = StyriStafur;
	int _saveIndex;
	
	{
	if ((LA(1) == static_cast<unsigned char>('\\')) && (_tokenSet_2.member(LA(2)))) {
		match(static_cast<unsigned char>('\\'));
		matchNot(static_cast<unsigned char>('$'));
	}
	else if ((LA(1) == static_cast<unsigned char>('\\')) && (LA(2) == static_cast<unsigned char>('$'))) {
		match("\\$");
		mHexStafur(false);
		mHexStafur(false);
	}
	else {
		throw antlr::NoViableAltForCharException(LA(1), getFilename(), getLine(), getColumn());
	}
	
	}
	if ( inputState->guessing==0 ) {
#line 117 "FjolnirEiningLexer.g"
		
					std::string temp;
					if (expand) {
						temp = text.substr(_begin,text.length()-_begin);
						{ text.erase(_begin); text += styriStafur(temp); };
					}
				
#line 424 "FjolnirEiningLexer.cpp"
	}
	if ( _createToken && _token==antlr::nullToken && _ttype!=antlr::Token::SKIP ) {
	   _token = makeToken(_ttype);
	   _token->setText(text.substr(_begin, text.length()-_begin));
	}
	_returnToken = _token;
	_saveIndex=0;
}

void FjolnirEiningLexer::mSTRENGFASTI(bool _createToken) {
	int _ttype; antlr::RefToken _token; int _begin=text.length();
	_ttype = STRENGFASTI;
	int _saveIndex;
	
	_saveIndex=text.length();
	match(static_cast<unsigned char>('"'));
	text.erase(_saveIndex);
	{ // ( ... )*
	for (;;) {
		if ((_tokenSet_3.member(LA(1)))) {
			{
			match(_tokenSet_3);
			}
		}
		else if ((LA(1) == static_cast<unsigned char>('\\'))) {
			mStyriStafur(false,false);
		}
		else {
			goto _loop16;
		}
		
	}
	_loop16:;
	} // ( ... )*
	_saveIndex=text.length();
	match(static_cast<unsigned char>('"'));
	text.erase(_saveIndex);
	if ( _createToken && _token==antlr::nullToken && _ttype!=antlr::Token::SKIP ) {
	   _token = makeToken(_ttype);
	   _token->setText(text.substr(_begin, text.length()-_begin));
	}
	_returnToken = _token;
	_saveIndex=0;
}

void FjolnirEiningLexer::mHexStafur(bool _createToken) {
	int _ttype; antlr::RefToken _token; int _begin=text.length();
	_ttype = HexStafur;
	int _saveIndex;
	
	switch ( LA(1)) {
	case static_cast<unsigned char>('0'):
	case static_cast<unsigned char>('1'):
	case static_cast<unsigned char>('2'):
	case static_cast<unsigned char>('3'):
	case static_cast<unsigned char>('4'):
	case static_cast<unsigned char>('5'):
	case static_cast<unsigned char>('6'):
	case static_cast<unsigned char>('7'):
	case static_cast<unsigned char>('8'):
	case static_cast<unsigned char>('9'):
	{
		matchRange(static_cast<unsigned char>('0'),static_cast<unsigned char>('9'));
		break;
	}
	case static_cast<unsigned char>('A'):
	case static_cast<unsigned char>('B'):
	case static_cast<unsigned char>('C'):
	case static_cast<unsigned char>('D'):
	case static_cast<unsigned char>('E'):
	case static_cast<unsigned char>('F'):
	{
		matchRange(static_cast<unsigned char>('A'),static_cast<unsigned char>('F'));
		break;
	}
	case static_cast<unsigned char>('a'):
	case static_cast<unsigned char>('b'):
	case static_cast<unsigned char>('c'):
	case static_cast<unsigned char>('d'):
	case static_cast<unsigned char>('e'):
	case static_cast<unsigned char>('f'):
	{
		matchRange(static_cast<unsigned char>('a'),static_cast<unsigned char>('f'));
		break;
	}
	default:
	{
		throw antlr::NoViableAltForCharException(LA(1), getFilename(), getLine(), getColumn());
	}
	}
	if ( _createToken && _token==antlr::nullToken && _ttype!=antlr::Token::SKIP ) {
	   _token = makeToken(_ttype);
	   _token->setText(text.substr(_begin, text.length()-_begin));
	}
	_returnToken = _token;
	_saveIndex=0;
}

void FjolnirEiningLexer::mINNSETN_GILDISV_ADGERD_EDA_TALA(bool _createToken) {
	int _ttype; antlr::RefToken _token; int _begin=text.length();
	_ttype = INNSETN_GILDISV_ADGERD_EDA_TALA;
	int _saveIndex;
#line 138 "FjolnirEiningLexer.g"
	int ft;
#line 529 "FjolnirEiningLexer.cpp"
	
	bool synPredMatched26 = false;
	if (((_tokenSet_4.member(LA(1))) && (_tokenSet_5.member(LA(2))))) {
		int _m26 = mark();
		synPredMatched26 = true;
		inputState->guessing++;
		try {
			{
			{ // ( ... )*
			for (;;) {
				if ((LA(1) == static_cast<unsigned char>('-'))) {
					match(static_cast<unsigned char>('-'));
				}
				else {
					goto _loop23;
				}
				
			}
			_loop23:;
			} // ( ... )*
			{ // ( ... )+
			int _cnt25=0;
			for (;;) {
				if (((LA(1) >= static_cast<unsigned char>('0') && LA(1) <= static_cast<unsigned char>('9')))) {
					matchRange(static_cast<unsigned char>('0'),static_cast<unsigned char>('9'));
				}
				else {
					if ( _cnt25>=1 ) { goto _loop25; } else {throw antlr::NoViableAltForCharException(LA(1), getFilename(), getLine(), getColumn());}
				}
				
				_cnt25++;
			}
			_loop25:;
			}  // ( ... )+
			match(static_cast<unsigned char>('.'));
			}
		}
		catch (antlr::RecognitionException& pe) {
			synPredMatched26 = false;
		}
		rewind(_m26);
		inputState->guessing--;
	}
	if ( synPredMatched26 ) {
		mFLEYTITALA(false);
		if ( inputState->guessing==0 ) {
#line 140 "FjolnirEiningLexer.g"
			_ttype = FLEYTITALA;
#line 578 "FjolnirEiningLexer.cpp"
		}
	}
	else {
		bool synPredMatched33 = false;
		if (((LA(1) == static_cast<unsigned char>('-')) && (LA(2) == static_cast<unsigned char>('>')))) {
			int _m33 = mark();
			synPredMatched33 = true;
			inputState->guessing++;
			try {
				{
				match("->");
				mEkkiAdgerdaStafur(false);
				}
			}
			catch (antlr::RecognitionException& pe) {
				synPredMatched33 = false;
			}
			rewind(_m33);
			inputState->guessing--;
		}
		if ( synPredMatched33 ) {
			mINNSETNING(false);
			if ( inputState->guessing==0 ) {
#line 142 "FjolnirEiningLexer.g"
				_ttype = INNSETNING;
#line 604 "FjolnirEiningLexer.cpp"
			}
		}
		else {
			bool synPredMatched35 = false;
			if (((LA(1) == static_cast<unsigned char>(':')) && (LA(2) == static_cast<unsigned char>('=')))) {
				int _m35 = mark();
				synPredMatched35 = true;
				inputState->guessing++;
				try {
					{
					match(":=");
					mEkkiAdgerdaStafur(false);
					}
				}
				catch (antlr::RecognitionException& pe) {
					synPredMatched35 = false;
				}
				rewind(_m35);
				inputState->guessing--;
			}
			if ( synPredMatched35 ) {
				mGILDISVEITING(false);
				if ( inputState->guessing==0 ) {
#line 143 "FjolnirEiningLexer.g"
					_ttype = GILDISVEITING;
#line 630 "FjolnirEiningLexer.cpp"
				}
			}
			else {
				bool synPredMatched31 = false;
				if (((_tokenSet_6.member(LA(1))) && (true))) {
					int _m31 = mark();
					synPredMatched31 = true;
					inputState->guessing++;
					try {
						{
						{ // ( ... )*
						for (;;) {
							if ((LA(1) == static_cast<unsigned char>('-'))) {
								match(static_cast<unsigned char>('-'));
							}
							else {
								goto _loop29;
							}
							
						}
						_loop29:;
						} // ( ... )*
						{
						switch ( LA(1)) {
						case static_cast<unsigned char>('0'):
						case static_cast<unsigned char>('1'):
						case static_cast<unsigned char>('2'):
						case static_cast<unsigned char>('3'):
						case static_cast<unsigned char>('4'):
						case static_cast<unsigned char>('5'):
						case static_cast<unsigned char>('6'):
						case static_cast<unsigned char>('7'):
						case static_cast<unsigned char>('8'):
						case static_cast<unsigned char>('9'):
						{
							matchRange(static_cast<unsigned char>('0'),static_cast<unsigned char>('9'));
							break;
						}
						case static_cast<unsigned char>('$'):
						{
							match(static_cast<unsigned char>('$'));
							break;
						}
						default:
						{
							throw antlr::NoViableAltForCharException(LA(1), getFilename(), getLine(), getColumn());
						}
						}
						}
						}
					}
					catch (antlr::RecognitionException& pe) {
						synPredMatched31 = false;
					}
					rewind(_m31);
					inputState->guessing--;
				}
				if ( synPredMatched31 ) {
					mHEILTALA(false);
					if ( inputState->guessing==0 ) {
#line 141 "FjolnirEiningLexer.g"
						_ttype = HEILTALA;
#line 693 "FjolnirEiningLexer.cpp"
					}
				}
				else if ((_tokenSet_7.member(LA(1))) && (true)) {
					ft=mADGERD(false);
					if ( inputState->guessing==0 ) {
#line 144 "FjolnirEiningLexer.g"
						_ttype = ft;
#line 701 "FjolnirEiningLexer.cpp"
					}
				}
				else if ((_tokenSet_8.member(LA(1))) && (true)) {
					mFJOLDATALA(false);
					if ( inputState->guessing==0 ) {
#line 145 "FjolnirEiningLexer.g"
						_ttype = FJOLDATALA;
#line 709 "FjolnirEiningLexer.cpp"
					}
				}
	else {
		throw antlr::NoViableAltForCharException(LA(1), getFilename(), getLine(), getColumn());
	}
	}}}
	if ( _createToken && _token==antlr::nullToken && _ttype!=antlr::Token::SKIP ) {
	   _token = makeToken(_ttype);
	   _token->setText(text.substr(_begin, text.length()-_begin));
	}
	_returnToken = _token;
	_saveIndex=0;
}

void FjolnirEiningLexer::mFLEYTITALA(bool _createToken) {
	int _ttype; antlr::RefToken _token; int _begin=text.length();
	_ttype = FLEYTITALA;
	int _saveIndex;
	
	{ // ( ... )*
	for (;;) {
		if ((LA(1) == static_cast<unsigned char>('-'))) {
			match(static_cast<unsigned char>('-'));
		}
		else {
			goto _loop46;
		}
		
	}
	_loop46:;
	} // ( ... )*
	{ // ( ... )+
	int _cnt48=0;
	for (;;) {
		if (((LA(1) >= static_cast<unsigned char>('0') && LA(1) <= static_cast<unsigned char>('9')))) {
			matchRange(static_cast<unsigned char>('0'),static_cast<unsigned char>('9'));
		}
		else {
			if ( _cnt48>=1 ) { goto _loop48; } else {throw antlr::NoViableAltForCharException(LA(1), getFilename(), getLine(), getColumn());}
		}
		
		_cnt48++;
	}
	_loop48:;
	}  // ( ... )+
	match(static_cast<unsigned char>('.'));
	{ // ( ... )*
	for (;;) {
		if (((LA(1) >= static_cast<unsigned char>('0') && LA(1) <= static_cast<unsigned char>('9')))) {
			matchRange(static_cast<unsigned char>('0'),static_cast<unsigned char>('9'));
		}
		else {
			goto _loop50;
		}
		
	}
	_loop50:;
	} // ( ... )*
	{
	if ((LA(1) == static_cast<unsigned char>('E') || LA(1) == static_cast<unsigned char>('e'))) {
		{
		switch ( LA(1)) {
		case static_cast<unsigned char>('e'):
		{
			match(static_cast<unsigned char>('e'));
			break;
		}
		case static_cast<unsigned char>('E'):
		{
			match(static_cast<unsigned char>('E'));
			break;
		}
		default:
		{
			throw antlr::NoViableAltForCharException(LA(1), getFilename(), getLine(), getColumn());
		}
		}
		}
		{
		switch ( LA(1)) {
		case static_cast<unsigned char>('+'):
		{
			match(static_cast<unsigned char>('+'));
			break;
		}
		case static_cast<unsigned char>('-'):
		{
			match(static_cast<unsigned char>('-'));
			break;
		}
		case static_cast<unsigned char>('0'):
		case static_cast<unsigned char>('1'):
		case static_cast<unsigned char>('2'):
		case static_cast<unsigned char>('3'):
		case static_cast<unsigned char>('4'):
		case static_cast<unsigned char>('5'):
		case static_cast<unsigned char>('6'):
		case static_cast<unsigned char>('7'):
		case static_cast<unsigned char>('8'):
		case static_cast<unsigned char>('9'):
		{
			break;
		}
		default:
		{
			throw antlr::NoViableAltForCharException(LA(1), getFilename(), getLine(), getColumn());
		}
		}
		}
		{ // ( ... )+
		int _cnt55=0;
		for (;;) {
			if (((LA(1) >= static_cast<unsigned char>('0') && LA(1) <= static_cast<unsigned char>('9')))) {
				matchRange(static_cast<unsigned char>('0'),static_cast<unsigned char>('9'));
			}
			else {
				if ( _cnt55>=1 ) { goto _loop55; } else {throw antlr::NoViableAltForCharException(LA(1), getFilename(), getLine(), getColumn());}
			}
			
			_cnt55++;
		}
		_loop55:;
		}  // ( ... )+
	}
	else {
	}
	
	}
	if ( _createToken && _token==antlr::nullToken && _ttype!=antlr::Token::SKIP ) {
	   _token = makeToken(_ttype);
	   _token->setText(text.substr(_begin, text.length()-_begin));
	}
	_returnToken = _token;
	_saveIndex=0;
}

void FjolnirEiningLexer::mHEILTALA(bool _createToken) {
	int _ttype; antlr::RefToken _token; int _begin=text.length();
	_ttype = HEILTALA;
	int _saveIndex;
	
	{ // ( ... )*
	for (;;) {
		if ((LA(1) == static_cast<unsigned char>('-'))) {
			match(static_cast<unsigned char>('-'));
		}
		else {
			goto _loop43;
		}
		
	}
	_loop43:;
	} // ( ... )*
	mFJOLDATALA(false);
	if ( _createToken && _token==antlr::nullToken && _ttype!=antlr::Token::SKIP ) {
	   _token = makeToken(_ttype);
	   _token->setText(text.substr(_begin, text.length()-_begin));
	}
	_returnToken = _token;
	_saveIndex=0;
}

void FjolnirEiningLexer::mEkkiAdgerdaStafur(bool _createToken) {
	int _ttype; antlr::RefToken _token; int _begin=text.length();
	_ttype = EkkiAdgerdaStafur;
	int _saveIndex;
	
	{
	match(_tokenSet_9);
	}
	if ( _createToken && _token==antlr::nullToken && _ttype!=antlr::Token::SKIP ) {
	   _token = makeToken(_ttype);
	   _token->setText(text.substr(_begin, text.length()-_begin));
	}
	_returnToken = _token;
	_saveIndex=0;
}

int  FjolnirEiningLexer::mADGERD(bool _createToken) {
#line 185 "FjolnirEiningLexer.g"
	int forgangsToken;
#line 891 "FjolnirEiningLexer.cpp"
	int _ttype; antlr::RefToken _token; int _begin=text.length();
	_ttype = ADGERD;
	int _saveIndex;
	
	switch ( LA(1)) {
	case static_cast<unsigned char>('!'):
	case static_cast<unsigned char>('%'):
	case static_cast<unsigned char>('&'):
	case static_cast<unsigned char>('*'):
	case static_cast<unsigned char>('+'):
	case static_cast<unsigned char>('-'):
	case static_cast<unsigned char>('/'):
	case static_cast<unsigned char>(':'):
	case static_cast<unsigned char>('<'):
	case static_cast<unsigned char>('='):
	case static_cast<unsigned char>('>'):
	case static_cast<unsigned char>('?'):
	case static_cast<unsigned char>('@'):
	case static_cast<unsigned char>('^'):
	case static_cast<unsigned char>('|'):
	{
		{ // ( ... )+
		int _cnt63=0;
		for (;;) {
			if ((_tokenSet_10.member(LA(1)))) {
				mAdgerdaStafur(false);
			}
			else {
				if ( _cnt63>=1 ) { goto _loop63; } else {throw antlr::NoViableAltForCharException(LA(1), getFilename(), getLine(), getColumn());}
			}
			
			_cnt63++;
		}
		_loop63:;
		}  // ( ... )+
		if ( inputState->guessing==0 ) {
#line 187 "FjolnirEiningLexer.g"
			
						switch (text[_begin]) {
						case '^': forgangsToken = ADGERD_7; break;
						case '!':
						case '?':
						case '@': forgangsToken = ADGERD_6; break;
						case '*':
						case '/':
						case '%':
						case '&': forgangsToken = ADGERD_5; break;
						case '+':
						case '-':
						case '|': forgangsToken = ADGERD_4; break;
						case '<':
						case '>':
						case '=': forgangsToken = ADGERD_3; break;
						case ':': forgangsToken = ADGERD_2; break; /* vinstri tengin aðgerð */
						default:  forgangsToken = ADGERD_1; break;
						}
					
#line 949 "FjolnirEiningLexer.cpp"
		}
		break;
	}
	case static_cast<unsigned char>('\\'):
	{
		_saveIndex=text.length();
		match(static_cast<unsigned char>('\\'));
		text.erase(_saveIndex);
		{ // ( ... )+
		int _cnt65=0;
		for (;;) {
			if ((_tokenSet_0.member(LA(1)))) {
				mNafnStafur(false);
			}
			else if ((_tokenSet_10.member(LA(1)))) {
				mAdgerdaStafur(false);
			}
			else {
				if ( _cnt65>=1 ) { goto _loop65; } else {throw antlr::NoViableAltForCharException(LA(1), getFilename(), getLine(), getColumn());}
			}
			
			_cnt65++;
		}
		_loop65:;
		}  // ( ... )+
		if ( inputState->guessing==0 ) {
#line 207 "FjolnirEiningLexer.g"
			forgangsToken = ADGERD_1;
#line 978 "FjolnirEiningLexer.cpp"
		}
		break;
	}
	default:
	{
		throw antlr::NoViableAltForCharException(LA(1), getFilename(), getLine(), getColumn());
	}
	}
	if ( _createToken && _token==antlr::nullToken && _ttype!=antlr::Token::SKIP ) {
	   _token = makeToken(_ttype);
	   _token->setText(text.substr(_begin, text.length()-_begin));
	}
	_returnToken = _token;
	_saveIndex=0;
	return forgangsToken;
}

void FjolnirEiningLexer::mFJOLDATALA(bool _createToken) {
	int _ttype; antlr::RefToken _token; int _begin=text.length();
	_ttype = FJOLDATALA;
	int _saveIndex;
	
	switch ( LA(1)) {
	case static_cast<unsigned char>('$'):
	{
		match(static_cast<unsigned char>('$'));
		{ // ( ... )+
		int _cnt38=0;
		for (;;) {
			if ((_tokenSet_11.member(LA(1)))) {
				mHexStafur(false);
			}
			else {
				if ( _cnt38>=1 ) { goto _loop38; } else {throw antlr::NoViableAltForCharException(LA(1), getFilename(), getLine(), getColumn());}
			}
			
			_cnt38++;
		}
		_loop38:;
		}  // ( ... )+
		break;
	}
	case static_cast<unsigned char>('0'):
	case static_cast<unsigned char>('1'):
	case static_cast<unsigned char>('2'):
	case static_cast<unsigned char>('3'):
	case static_cast<unsigned char>('4'):
	case static_cast<unsigned char>('5'):
	case static_cast<unsigned char>('6'):
	case static_cast<unsigned char>('7'):
	case static_cast<unsigned char>('8'):
	case static_cast<unsigned char>('9'):
	{
		{ // ( ... )+
		int _cnt40=0;
		for (;;) {
			if (((LA(1) >= static_cast<unsigned char>('0') && LA(1) <= static_cast<unsigned char>('9')))) {
				matchRange(static_cast<unsigned char>('0'),static_cast<unsigned char>('9'));
			}
			else {
				if ( _cnt40>=1 ) { goto _loop40; } else {throw antlr::NoViableAltForCharException(LA(1), getFilename(), getLine(), getColumn());}
			}
			
			_cnt40++;
		}
		_loop40:;
		}  // ( ... )+
		break;
	}
	default:
	{
		throw antlr::NoViableAltForCharException(LA(1), getFilename(), getLine(), getColumn());
	}
	}
	if ( _createToken && _token==antlr::nullToken && _ttype!=antlr::Token::SKIP ) {
	   _token = makeToken(_ttype);
	   _token->setText(text.substr(_begin, text.length()-_begin));
	}
	_returnToken = _token;
	_saveIndex=0;
}

void FjolnirEiningLexer::mTOMAGILDI(bool _createToken) {
	int _ttype; antlr::RefToken _token; int _begin=text.length();
	_ttype = TOMAGILDI;
	int _saveIndex;
	
	match("[]");
	if ( _createToken && _token==antlr::nullToken && _ttype!=antlr::Token::SKIP ) {
	   _token = makeToken(_ttype);
	   _token->setText(text.substr(_begin, text.length()-_begin));
	}
	_returnToken = _token;
	_saveIndex=0;
}

void FjolnirEiningLexer::mAdgerdaStafur(bool _createToken) {
	int _ttype; antlr::RefToken _token; int _begin=text.length();
	_ttype = AdgerdaStafur;
	int _saveIndex;
	
	{
	switch ( LA(1)) {
	case static_cast<unsigned char>('+'):
	{
		match(static_cast<unsigned char>('+'));
		break;
	}
	case static_cast<unsigned char>('-'):
	{
		match(static_cast<unsigned char>('-'));
		break;
	}
	case static_cast<unsigned char>('*'):
	{
		match(static_cast<unsigned char>('*'));
		break;
	}
	case static_cast<unsigned char>('/'):
	{
		match(static_cast<unsigned char>('/'));
		break;
	}
	case static_cast<unsigned char>('%'):
	{
		match(static_cast<unsigned char>('%'));
		break;
	}
	case static_cast<unsigned char>('!'):
	{
		match(static_cast<unsigned char>('!'));
		break;
	}
	case static_cast<unsigned char>('&'):
	{
		match(static_cast<unsigned char>('&'));
		break;
	}
	case static_cast<unsigned char>('='):
	{
		match(static_cast<unsigned char>('='));
		break;
	}
	case static_cast<unsigned char>('?'):
	{
		match(static_cast<unsigned char>('?'));
		break;
	}
	case static_cast<unsigned char>('<'):
	{
		match(static_cast<unsigned char>('<'));
		break;
	}
	case static_cast<unsigned char>('>'):
	{
		match(static_cast<unsigned char>('>'));
		break;
	}
	case static_cast<unsigned char>('|'):
	{
		match(static_cast<unsigned char>('|'));
		break;
	}
	case static_cast<unsigned char>(':'):
	{
		match(static_cast<unsigned char>(':'));
		break;
	}
	case static_cast<unsigned char>('^'):
	{
		match(static_cast<unsigned char>('^'));
		break;
	}
	case static_cast<unsigned char>('@'):
	{
		match(static_cast<unsigned char>('@'));
		break;
	}
	default:
	{
		throw antlr::NoViableAltForCharException(LA(1), getFilename(), getLine(), getColumn());
	}
	}
	}
	if ( _createToken && _token==antlr::nullToken && _ttype!=antlr::Token::SKIP ) {
	   _token = makeToken(_ttype);
	   _token->setText(text.substr(_begin, text.length()-_begin));
	}
	_returnToken = _token;
	_saveIndex=0;
}

void FjolnirEiningLexer::mNafnStafur(bool _createToken) {
	int _ttype; antlr::RefToken _token; int _begin=text.length();
	_ttype = NafnStafur;
	int _saveIndex;
	
	{
	match(_tokenSet_0);
	}
	if ( _createToken && _token==antlr::nullToken && _ttype!=antlr::Token::SKIP ) {
	   _token = makeToken(_ttype);
	   _token->setText(text.substr(_begin, text.length()-_begin));
	}
	_returnToken = _token;
	_saveIndex=0;
}

void FjolnirEiningLexer::mEkkiNafnStafur(bool _createToken) {
	int _ttype; antlr::RefToken _token; int _begin=text.length();
	_ttype = EkkiNafnStafur;
	int _saveIndex;
	
	{
	switch ( LA(1)) {
	case static_cast<unsigned char>(' '):
	{
		match(static_cast<unsigned char>(' '));
		break;
	}
	case static_cast<unsigned char>('('):
	{
		match(static_cast<unsigned char>('('));
		break;
	}
	case static_cast<unsigned char>(')'):
	{
		match(static_cast<unsigned char>(')'));
		break;
	}
	case static_cast<unsigned char>('['):
	{
		match(static_cast<unsigned char>('['));
		break;
	}
	case static_cast<unsigned char>(']'):
	{
		match(static_cast<unsigned char>(']'));
		break;
	}
	case static_cast<unsigned char>('{'):
	{
		match(static_cast<unsigned char>('{'));
		break;
	}
	case static_cast<unsigned char>('}'):
	{
		match(static_cast<unsigned char>('}'));
		break;
	}
	case static_cast<unsigned char>(','):
	{
		match(static_cast<unsigned char>(','));
		break;
	}
	case static_cast<unsigned char>(';'):
	{
		match(static_cast<unsigned char>(';'));
		break;
	}
	case static_cast<unsigned char>('.'):
	{
		match(static_cast<unsigned char>('.'));
		break;
	}
	case static_cast<unsigned char>('+'):
	{
		match(static_cast<unsigned char>('+'));
		break;
	}
	case static_cast<unsigned char>('-'):
	{
		match(static_cast<unsigned char>('-'));
		break;
	}
	case static_cast<unsigned char>('*'):
	{
		match(static_cast<unsigned char>('*'));
		break;
	}
	case static_cast<unsigned char>('/'):
	{
		match(static_cast<unsigned char>('/'));
		break;
	}
	case static_cast<unsigned char>('%'):
	{
		match(static_cast<unsigned char>('%'));
		break;
	}
	case static_cast<unsigned char>('!'):
	{
		match(static_cast<unsigned char>('!'));
		break;
	}
	case static_cast<unsigned char>('&'):
	{
		match(static_cast<unsigned char>('&'));
		break;
	}
	case static_cast<unsigned char>('='):
	{
		match(static_cast<unsigned char>('='));
		break;
	}
	case static_cast<unsigned char>('?'):
	{
		match(static_cast<unsigned char>('?'));
		break;
	}
	case static_cast<unsigned char>('<'):
	{
		match(static_cast<unsigned char>('<'));
		break;
	}
	case static_cast<unsigned char>('>'):
	{
		match(static_cast<unsigned char>('>'));
		break;
	}
	case static_cast<unsigned char>('|'):
	{
		match(static_cast<unsigned char>('|'));
		break;
	}
	case static_cast<unsigned char>(':'):
	{
		match(static_cast<unsigned char>(':'));
		break;
	}
	case static_cast<unsigned char>('^'):
	{
		match(static_cast<unsigned char>('^'));
		break;
	}
	case static_cast<unsigned char>('@'):
	{
		match(static_cast<unsigned char>('@'));
		break;
	}
	case static_cast<unsigned char>('\''):
	{
		match(static_cast<unsigned char>('\''));
		break;
	}
	case static_cast<unsigned char>('\3'):
	case static_cast<unsigned char>('\4'):
	case static_cast<unsigned char>('\5'):
	case static_cast<unsigned char>('\6'):
	case static_cast<unsigned char>('\7'):
	case static_cast<unsigned char>('\10'):
	case static_cast<unsigned char>('\t'):
	case static_cast<unsigned char>('\n'):
	case static_cast<unsigned char>('\13'):
	case static_cast<unsigned char>('\14'):
	case static_cast<unsigned char>('\r'):
	case static_cast<unsigned char>('\16'):
	case static_cast<unsigned char>('\17'):
	case static_cast<unsigned char>('\20'):
	case static_cast<unsigned char>('\21'):
	case static_cast<unsigned char>('\22'):
	case static_cast<unsigned char>('\23'):
	case static_cast<unsigned char>('\24'):
	case static_cast<unsigned char>('\25'):
	case static_cast<unsigned char>('\26'):
	case static_cast<unsigned char>('\27'):
	case static_cast<unsigned char>('\30'):
	case static_cast<unsigned char>('\31'):
	{
		matchRange(static_cast<unsigned char>('\3'),static_cast<unsigned char>('\31'));
		break;
	}
	case static_cast<unsigned char>('0'):
	case static_cast<unsigned char>('1'):
	case static_cast<unsigned char>('2'):
	case static_cast<unsigned char>('3'):
	case static_cast<unsigned char>('4'):
	case static_cast<unsigned char>('5'):
	case static_cast<unsigned char>('6'):
	case static_cast<unsigned char>('7'):
	case static_cast<unsigned char>('8'):
	case static_cast<unsigned char>('9'):
	{
		matchRange(static_cast<unsigned char>('0'),static_cast<unsigned char>('9'));
		break;
	}
	case static_cast<unsigned char>('"'):
	{
		match(static_cast<unsigned char>('"'));
		break;
	}
	default:
	{
		throw antlr::NoViableAltForCharException(LA(1), getFilename(), getLine(), getColumn());
	}
	}
	}
	if ( _createToken && _token==antlr::nullToken && _ttype!=antlr::Token::SKIP ) {
	   _token = makeToken(_ttype);
	   _token->setText(text.substr(_begin, text.length()-_begin));
	}
	_returnToken = _token;
	_saveIndex=0;
}

void FjolnirEiningLexer::mNAFN(bool _createToken) {
	int _ttype; antlr::RefToken _token; int _begin=text.length();
	_ttype = NAFN;
	int _saveIndex;
	
	mNafnStafur(false);
	{ // ( ... )*
	for (;;) {
		if ((_tokenSet_0.member(LA(1)))) {
			mNafnStafur(false);
		}
		else if (((LA(1) >= static_cast<unsigned char>('0') && LA(1) <= static_cast<unsigned char>('9')))) {
			matchRange(static_cast<unsigned char>('0'),static_cast<unsigned char>('9'));
		}
		else {
			goto _loop72;
		}
		
	}
	_loop72:;
	} // ( ... )*
	if ( _createToken && _token==antlr::nullToken && _ttype!=antlr::Token::SKIP ) {
	   _token = makeToken(_ttype);
	   _token->setText(text.substr(_begin, text.length()-_begin));
	}
	_returnToken = _token;
	_saveIndex=0;
}

void FjolnirEiningLexer::mSLAUFA_OPNA(bool _createToken) {
	int _ttype; antlr::RefToken _token; int _begin=text.length();
	_ttype = SLAUFA_OPNA;
	int _saveIndex;
	
	match(static_cast<unsigned char>('{'));
	if ( inputState->guessing==0 ) {
#line 234 "FjolnirEiningLexer.g"
		nestedSlaufur++;
#line 1422 "FjolnirEiningLexer.cpp"
	}
	if ( _createToken && _token==antlr::nullToken && _ttype!=antlr::Token::SKIP ) {
	   _token = makeToken(_ttype);
	   _token->setText(text.substr(_begin, text.length()-_begin));
	}
	_returnToken = _token;
	_saveIndex=0;
}

void FjolnirEiningLexer::mSLAUFA_LOKA(bool _createToken) {
	int _ttype; antlr::RefToken _token; int _begin=text.length();
	_ttype = SLAUFA_LOKA;
	int _saveIndex;
	
	match(static_cast<unsigned char>('}'));
	if ( inputState->guessing==0 ) {
#line 238 "FjolnirEiningLexer.g"
		
				if (0 == nestedSlaufur) {
					selector->pop();
					_ttype = EIN_LOKASLAUFU;
				} else {
					nestedSlaufur--;
				}
			
#line 1448 "FjolnirEiningLexer.cpp"
	}
	if ( _createToken && _token==antlr::nullToken && _ttype!=antlr::Token::SKIP ) {
	   _token = makeToken(_ttype);
	   _token->setText(text.substr(_begin, text.length()-_begin));
	}
	_returnToken = _token;
	_saveIndex=0;
}

void FjolnirEiningLexer::mWS(bool _createToken) {
	int _ttype; antlr::RefToken _token; int _begin=text.length();
	_ttype = WS;
	int _saveIndex;
	
	{ // ( ... )+
	int _cnt77=0;
	for (;;) {
		switch ( LA(1)) {
		case static_cast<unsigned char>('\t'):
		{
			match(static_cast<unsigned char>('\t'));
			break;
		}
		case static_cast<unsigned char>(' '):
		{
			match(static_cast<unsigned char>(' '));
			break;
		}
		case static_cast<unsigned char>('\n'):
		case static_cast<unsigned char>('\r'):
		{
			mEndOfLine(false);
			if ( inputState->guessing==0 ) {
#line 255 "FjolnirEiningLexer.g"
				newline();
#line 1484 "FjolnirEiningLexer.cpp"
			}
			break;
		}
		default:
		{
			if ( _cnt77>=1 ) { goto _loop77; } else {throw antlr::NoViableAltForCharException(LA(1), getFilename(), getLine(), getColumn());}
		}
		}
		_cnt77++;
	}
	_loop77:;
	}  // ( ... )+
	if ( inputState->guessing==0 ) {
#line 255 "FjolnirEiningLexer.g"
		_ttype = antlr::Token::SKIP;
#line 1500 "FjolnirEiningLexer.cpp"
	}
	if ( _createToken && _token==antlr::nullToken && _ttype!=antlr::Token::SKIP ) {
	   _token = makeToken(_ttype);
	   _token->setText(text.substr(_begin, text.length()-_begin));
	}
	_returnToken = _token;
	_saveIndex=0;
}

void FjolnirEiningLexer::mEndOfLine(bool _createToken) {
	int _ttype; antlr::RefToken _token; int _begin=text.length();
	_ttype = EndOfLine;
	int _saveIndex;
	
	{
	if ((LA(1) == static_cast<unsigned char>('\r')) && (LA(2) == static_cast<unsigned char>('\n'))) {
		match("\r\n");
	}
	else if ((LA(1) == static_cast<unsigned char>('\r')) && (true)) {
		match(static_cast<unsigned char>('\r'));
	}
	else if ((LA(1) == static_cast<unsigned char>('\n'))) {
		match(static_cast<unsigned char>('\n'));
	}
	else {
		throw antlr::NoViableAltForCharException(LA(1), getFilename(), getLine(), getColumn());
	}
	
	}
	if ( _createToken && _token==antlr::nullToken && _ttype!=antlr::Token::SKIP ) {
	   _token = makeToken(_ttype);
	   _token->setText(text.substr(_begin, text.length()-_begin));
	}
	_returnToken = _token;
	_saveIndex=0;
}

void FjolnirEiningLexer::mCOMMENT(bool _createToken) {
	int _ttype; antlr::RefToken _token; int _begin=text.length();
	_ttype = COMMENT;
	int _saveIndex;
	
	match(";;");
	{ // ( ... )*
	for (;;) {
		if ((_tokenSet_12.member(LA(1)))) {
			{
			match(_tokenSet_12);
			}
		}
		else {
			goto _loop81;
		}
		
	}
	_loop81:;
	} // ( ... )*
	mEndOfLine(false);
	if ( inputState->guessing==0 ) {
#line 258 "FjolnirEiningLexer.g"
		_ttype = antlr::Token::SKIP; newline();
#line 1562 "FjolnirEiningLexer.cpp"
	}
	if ( _createToken && _token==antlr::nullToken && _ttype!=antlr::Token::SKIP ) {
	   _token = makeToken(_ttype);
	   _token->setText(text.substr(_begin, text.length()-_begin));
	}
	_returnToken = _token;
	_saveIndex=0;
}


const unsigned long FjolnirEiningLexer::_tokenSet_0_data_[] = { 4227858432UL, 8UL, 2281701374UL, 3355443199UL, 4294967295UL, 4294967295UL, 4294967295UL, 4294967295UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL };
// ADGERD_5 ADGERD_4 ADGERD_3 ADGERD_2 ADGERD_1 "annars" "eflok" STAFFASTI 
// STRENGFASTI INNSETN_GILDISV_ADGERD_EDA_TALA FJOLDATALA HEILTALA FLEYTITALA 
// TOMAGILDI AdgerdaStafur EkkiAdgerdaStafur ADGERD EkkiNafnStafur NAFN 
// SLAUFA_OPNA SLAUFA_LOKA 
const antlr::BitSet FjolnirEiningLexer::_tokenSet_0(_tokenSet_0_data_,16);
const unsigned long FjolnirEiningLexer::_tokenSet_1_data_[] = { 4294967288UL, 4294967295UL, 4026531839UL, 4294967295UL, 4294967295UL, 4294967295UL, 4294967295UL, 4294967295UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL };
// NULL_TREE_LOOKAHEAD EIN_SEMIKOMMA EIN_JAFNTOG EIN_MINNA EIN_SVIGIOPNA 
// EIN_SVIGILOKA EIN_ITRUN EIN_INNFLUTT EIN_SAMSETNING EIN_HLIDSETNING 
// EIN_ITRUDHLIDS EIN_OPNASLAUFU EIN_STRENGUR StyriStafur HexStafur NafnStafur 
// EIN_NAFN WS COMMENT EndOfLine EIN_LOKASLAUFU ADGERD_7 ADGERD_6 ADGERD_5 
// ADGERD_4 ADGERD_3 ADGERD_2 ADGERD_1 "annars" "annarsef" "breyta" "eða" 
// "eflok" "ef" "ekki" "fyrir" "innflutt" "kostur" "lykkja" "lykkjulok" 
// "meðan" "og" "skila" "staðvær" "stef" "stofn" "stofnlok" "úr" "út" "val" 
// "vallok" "þá" INNSETNING GILDISVEITING SVIGI_OPNA SVIGI_LOKA SEMIKOMMA 
// KOMMA HORNKLOFI_OPNA HORNKLOFI_LOKA PUNKTUR PUNKTURPUNKTUR STAFFASTI 
// STRENGFASTI INNSETN_GILDISV_ADGERD_EDA_TALA FJOLDATALA HEILTALA FLEYTITALA 
// TOMAGILDI AdgerdaStafur EkkiAdgerdaStafur ADGERD EkkiNafnStafur NAFN 
// SLAUFA_OPNA SLAUFA_LOKA 
const antlr::BitSet FjolnirEiningLexer::_tokenSet_1(_tokenSet_1_data_,16);
const unsigned long FjolnirEiningLexer::_tokenSet_2_data_[] = { 4294967288UL, 4294967279UL, 4294967295UL, 4294967295UL, 4294967295UL, 4294967295UL, 4294967295UL, 4294967295UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL };
// NULL_TREE_LOOKAHEAD EIN_SEMIKOMMA EIN_JAFNTOG EIN_MINNA EIN_SVIGIOPNA 
// EIN_SVIGILOKA EIN_ITRUN EIN_INNFLUTT EIN_SAMSETNING EIN_HLIDSETNING 
// EIN_ITRUDHLIDS EIN_OPNASLAUFU EIN_STRENGUR StyriStafur HexStafur NafnStafur 
// EIN_NAFN WS COMMENT EndOfLine EIN_LOKASLAUFU ADGERD_7 ADGERD_6 ADGERD_5 
// ADGERD_4 ADGERD_3 ADGERD_2 ADGERD_1 "annars" "annarsef" "breyta" "eða" 
// "eflok" "ekki" "fyrir" "innflutt" "kostur" "lykkja" "lykkjulok" "meðan" 
// "og" "skila" "staðvær" "stef" "stofn" "stofnlok" "úr" "út" "val" "vallok" 
// "þá" INNSETNING GILDISVEITING SVIGI_OPNA SVIGI_LOKA SEMIKOMMA KOMMA 
// HORNKLOFI_OPNA HORNKLOFI_LOKA PUNKTUR PUNKTURPUNKTUR STAFFASTI STRENGFASTI 
// INNSETN_GILDISV_ADGERD_EDA_TALA FJOLDATALA HEILTALA FLEYTITALA TOMAGILDI 
// AdgerdaStafur EkkiAdgerdaStafur ADGERD EkkiNafnStafur NAFN SLAUFA_OPNA 
// SLAUFA_LOKA 
const antlr::BitSet FjolnirEiningLexer::_tokenSet_2(_tokenSet_2_data_,16);
const unsigned long FjolnirEiningLexer::_tokenSet_3_data_[] = { 4294967288UL, 4294967291UL, 4026531839UL, 4294967295UL, 4294967295UL, 4294967295UL, 4294967295UL, 4294967295UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL };
// NULL_TREE_LOOKAHEAD EIN_SEMIKOMMA EIN_JAFNTOG EIN_MINNA EIN_SVIGIOPNA 
// EIN_SVIGILOKA EIN_ITRUN EIN_INNFLUTT EIN_SAMSETNING EIN_HLIDSETNING 
// EIN_ITRUDHLIDS EIN_OPNASLAUFU EIN_STRENGUR StyriStafur HexStafur NafnStafur 
// EIN_NAFN WS COMMENT EndOfLine EIN_LOKASLAUFU ADGERD_7 ADGERD_6 ADGERD_5 
// ADGERD_4 ADGERD_3 ADGERD_2 ADGERD_1 "annars" "annarsef" "breyta" "eflok" 
// "ef" "ekki" "fyrir" "innflutt" "kostur" "lykkja" "lykkjulok" "meðan" 
// "og" "skila" "staðvær" "stef" "stofn" "stofnlok" "úr" "út" "val" "vallok" 
// "þá" INNSETNING GILDISVEITING SVIGI_OPNA SVIGI_LOKA SEMIKOMMA KOMMA 
// HORNKLOFI_OPNA HORNKLOFI_LOKA PUNKTUR PUNKTURPUNKTUR STAFFASTI STRENGFASTI 
// INNSETN_GILDISV_ADGERD_EDA_TALA FJOLDATALA HEILTALA FLEYTITALA TOMAGILDI 
// AdgerdaStafur EkkiAdgerdaStafur ADGERD EkkiNafnStafur NAFN SLAUFA_OPNA 
// SLAUFA_LOKA 
const antlr::BitSet FjolnirEiningLexer::_tokenSet_3(_tokenSet_3_data_,16);
const unsigned long FjolnirEiningLexer::_tokenSet_4_data_[] = { 0UL, 67051520UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL };
// "skila" "stofn" "stofnlok" "úr" "út" "val" "vallok" "þá" INNSETNING 
// GILDISVEITING SVIGI_OPNA 
const antlr::BitSet FjolnirEiningLexer::_tokenSet_4(_tokenSet_4_data_,10);
const unsigned long FjolnirEiningLexer::_tokenSet_5_data_[] = { 0UL, 67067904UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL };
// "skila" "staðvær" "stofn" "stofnlok" "úr" "út" "val" "vallok" "þá" INNSETNING 
// GILDISVEITING SVIGI_OPNA 
const antlr::BitSet FjolnirEiningLexer::_tokenSet_5(_tokenSet_5_data_,10);
const unsigned long FjolnirEiningLexer::_tokenSet_6_data_[] = { 0UL, 67051536UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL };
// "ef" "skila" "stofn" "stofnlok" "úr" "út" "val" "vallok" "þá" INNSETNING 
// GILDISVEITING SVIGI_OPNA 
const antlr::BitSet FjolnirEiningLexer::_tokenSet_6(_tokenSet_6_data_,10);
const unsigned long FjolnirEiningLexer::_tokenSet_7_data_[] = { 0UL, 4093684834UL, 1342177281UL, 268435456UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL };
// "breyta" "ekki" "fyrir" "lykkjulok" "meðan" "skila" "stef" SVIGI_LOKA 
// KOMMA HORNKLOFI_OPNA HORNKLOFI_LOKA PUNKTUR PUNKTURPUNKTUR 
const antlr::BitSet FjolnirEiningLexer::_tokenSet_7(_tokenSet_7_data_,10);
const unsigned long FjolnirEiningLexer::_tokenSet_8_data_[] = { 0UL, 67043344UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL };
// "ef" "stofn" "stofnlok" "úr" "út" "val" "vallok" "þá" INNSETNING GILDISVEITING 
// SVIGI_OPNA 
const antlr::BitSet FjolnirEiningLexer::_tokenSet_8(_tokenSet_8_data_,10);
const unsigned long FjolnirEiningLexer::_tokenSet_9_data_[] = { 4294967288UL, 201282461UL, 3221225470UL, 4026531839UL, 4294967295UL, 4294967295UL, 4294967295UL, 4294967295UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL };
// NULL_TREE_LOOKAHEAD EIN_SEMIKOMMA EIN_JAFNTOG EIN_MINNA EIN_SVIGIOPNA 
// EIN_SVIGILOKA EIN_ITRUN EIN_INNFLUTT EIN_SAMSETNING EIN_HLIDSETNING 
// EIN_ITRUDHLIDS EIN_OPNASLAUFU EIN_STRENGUR StyriStafur HexStafur NafnStafur 
// EIN_NAFN WS COMMENT EndOfLine EIN_LOKASLAUFU ADGERD_7 ADGERD_6 ADGERD_5 
// ADGERD_4 ADGERD_3 ADGERD_2 ADGERD_1 "annars" "annarsef" "eða" "eflok" 
// "ef" "innflutt" "kostur" "lykkja" "og" "staðvær" "stofn" "stofnlok" 
// "úr" "út" "val" "vallok" "þá" INNSETNING GILDISVEITING SVIGI_OPNA SEMIKOMMA 
// STAFFASTI STRENGFASTI INNSETN_GILDISV_ADGERD_EDA_TALA FJOLDATALA HEILTALA 
// FLEYTITALA TOMAGILDI AdgerdaStafur EkkiAdgerdaStafur ADGERD EkkiNafnStafur 
// NAFN SLAUFA_OPNA SLAUFA_LOKA 
const antlr::BitSet FjolnirEiningLexer::_tokenSet_9(_tokenSet_9_data_,16);
const unsigned long FjolnirEiningLexer::_tokenSet_10_data_[] = { 0UL, 4093684834UL, 1073741825UL, 268435456UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL };
// "breyta" "ekki" "fyrir" "lykkjulok" "meðan" "skila" "stef" SVIGI_LOKA 
// KOMMA HORNKLOFI_OPNA HORNKLOFI_LOKA PUNKTUR PUNKTURPUNKTUR 
const antlr::BitSet FjolnirEiningLexer::_tokenSet_10(_tokenSet_10_data_,10);
const unsigned long FjolnirEiningLexer::_tokenSet_11_data_[] = { 0UL, 67043328UL, 126UL, 126UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL };
// "stofn" "stofnlok" "úr" "út" "val" "vallok" "þá" INNSETNING GILDISVEITING 
// SVIGI_OPNA STAFFASTI STRENGFASTI INNSETN_GILDISV_ADGERD_EDA_TALA FJOLDATALA 
// HEILTALA FLEYTITALA 
const antlr::BitSet FjolnirEiningLexer::_tokenSet_11(_tokenSet_11_data_,10);
const unsigned long FjolnirEiningLexer::_tokenSet_12_data_[] = { 4294958072UL, 4294967295UL, 4294967295UL, 4294967295UL, 4294967295UL, 4294967295UL, 4294967295UL, 4294967295UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL };
// NULL_TREE_LOOKAHEAD EIN_SEMIKOMMA EIN_JAFNTOG EIN_MINNA EIN_SVIGIOPNA 
// EIN_SVIGILOKA EIN_ITRUN EIN_SAMSETNING EIN_HLIDSETNING EIN_OPNASLAUFU 
// EIN_STRENGUR StyriStafur HexStafur NafnStafur EIN_NAFN WS COMMENT EndOfLine 
// EIN_LOKASLAUFU ADGERD_7 ADGERD_6 ADGERD_5 ADGERD_4 ADGERD_3 ADGERD_2 
// ADGERD_1 "annars" "annarsef" "breyta" "eða" "eflok" "ef" "ekki" "fyrir" 
// "innflutt" "kostur" "lykkja" "lykkjulok" "meðan" "og" "skila" "staðvær" 
// "stef" "stofn" "stofnlok" "úr" "út" "val" "vallok" "þá" INNSETNING GILDISVEITING 
// SVIGI_OPNA SVIGI_LOKA SEMIKOMMA KOMMA HORNKLOFI_OPNA HORNKLOFI_LOKA 
// PUNKTUR PUNKTURPUNKTUR STAFFASTI STRENGFASTI INNSETN_GILDISV_ADGERD_EDA_TALA 
// FJOLDATALA HEILTALA FLEYTITALA TOMAGILDI AdgerdaStafur EkkiAdgerdaStafur 
// ADGERD EkkiNafnStafur NAFN SLAUFA_OPNA SLAUFA_LOKA 
const antlr::BitSet FjolnirEiningLexer::_tokenSet_12(_tokenSet_12_data_,16);

ANTLR_END_NAMESPACE
