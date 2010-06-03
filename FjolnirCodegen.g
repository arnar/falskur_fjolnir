header "pre_include_cpp" {
#pragma warning( disable : 4251 4267 4101 4267 )
}

header "post_include_hpp" {
#include "stef.h"
#include "segd.h"
#include "segdir.h"
}

header "post_include_cpp" {

#include "myast.h"
//#define loc(s,t) if (NULL != static_cast<ff::ffAST*>(t.get().ptr)) \
//					(s)->setLine((static_cast<ff::ffAST*>(t.get().ptr))->getLine());
#define loc(s,t) (s)->setLine((static_cast<ffAST*>(t.get()))->getLine());

using namespace std;
}

options {
	language="Cpp";
	namespace="ff";
	namespaceStd="std";
	namespaceAntlr="antlr";
	genHashLines=true;
}

class FjolnirCodegen extends TreeParser;

options {
	k = 2;
	importVocab = FjolnirTransformer;
	buildAST = false;
}

{

public:
	void setOutput(std::ostream& out) { this->out = &out; }
	
private:
	std::ostream *out;
}

forrit
	: ( veiting )*
	;
	
veiting
	: #(EIN_MINNA nafn:EIN_STRENGUR start:EIN_NAFN
		{
			*out << '"' << nafn->getText() << "\" < " << start->getText() << endl;
		}
		eining { *out << ";"; } )
	| #(EIN_JAFNTOG	(s:EIN_STRENGUR {*out << '"' << s->getText() << '"';} | n:EIN_NAFN {*out << n->getText();} )
		{
			*out << " =" << endl;
		}
		eining { *out << ";"; } )
	;
	
eining
	: #(EIN_ITRUN {*out << "(!";} eining {*out << ")";} )
	| #(EIN_ITRUDHLIDS  {*out << "(";} eining {*out << " & ";} eining {*out << ")";} )
	| #(EIN_HLIDSETNING {*out << "(";} eining {*out << " + ";} eining {*out << ")";} )
	| #(EIN_SAMSETNING  {*out << "(";} eining {*out << " : ";} eining {*out << ")";} )
	| #(EIN_INNFLUTT    {*out << "(";} eining {*out << " * ";} eining {*out << ")";} )
	| EIN_STRENGUR  { *out << '"' << #EIN_STRENGUR->getText() << '"'; }
	| EIN_NAFN  { *out << #EIN_NAFN->getText(); }
	| #(EIN_OPNASLAUFU
		{ *out << endl << "{" << endl; }
		(vorpun)*
		{ *out << endl << "}" << endl; }
	  )
	;
	
vorpun
{ string nafn; }
	: #(INNSETNING
		( NAFN {*out << (nafn = #NAFN->getText());}
		| ADGERD {*out << (nafn = #ADGERD->getText());}
		)  { *out << " -> "; }
		minnissvaedi[nafn] )
	;
	
minnissvaedi [string& nafn]
{ Stef* s=NULL; }
	: NAFN			{ *out << #NAFN->getText() << endl; }
	| ADGERD		{ *out << #ADGERD->getText() << endl; }
	| L_BREYTA		{ *out << "breyta" << endl; }
	| s=stefskilgreining[nafn] {
		*out << '@' << s->getFjoldiVidfanga(AFRIT)
		     << ',' << s->getFjoldiVidfanga(GILDI) << "@(" << endl;
		s->generate(*out);
		*out << ')' << endl;
	}
	;
	
stefskilgreining[string& nafn] returns [Stef* ret]
{ Segd* s; Stef* stef; }
	: #(L_STEF			{ ret = new Stef(nafn); }
		#(NAFNARUNA (a:NAFN {
			if (ret->isLocallyDefined(a->getText())) {
				cerr << "Nafnið \"" << a->getText() << "\" er þegar skilgreint." << endl;
				exit(1);
			}
			ret->addVidfang(AFRIT,a->getText());
		} )* )
		#(NAFNARUNA (b:NAFN {
			if (ret->isLocallyDefined(b->getText())) {
				cerr << "Nafnið \"" << b->getText() << "\" er þegar skilgreint." << endl;
				exit(1);
			}
			ret->addVidfang(GILDI,b->getText());
		} )* )
		#(SKILGREININGAR
			#(L_INNFLUTT (c:NAFN {
				ret->addInnflutt(c->getText());
			} )* )
			#(L_STADVAER
				( d:NAFN	{
					if (ret->isLocallyDefined(d->getText())) {
						cerr << "Nafnið \"" << d->getText() << "\" er þegar skilgreint." << endl;
						exit(1);
					}
					ret->addStadvaer(d->getText());
				}
				| #(GILDISVEITING e:NAFN s=segd) {
					if (ret->isLocallyDefined(e->getText())) {
						cerr << "Nafnið \"" << e->getText() << "\" er þegar skilgreint." << endl;
						exit(1);
					}
					ret->addStadvaer(e->getText(), s); 
				}
				)*
			)
		)
		#(SEGDARUNA (s=segd {ret->addSegd(s);} )*)
		(#(SLAUFA_OPNA
			(#(INNSETNING f:NAFN stef=stefskilgreining[f->getText()]
				{
					if (ret->isLocallyDefinedUndirstef(stef->getNafn(),
							stef->getFjoldiVidfanga(AFRIT), stef->getFjoldiVidfanga(GILDI))) {
						cerr << "Undirstefið \"" << stef->getNafn() << "\" er þegar skilgreint." << endl;
						exit(1);
					}
					ret->addUndirstef(stef);
				}
			))*
		))?
	)
	;
	
	/*
nafnaruna
	: #(NAFNARUNA (NAFN)*)
	;
	
skilgreiningar
	: #(SKILGREININGAR #(L_INNFLUTT (NAFN)*) #(L_STADVAER frumstillingaruna))
	;
	
frumstillingaruna
	: ( NAFN | #(GILDISVEITING NAFN segd) )*
	;
	
innriTextaeining
	: #(SLAUFA_OPNA (innraStef)* )
	;
	
innraStef
	: #(INNSETNING NAFN stefskilgreining)
	;
	
segdaruna
	: #(SEGDARUNA (segd)*)
	;
*/
	
segd returns [Segd* rets=NULL]
{ Segd* a=NULL; Segd* b=NULL; }
	: #(L_OG a=segd b=segd) { rets = new OgSegd(a,b); loc(rets,#L_OG); }
	| #(L_EDA a=segd b=segd) { rets = new EdaSegd(a,b); loc(rets,#L_EDA); }
	| #(L_EKKI a=segd) { rets = new EkkiSegd(a); loc(rets, #L_EKKI); }
	| #(GILDISVEITING NAFN a=segd) { rets = new GildisveitingarSegd(#NAFN->getText(), a); loc(rets,#GILDISVEITING); }
	| #(SVIGI_OPNA NAFN { KallSegd* kall = new KallSegd(#NAFN->getText()); }
		#(NAFNARUNA (NAFN {kall->addAfritsVidfang(#NAFN->getText());} )*)
		#(SEGDARUNA (a=segd {kall->addGildisVidfang(a);} )*)
	)	{ rets = kall; loc(rets, #SVIGI_OPNA); }
	| #(L_STOFN		{ StofnSegd* stofn = new StofnSegd(); }
		#(SEGDARUNA (a=segd {stofn->addSegd(a);} )* )
	)	{ rets = (Segd*) stofn; loc(rets,#L_STOFN); }
	| #(L_EF a=segd { EfSegd* ef = new EfSegd(); ef->addSkilyrdi(a); }
		#(SEGDARUNA (a=segd {ef->addSegd(a);} )* )
		(#(L_ANNARSEF a=segd {ef->addSkilyrdi(a);}
			#(SEGDARUNA (a=segd {ef->addSegd(a);} )* )
		))*
		#(SEGDARUNA (a=segd {ef->addAnnarsSegd(a);} )* )
	)	{ rets = (Segd*) ef; loc(rets,#L_EF); }
	| rets=lykkjusegd
	| #(L_VAL { cerr << "Valsegð er ekki útfærð." << endl; exit(1); }
		/* segd (#(L_KOSTUR valfasti_range segdaruna))* segdaruna */ )
	| #(L_SKILA a=segd) { rets = new SkilaSegd(a); loc(rets,#L_SKILA) }
	| L_UT { rets = new UtSegd(); loc(rets,#L_UT); }
	| NAFN { rets = new NafnSegd(#NAFN->getText()); loc(rets,#NAFN); }
	| STRENGFASTI { rets = new StrengSegd(#STRENGFASTI->getText()); loc(rets,#STRENGFASTI); }
	| STAFFASTI   { rets = new HeiltoluSegd(#STAFFASTI->getText()[0]); loc(rets,#STAFFASTI) }
	| FJOLDATALA  { rets = new HeiltoluSegd(#FJOLDATALA->getText()); loc(rets,#FJOLDATALA); }
	| HEILTALA    { rets = new HeiltoluSegd(#HEILTALA->getText()); loc(rets,#HEILTALA); }
	| FLEYTITALA  { rets = new FleytitoluSegd(#FLEYTITALA->getText()); loc(rets,#FLEYTITALA); }
	| TOMAGILDI   { rets = new TomaSegd(); loc(rets,#TOMAGILDI); }
	| #(L_STEF NAFN FJOLDATALA FJOLDATALA)
		{ cerr << "Stefgildi eru ekki útfærð." << endl; exit(1); }
	;

lykkjusegd returns [Segd* rets]
{ Segd* a; }
	: #(L_LYKKJA { LykkjuSegd* lykkja = new LykkjuSegd(); }
		#(SEGDARUNA (a=segd {lykkja->addSegd(a);} )* )
	)	{ rets = (Segd*) lykkja; loc(rets,#L_LYKKJA); }
	| #(L_MEDAN a=segd { MedanSegd* medan = new MedanSegd(a); }
		#(SEGDARUNA (a=segd {medan->addSegd(a);} )* )
	)	{ rets = (Segd*) medan; loc(rets,#L_MEDAN); }
	;

//valfasti_range
//	: STAFFASTI
//	| HEILTALA
//	| #(PUNKTURPUNKTUR valfasti_range valfasti_range) /* þáttari skilar aldrei (a..b)..c */
//	;
