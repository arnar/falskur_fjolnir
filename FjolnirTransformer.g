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

class FjolnirTransformer extends TreeParser;

options {
	k = 3;
	importVocab = FjolnirParser;
	buildAST = true;
}

forrit
	: ( veiting )*
	;
	
veiting
	: #(EIN_MINNA EIN_STRENGUR EIN_NAFN eining)
	| #(EIN_JAFNTOG (EIN_STRENGUR | EIN_NAFN) eining)
	;
	
eining
	: #(EIN_ITRUN eining)
	| #(EIN_ITRUDHLIDS eining eining)
	| #(EIN_HLIDSETNING eining eining)
	| #(EIN_SAMSETNING eining eining)
	| #(EIN_INNFLUTT eining eining)
	| EIN_STRENGUR
	| EIN_NAFN
	| #(EIN_OPNASLAUFU (vorpun)*)
	;
	
vorpun
	: #(INNSETNING (NAFN | ADGERD) minnissvaedi)
	;
	
minnissvaedi
	: NAFN | ADGERD | L_BREYTA | L_BOD | stefskilgreining | hlutskilgreining
	;
	
stefskilgreining
	: #(L_STEF nafnaruna nafnaruna skilgreiningar segdaruna (innriTextaeining)?)
	;
	
nafnaruna
	: #(NAFNARUNA (NAFN)*)
	;
	
nafnaruna_ekkitom
	: (NAFN)+
	;
	
/* Eftirfarandi regla sameinar mörg tilvik af "staðvær" og "innflutt"
   breytuyfirlýsingarrunum í eitt tilvik af hvorri */
skilgreiningar!
	{
		antlr::RefAST innflutt = #([L_INNFLUTT,"innflutt"]);
		antlr::RefAST stadvaerar = #([L_STADVAER,"staðvær"]);
	}
	: #(dummy:SKILGREININGAR
		(	#(L_INNFLUTT nr:nafnaruna_ekkitom)
			{ innflutt->addChild(#nr); }
		|	#(L_STADVAER fr:frumstillingaruna)
			{ stadvaerar->addChild(#fr); }
		)*
		{
			## = #([SKILGREININGAR,"skilgreiningar"]);
			##->setFirstChild(innflutt);
			innflutt->setNextSibling(stadvaerar);
			stadvaerar->setNextSibling(antlr::nullAST);
		}
	  )
	;
	
frumstillingaruna
	: ( NAFN | #(GILDISVEITING NAFN segd) )+
	;
	
innriTextaeining
	: #(SLAUFA_OPNA (innraStef)* )
	;
	
innraStef
	: #(INNSETNING NAFN stefskilgreining)
	;
	
hlutskilgreining
	: #(L_HLUTUR nafnaruna #(L_ARFUR (NAFN)?) (bodskilgreining)* )
	;
	
bodskilgreining
	: #(L_BOD NAFN nafnaruna nafnaruna skilgreiningar segdaruna (innriTextaeining)?)
	;
	
segdaruna
	: #(SEGDARUNA (segd)*)
	;
	
segd
	: #(L_OG segd segd)
	| #(L_EDA segd segd)
	| #(L_EKKI segd)
	|! #(ADGERD s1:segd s2:segd)
		{
			#ADGERD->setType(NAFN);
			## = #([SVIGI_OPNA,"("], ADGERD, #([NAFNARUNA,"inn-út"]), #([SEGDARUNA,"aðgerðarviðf"], s1, s2));
		}
	| hlutfylkissegd
	| #(GILDISVEITING NAFN segd)
	|! #(EINUNDARADGERD s:segd)
		{	#EINUNDARADGERD->setType(NAFN);
			## = #([SVIGI_OPNA,"("], EINUNDARADGERD, #([NAFNARUNA,"inn-út"]), #([SEGDARUNA,"einundaraðgerðarviðf"],s));
		}
	|! (#(SVIGI_OPNA ADGERD))=> #(foo:SVIGI_OPNA ADGERD sr:segdaruna)
		{	#ADGERD->setType(NAFN);
			## = #([SVIGI_OPNA,"("], ADGERD, #([NAFNARUNA,"inn-út"]), sr);
		}
	| #(SVIGI_OPNA NAFN nafnaruna segdaruna)
	|! #(LISTI slist:segdaruna)
        {
            /* breytir [a,b,c] í :(;a,:(;b,c)) */
            antlr::RefAST current = #slist->getFirstChild();
			if (current == antlr::nullAST) {
				## = #([TOMAGILDI,"[]"]);
			} else {
				antlr::RefAST subtree = #([SEGDARUNA,"gildisviðf"]);
				antlr::RefAST root = #([SVIGI_OPNA,"("], [NAFN,":"], #([NAFNARUNA,"inn-út"]), subtree);
				while (current != antlr::nullAST) {
					subtree->addChild(current);
					antlr::RefAST temp1 = current->getNextSibling();
					current->setNextSibling(antlr::nullAST);
					current = temp1;
					if (current != antlr::nullAST) {
						antlr::RefAST newSubtree = #([SEGDARUNA,"gildisviðf"]);
						antlr::RefAST temp2 = #([SVIGI_OPNA,"("], [NAFN,":"], #([NAFNARUNA,"inn-út"]), newSubtree);
						subtree->addChild(temp2);
						subtree = newSubtree;
					}
				}
				subtree->addChild( #([TOMAGILDI,"[]"]) );
				## = root;
			}
        }
	| #(L_STOFN segdaruna)
	| #(L_EF segd segdaruna (#(L_ANNARSEF segd segdaruna))* (efannars:segdaruna)?)
		{ if (antlr::nullAST == efannars) ##->addChild(#([SEGDARUNA,"segðaruna"], [TOMAGILDI,"[]"])); }
	| lykkjusegd
	| #(L_VAL segd (#(L_KOSTUR valfasti_range segdaruna))* (valannars:segdaruna)?)
		{ if (antlr::nullAST == valannars) ##->addChild(#([SEGDARUNA,"segðaruna"], [TOMAGILDI,"[]"])); }
	| #(L_SKILA segd)
	| L_UT
	| NAFN
	| STRENGFASTI | STAFFASTI | FJOLDATALA | HEILTALA | FLEYTITALA | TOMAGILDI
	| #(L_STEF NAFN FJOLDATALA FJOLDATALA)
/*	| L_THESSI */
/*	| L_ARFUR  */
	;

hlutfylkissegd!
	: #(HORNKLOFI_OPNA s:segd r:segdaruna)
		{
			antlr::RefAST sr = #([SEGDARUNA], #s);
			int i = 0;
			antlr::RefAST hali = sr->getFirstChild();
			antlr::RefAST c = #r->getFirstChild();
			while (antlr::nullAST != c) {
				hali->setNextSibling(c);
				i++;
				hali = c;
				c = c->getNextSibling();
			}
			char fallnafn[64];
			::_snprintf(fallnafn, 64, "fylkisækja%d", i);
			## = #([SVIGI_OPNA], [NAFN,fallnafn], #([NAFNARUNA]), sr);
		}
	| #(FYLKISGILDISVEITING #(HORNKLOFI_OPNA ss:segd rr:segdaruna) gildi:segd)
		{
			antlr::RefAST sr = #([SEGDARUNA], #ss);
			int i = 0;
			antlr::RefAST hali = sr->getFirstChild();
			antlr::RefAST c = #rr->getFirstChild();
			while (antlr::nullAST != c) {
				hali->setNextSibling(c);
				i++;
				hali = c;
				c = c->getNextSibling();
			}
			hali->setNextSibling(gildi);
			char fallnafn[64];
			::_snprintf(fallnafn, 64, "fylkisetja%d", i);
			## = #([SVIGI_OPNA], [NAFN,fallnafn], #([NAFNARUNA]), sr);
		}
/*	| #(PUNKTUR segd NAFN (#(SVIGI_OPNA segdaruna segdaruna))? ) */
	;

lykkjusegd
	: #(L_LYKKJA segdaruna)
	| #(L_MEDAN segd segdaruna)
	| #(L_FYRIR segdaruna segd segdaruna segdaruna)
		{
			/* breytum "fyrir" lykkju í "meðan" lykkju */
			##->setType(L_MEDAN);
			antlr::RefAST ini = ##->getFirstChild();
			antlr::RefAST tst = ini->getNextSibling();
			antlr::RefAST incr = tst->getNextSibling();
			antlr::RefAST body = incr->getNextSibling();
			##->setFirstChild(tst);
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
				lastInit->setNextSibling(##);
				## = lastInit;
			}
		}
	;
	
lykkjuskilyrdi
	: (#(LYKKJUSKILYRDI L_MEDAN))=> #(LYKKJUSKILYRDI L_MEDAN segd)
	| (#(LYKKJUSKILYRDI L_FYRIR))=> #(LYKKJUSKILYRDI L_FYRIR segdaruna segd segdaruna)
	| LYKKJUSKILYRDI
	;
	
valfasti_range
	: STAFFASTI
	| HEILTALA
	| #(PUNKTURPUNKTUR valfasti_range valfasti_range) /* þáttari skilar aldrei (a..b)..c */
	;