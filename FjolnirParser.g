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

class FjolnirParser extends Parser;

options {
	k = 3;
	importVocab = Fjolnir;
	buildAST = true;
}
tokens {
	NAFNARUNA; SKILGREININGAR; SEGDARUNA; LYKKJUSKILYRDI;
	EINUNDARADGERD; LISTI; FYLKISGILDISVEITING;
}

forrit
	: ( (forritsVeiting | einingarVeiting) EIN_SEMIKOMMA! )* EOF
	;
	
forritsVeiting
	: EIN_STRENGUR EIN_MINNA^ EIN_NAFN eining
	;
	
einingarVeiting
	: (EIN_STRENGUR | EIN_NAFN) EIN_JAFNTOG^ eining
	;
	
eining
	: einItrunarhlidsett
	;
	
einItrunarhlidsett
	: einHlidsett (EIN_ITRUDHLIDS^ einHlidsett)*
	;
	
einHlidsett
	: einSamsett (EIN_HLIDSETNING^ einSamsett)*
	;
	
einSamsett
	: einInnflutt (EIN_SAMSETNING^ einInnflutt)*
	;
	
einInnflutt
	: einItrud (EIN_INNFLUTT^ einItrud)*
	;
	
einItrud
	: EIN_ITRUN^ einItrud | grunnEining
	;
	
grunnEining
	: EIN_STRENGUR
	| EIN_NAFN
	| EIN_SVIGIOPNA! eining EIN_SVIGILOKA!
	| EIN_OPNASLAUFU^ (vorpun)* EIN_LOKASLAUFU!
	;
	
protected
adgerd
	: (ADGERD_1 | ADGERD_2 | ADGERD_3 | ADGERD_4 | ADGERD_5 | ADGERD_6 | ADGERD_7)
		{ #adgerd->setType(ADGERD); }
	;
	
vorpun
	: (NAFN | adgerd) INNSETNING^
		( NAFN | adgerd | L_BREYTA /*| L_BOD*/ | stefskilgreining /*| hlutskilgreining*/ )
	;
	
stefskilgreining
	: L_STEF^ SVIGI_OPNA! nafnaruna SEMIKOMMA! nafnaruna SVIGI_LOKA!
		skilgreiningar
		L_STOFN! segdaruna L_STOFNLOK!
		(innriTextaeining)?
	;
	
nafnaruna
	: (NAFN (KOMMA! NAFN)*)?
		{#nafnaruna = #([NAFNARUNA,"nafnaruna"], #nafnaruna); }
	;
	
skilgreiningar
	: (skilgr_innflutt | skilgr_stadvaer)*
		{ #skilgreiningar = #([SKILGREININGAR,"skilgreiningar"], #skilgreiningar); }
	;
	
skilgr_innflutt
	: L_INNFLUTT^ nafnaruna_ekkitom
	;
	
skilgr_stadvaer
	: L_STADVAER^ frumstillingaruna
	;

nafnaruna_ekkitom
	: NAFN (KOMMA! NAFN)*
	;
	
frumstillingaruna
	: (NAFN | skilgrOgGildisv) (KOMMA! (NAFN | skilgrOgGildisv))*
	;
	
skilgrOgGildisv
	: NAFN GILDISVEITING^ segd
	;
	
innriTextaeining
	: SLAUFA_OPNA^ (innraStef)* SLAUFA_LOKA!
	;
	
innraStef
	: NAFN INNSETNING^ stefskilgreining
	;

/*	
hlutskilgreining
	: L_HLUTUR^ SVIGI_OPNA! SEMIKOMMA! nafnaruna SVIGI_LOKA!
		arfskilgreining
		(bodskilgreining)*
		L_HLUTLOK!
	;
		
arfskilgreining
	: (L_ARFUR! NAFN)? {#arfskilgreining = #([L_ARFUR,"arfur"], #arfskilgreining); }
	;
	
bodskilgreining
	: L_BOD^ NAFN SVIGI_OPNA! nafnaruna SEMIKOMMA! nafnaruna SVIGI_LOKA!
		skilgreiningar
		L_STOFN! segdaruna L_STOFNLOK!
		(innriTextaeining)?
	;
*/
	
segdaruna
	: (segd (KOMMA! segd)*)?
		{#segdaruna = #([SEGDARUNA,"segðaruna"], #segdaruna); }
	;

segd
	: ogSegd ( options {greedy=true;}: L_EDA^ ogSegd)*
	;
	
ogSegd
	: ekkiSegd ( options {greedy=true;}: L_OG^ ekkiSegd)*
	;
	
ekkiSegd
	: L_EKKI^ ekkiSegd | adgerd_1
	;

/* virkjar og forgangur þeirra */

adgerd_1
	: adgerd_2 ( options {greedy=true;}: ADGERD_1^ adgerd_2 { ##->setType(ADGERD); } )*
	;
	
adgerd_2
	/* vinstri tengið */
	: adgerd_3 ( options {greedy=true;}: ADGERD_2^ adgerd_2 { ##->setType(ADGERD); } )?
	;
	
adgerd_3
	: adgerd_4 ( options {greedy=true;}: ADGERD_3^ adgerd_4 { ##->setType(ADGERD); } )*
	;
	
adgerd_4
	: adgerd_5 ( options {greedy=true;}: ADGERD_4^ adgerd_5 { ##->setType(ADGERD); } )*
	;
	
adgerd_5
	: adgerd_6 ( options {greedy=true;}: ADGERD_5^ adgerd_6 { ##->setType(ADGERD); } )*
	;

adgerd_6
	: adgerd_7 ( options {greedy=true;}: ADGERD_6 adgerd_7 { ##->setType(ADGERD); } )*
	;
	
adgerd_7
	: hlutfylkissegd ( options {greedy=true;}: ADGERD_7^ hlutfylkissegd { ##->setType(ADGERD); } )*
	;

hlutfylkissegd
	: (smasegd HORNKLOFI_OPNA)=> smasegd
		( options {greedy=true;}: HORNKLOFI_OPNA^ segdaruna HORNKLOFI_LOKA! )+
		( GILDISVEITING^ segd {#GILDISVEITING->setType(FYLKISGILDISVEITING); } )?
	| smasegd
	;
	
/* Fyrir Fjölnir 2 samhæfingu:
hlutfylkissegd
	: smasegd ( (HORNKLOFI_OPNA | PUNKTUR)=>
		( options {greedy=true;}:
		  HORNKLOFI_OPNA^ segdaruna HORNKLOFI_LOKA!
		| PUNKTUR^ NAFN
			(SVIGI_OPNA^ segdaruna SEMIKOKMMA! segdaruna SVIGI_LOKA! )?
		)+
		( GILDISVEITING^ segd )?
	)?
	;
*/
	
smasegd
	: nafnsegd
	| (adgerd SVIGI_OPNA)=> adgerd SVIGI_OPNA^ SEMIKOMMA! segdaruna SVIGI_LOKA!
	| einundaradgerd
	| efsegd
	| HORNKLOFI_OPNA^ segdaruna HORNKLOFI_LOKA! { ##->setType(LISTI); }
	| lykkjusegd
	| L_STOFN^ segdaruna L_STOFNLOK!
	| valsegd
	| L_UT
	| L_SKILA^ segd
	| SVIGI_OPNA! segd SVIGI_LOKA!
	| STRENGFASTI
	| STAFFASTI | FJOLDATALA | HEILTALA | FLEYTITALA | TOMAGILDI
	| L_STEF^ NAFN SVIGI_OPNA! FJOLDATALA SEMIKOMMA! FJOLDATALA SVIGI_LOKA!
/*	| L_THESSI */
/*	| L_ARFUR */
	;
	
einundaradgerd
	:
	( ADGERD_1^ | ADGERD_2^ | ADGERD_3^ | ADGERD_4^ | ADGERD_5^ | ADGERD_6^ | ADGERD_7^ )
		smasegd { #einundaradgerd->setType(EINUNDARADGERD); }
	;
		
nafnsegd
	: NAFN
	| NAFN GILDISVEITING^ segd
	| NAFN SVIGI_OPNA^ nafnaruna SEMIKOMMA! segdaruna SVIGI_LOKA!
	;
	
lykkjusegd
	: L_LYKKJA^ segdaruna L_LYKKJULOK!
	| L_MEDAN^ segd L_LYKKJA! segdaruna L_LYKKJULOK!
	| L_FYRIR^ SVIGI_OPNA! segdaruna SEMIKOMMA! segd SEMIKOMMA! segdaruna SVIGI_LOKA!
		L_LYKKJA! segdaruna L_LYKKJULOK!
	;
	
efsegd
	: L_EF^ segd L_THA! segdaruna (annarsef)* (L_ANNARS! segdaruna)? L_EFLOK!
	;
	
annarsef
	: L_ANNARSEF^ segd L_THA! segdaruna
	;
	
valsegd
	: L_VAL^ segd L_UR! (valkostur)* (L_ANNARS! segdaruna)? L_VALLOK!
	;
	
valkostur
	: L_KOSTUR^ valfasti_range L_THA! segdaruna
	;
	
valfasti_range
	: valfasti (PUNKTURPUNKTUR^ valfasti)?
	;
	
/* má ekki vera fjöldatala hér líka? */
valfasti
	: STAFFASTI | HEILTALA
	;
	