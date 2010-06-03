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

/** FjolnirForritLexer er lesgreinir sem vinnur á
 *  Fjölnis-forritum utan eininganna sjálfra. Hann
 *  lesgreinir einingaraðgerðir en um leið og hann rekst
 *  á einingu, sem afmarkast af opnum slaufusviga ('{')
 *  ýtir hann einingalesgreini (FjolnirEiningLexer) á stafla
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


/* Einingaaðgerðir */
	
EIN_ITRUN		:	'!' ;
EIN_INNFLUTT	:	'*' ;
EIN_SAMSETNING	:	':' ;
EIN_HLIDSETNING	:	'+' ;
EIN_ITRUDHLIDS	:	'&' ;

EIN_OPNASLAUFU
	: '{' { selector->push("eininglexer"); }
	;

/* Nöfn og strengir */
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
	: NafnStafur (NafnStafur /* skv. handbók eru tölust. nafnst. | '0'..'9' */ )*
	;
	

/* Whitespace og comment */

WS
	: ('\t' | ' ' | EndOfLine {newline();} )+ {$setType(antlr::Token::SKIP);};

COMMENT
	: ";;" (~('\n' | '\r'))* EndOfLine {$setType(antlr::Token::SKIP); newline(); };


/* Hjálparreglur */

protected
EndOfLine
	: (options{generateAmbigWarnings = false;}:
		"\r\n"
	|	'\r'
	|	'\n'
	);
		
	
