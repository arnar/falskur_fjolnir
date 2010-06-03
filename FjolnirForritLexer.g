header "pre_include_hpp" {
#include <antlr/TokenStreamSelector.hpp>
#include "utils.h"
}

header "pre_include_cpp" {
#pragma warning( disable : 4251 4267 4101 4267 )
}

options {
	language="Cpp";
	namespace="ff";
	namespaceStd="std";
	namespaceAntlr="antlr";
}

/** FjolnirForritLexer er lesgreinir sem vinnur �
 *  Fj�lnis-forritum utan eininganna sj�lfra. Hann
 *  lesgreinir einingara�ger�ir en um lei� og hann rekst
 *  � einingu, sem afmarkast af opnum slaufusviga ('{')
 *  �tir hann einingalesgreini (FjolnirEiningLexer) � stafla
 *  TokenStreamSelector eintaksins.
 */
class FjolnirForritLexer extends Lexer;
options {
	k = 2;
	charVocabulary = '\3'..'\377';
	exportVocab = FjolnirForrit;
}

{
protected:
	antlr::TokenStreamSelector* selector;

public:
	void initialize(antlr::TokenStreamSelector * sel) {
		selector = sel;
	}
}

EIN_SEMIKOMMA
	: ';'
	;
	
EIN_JAFNTOG
	: '='
	;
	
EIN_MINNA
	: '<'
	;
	
EIN_SVIGIOPNA
	: '('
	;
	
EIN_SVIGILOKA
	: ')'
	;


/* Einingaa�ger�ir */
	
EIN_ITRUN		:	'!' ;
EIN_INNFLUTT	:	'*' ;
EIN_SAMSETNING	:	':' ;
EIN_HLIDSETNING	:	'+' ;
EIN_ITRUDHLIDS	:	'&' ;

EIN_OPNASLAUFU
	: '{' { selector->push("eininglexer"); }
	;

/* N�fn og strengir */
EIN_STRENGUR
	: '"'! ( ~('"'|'\\') | StyriStafur[false] )* '"'!
	;

protected
StyriStafur [bool expand=true]
	: ( '\\' ~'$' | "\\$" HexStafur HexStafur )
		{
			std::string temp;
			if (expand) {
				temp = $getText;
				$setText(styriStafur(temp));
			}
		}
	;
	
protected
HexStafur
	: '0'..'9' | 'A'..'F' | 'a'..'f'
	;

protected
NafnStafur
	: ~( ' ' | '(' | ')' | '[' | ']' | '{' | '}' | ',' | ';' | '.'
	   | '+' | '-' | '*' | '/' | '%' | '!' | '&' | '=' | '?' | '<' | '>' | '|' | ':' | '^' | '@'
	   | '\3'..'\31' | '0'..'9' | '"' )
	;
	
EIN_NAFN
	: NafnStafur (NafnStafur /* skv. handb�k eru t�lust. nafnst. | '0'..'9' */ )*
	;
	

/* Whitespace og comment */

WS
	: ('\t' | ' ' | EndOfLine {newline();} )+ {$setType(antlr::Token::SKIP);};

COMMENT
	: ";;" (~('\n' | '\r'))* EndOfLine {$setType(antlr::Token::SKIP); newline(); };


/* Hj�lparreglur */

protected
EndOfLine
	: (options{generateAmbigWarnings = false;}:
		"\r\n"
	|	'\r'
	|	'\n'
	);
		
	
