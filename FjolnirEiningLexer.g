header "post_include_hpp" {
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
	genHashLines = true;
}

/** FjolnirEiningLexer er lesgreinir sem vinnur � einingaskilgreiningum
 *  � Fj�lnis-forritum, �.e. �ess k��a sem er innan slaufusviga.
 *  �egar hann s�r lokun � �opnu�um slaufusviga ('}') poppar hann af
 *  "input-selector" hla�anum og me� �v� f�rist stj�rn lesgreiningarinnar
 *  aftur yfir til FjolnirForritLexer, sem lesgreinir t�kn utan
 *  eininganna (s.s. einingara�ger�ir).
 */
class FjolnirEiningLexer extends Lexer;

options {
	k = 2; /* �urfum a� gera greinarmun � ; og ;;, [ og [] og . og .. */
	charVocabulary = '\3'..'\377';
	importVocab = FjolnirForrit;
	exportVocab = Fjolnir;
}

tokens {
	EIN_LOKASLAUFU;
	ADGERD_7; ADGERD_6; ADGERD_5; ADGERD_4; ADGERD_3; ADGERD_2; ADGERD_1;
	
/* Lykilor�. ANTLR s�r sj�lfkrafa um a� �essir fastar ver�i lesgreindir
 * sem �essi lykilor� � sta� nafna.
 */
	L_ANNARS	=	"annars"	;
	L_ANNARSEF	=	"annarsef"	;
	L_BREYTA	=	"breyta"	;
	L_EDA		=	"e�a"		;
	L_EFLOK		=	"eflok"		;
	L_EF		=	"ef"		;
	L_EKKI		=	"ekki"		;
	L_FYRIR		=	"fyrir"		;
	L_INNFLUTT	=	"innflutt"	;
	L_KOSTUR	=	"kostur"	;
	L_LYKKJA	=	"lykkja"	;
	L_LYKKJULOK	=	"lykkjulok"	;
	L_MEDAN		=	"me�an"		;
	L_OG		=	"og"		;
	L_SKILA		=	"skila"		;
	L_STADVAER	=	"sta�v�r"	;
	L_STEF		=	"stef"		;
	L_STOFN		=	"stofn"		;
	L_STOFNLOK	=	"stofnlok"	;
	L_UR		=	"�r"		;
	L_UT		=	"�t"		;
	L_VAL		=	"val"		;
	L_VALLOK	=	"vallok"	;
	L_THA		=	"��"		;

	/* Sleppum Fj�lnir 2 constructum � bili
	L_HLUTUR	=	"hlutur"	;
	L_HLUTLOK	=	"hlutlok"	;
	L_ARFUR		=	"arfur"		;
	L_BOD		=	"bo�"		;
	L_THESSI	=	"�essi"		;
	*/	
}

{
protected:
	int nestedSlaufur;
	antlr::TokenStreamSelector* selector;
	
public:
	void initialize(antlr::TokenStreamSelector * sel) {
		selector = sel;
		nestedSlaufur = 0;
	}
}

/* Virkjar og fr�tekin t�kn */

protected
INNSETNING		: "->"	;

protected
GILDISVEITING	: ":="	;

SVIGI_OPNA		: '('	;
SVIGI_LOKA		: ')'	;
SEMIKOMMA		: ';'	;
KOMMA			: ','	;
HORNKLOFI_OPNA	: '['	;
HORNKLOFI_LOKA	: ']'	;
PUNKTUR			: '.'	;
PUNKTURPUNKTUR	: ".."	;

/* Lesfastar */
	
STAFFASTI
	: '\''! ( ~'\\' | StyriStafur ) '\''!
	;

STRENGFASTI
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
		
/* �essi regla notar "Syntactic predicate" � ANTLR til a� sko�a
 * fram � strauminn og taka �kv�r�un um hvort vi� lesgreinum heilt�lu,
 * fleytit�lu, "->", ":=", a�ger�arnafn e�a fj�ldat�lu
 *
 * �etta gerir okkur kleyft a� lesgreina r�tt fyrirb�ri eins og "---",
 * "->>", ":=+-++" o.s.frv.
 */
INNSETN_GILDISV_ADGERD_EDA_TALA
	{ int ft; }
	: ( ('-')* ('0'..'9')+ '.' )=> FLEYTITALA {$setType(FLEYTITALA); }
	| ( ('-')* ('0'..'9' | '$'))=> HEILTALA {$setType(HEILTALA);}
	| ( "->" EkkiAdgerdaStafur)=> INNSETNING {$setType(INNSETNING);}
	| ( ":=" EkkiAdgerdaStafur)=> GILDISVEITING {$setType(GILDISVEITING);}
	| ft=ADGERD {$setType(ft);}
	| FJOLDATALA {$setType(FJOLDATALA);}
	;
		
protected
FJOLDATALA
	: '$' (HexStafur)+
	| ('0'..'9')+
	;

protected	
HEILTALA
	: ('-')* FJOLDATALA
	;
	
protected
FLEYTITALA
	: ('-')* ('0'..'9')+ '.' ('0'..'9')* (('e'|'E') ('+'|'-')? ('0'..'9')+)?
	;
	
TOMAGILDI
	: "[]"
	;
	
	
/* N�fn og a�ger�an�fn */
	
protected
AdgerdaStafur
	: ( '+' | '-' | '*' | '/' | '%' | '!' | '&' | '='
	  | '?' | '<' | '>' | '|' | ':' | '^' | '@' )
	;
	
/* Hj�lparregla f. predicates */
protected
EkkiAdgerdaStafur
	: ~( '+' | '-' | '*' | '/' | '%' | '!' | '&' | '='
	  | '?' | '<' | '>' | '|' | ':' | '^' | '@' )
	;
	
protected
ADGERD returns [int forgangsToken]
	: (AdgerdaStafur)+
		{
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
			case ':': forgangsToken = ADGERD_2; break; /* vinstri tengin a�ger� */
			default:  forgangsToken = ADGERD_1; break;
			}
		}
	| '\\'! ( NafnStafur | AdgerdaStafur )+ { forgangsToken = ADGERD_1; }
	;

protected
NafnStafur
	: ~( ' ' | '(' | ')' | '[' | ']' | '{' | '}' | ',' | ';' | '.'
	   | '+' | '-' | '*' | '/' | '%' | '!' | '&' | '=' | '?' | '<' | '>' | '|' | ':' | '^' | '@'
	   | '\''| '\\'| '$'  /* vi�b�t arnar */
	   | '\3'..'\31' | '0'..'9' | '"' )
	;
	
protected
EkkiNafnStafur
	: ( ' ' | '(' | ')' | '[' | ']' | '{' | '}' | ',' | ';' | '.'
	   | '+' | '-' | '*' | '/' | '%' | '!' | '&' | '=' | '?' | '<' | '>' | '|' | ':' | '^' | '@'
	   | '\'' /* vi�b�t arnar */
	   | '\3'..'\31' | '0'..'9' | '"' )
	;
	
NAFN
	: NafnStafur (NafnStafur | '0'..'9' )*
	;

	
/* Lok einingar og innri einingar */

SLAUFA_OPNA
	: '{' { nestedSlaufur++; }
	;
	
SLAUFA_LOKA
	: '}' {
		if (0 == nestedSlaufur) {
			selector->pop();
			$setType(EIN_LOKASLAUFU);
		} else {
			nestedSlaufur--;
		}
	};

/*EIN_LOKASLAUFU
	: '}' { selector->pop(); }
	;*/


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
		

	
