#ifndef __stef_h__
#define __stef_h__

#include <vector>
#include <map>
#include <list>
#include <string>
#include <iostream>

#include "segd.h"
#include "smali.h"

#include <stack>

namespace ff {

using namespace std;

typedef enum {
	AFRIT = 1,
	GILDI = 2
} vidfangsTegund;

typedef list<pair<string, int> > symtab;
typedef list<string> stringlist;

struct symloc {
	unsigned int foldun;
	int offset;
	symloc() : foldun(0), offset(0) {}
};

class Stef {
	string _nafn;
	symtab _afritsVidfong;
	symtab _gildisVidfong;
	symtab _localBreytur;
	list<string> _innfluttarBreytur;

	list<Segd*> _frumstillingar;
	list<Segd*> _segdaruna;

	int _stackSize;
	int _fjoldiAfritsVidfanga;
	int _fjoldiGildisVidfanga;
	int _fjoldiLocalBreyta;
	int _steflokLabel;

	Stef* _parent;
	int _nestingLevel;
	map<string, Stef*> _undirStef;

	stack<int> _stackMarks; /* fyrir lykkjur */
	stack<int> _utLabels;   /* ditto */

public:
	Stef(string& nafn)
		: _nafn(nafn), _parent(NULL), _nestingLevel(0),
		  _stackSize(0), _fjoldiAfritsVidfanga(0), _fjoldiGildisVidfanga(0),
		  _fjoldiLocalBreyta(0), _steflokLabel(newlabel())
	{}
	virtual ~Stef();

	/** Nafn stefsins.
	 \return nafn stefsins.
	 */
	const string& getNafn() const { return _nafn; }

	/** Lokamerki stefsins.
	 \return merki sem er skrifað í þulu strax á undan eftirmála
	 */
	int getEndLabel() const { return _steflokLabel; }

	/** Athugar hvort nafn er skilgreint inni í stefinu.
	 \return true þ.þ.a.a. nafn er skilgreint viðfangs eða breytunafn
	 */
	bool isDefined(const string& nafn);

	/** Athugar hvort undirstef er skilgreint innan í stefinu
	 \return 0 ef ekki er til undirstef sem er hægt að kalla í frá núverandi
	   staðsetningu í þulu, annars földunarhæð viðkomandi undirstefs.
	 */
	int isDefinedUndirstef(const string& nafn, int n, int m);

	/** Skilar nafni á merki undirfalls 
	 \pre isDefinedUndirstef(...) == true
	 */
	string getUndirstefLabel(const string& nafn, int n, int m);

	/** Bætir við viðfangi af tegund t með nafni nafn.
	 \pre isLocallyDefined(nafn) == false
	 \post Stefið þekkir staðsetningu viðfangsins á stafla
	 */
	void addVidfang(vidfangsTegund t, string& nafn);

	/** Sækir fjölda þegar skilgreindra viðfanga.
	 \return fjölda þegar skilgreindra viðfanga af tegund t
	 */
	int getFjoldiVidfanga(vidfangsTegund t);

	/** Bætir við nafni innfluttrar breytu
	 \pre isLocallyDefined(nafn) == false
	 \post Stefið þekkir nafn sem nafn innfluttrar breytu
	 */
	void addInnflutt(string& nafn);

	/** Bætir við staðværri breytu, hugsanlega með frumstillingu
	 \pre isLocallyDefined(nafn) == false og ef
	      frumstilling er annað hvort null eða bendir á löglega Segð
	 \post Stefið þekkir nafn sem breytunafn ásamt staðsetningu á stafla,
	       og mun skrifa út þulu til að frumstilla breytuna. Þetta stef
		   mun sjá um að losa minni fyrir frumstillinguna
     */
	void addStadvaer(string& nafn, Segd* frumstilling = NULL);

	/** Bætir við undirstefi undir þetta stef.
	 \pre isLocallyDefinedUndirstef(stef->_nafn) == false og stef er
	      bendir á löglegt Stef.
	 \post Þetta stef þekkir nafn sem nafn undirstefs og mun skrifa út
	       þulu þess. Kallað hefur verið í stef->setParent með réttu viðf.
		   Þetta Stef mun sjá um að losa minni sem stef bendir í.
	 */
	void addUndirstef(Stef* stef);

	/** Bætir við segð í stefið.
	 \pre s er bendir í löglega Segð
	 \post stefið mun skrifa út þulu segðarinnar strax á eftir þulum þeirra
	       segða sem þegar hafa verið settar inn með þessu boði. Kallað hefur
		   verið í s->setUmlykjandiStef. Þetta stef mun sjá um að losa minni
		   sem stef bendir í
	 */
	void addSegd(Segd* s);

	/** Setur bendi í stefið í næstu földunarhæð fyrir ofan.
	 \pre parent er bendir í löglegt Stef
	 \post Þetta stef inniheldur bendi í parent og heiltölu földunardýpt, sem
	       er einum hærri en samsvarandi tala í parent, þetta stef um sjá
		   um að losa minni sem s bendir í
	 */
	void setParent(Stef* parent);
	
	/** Sækir földunardýpt þessa falls.
	 \return földunardýpt þessa falls (0 ef þetta er grunnfall)
	 */
	int getNestingLevel();

	/** Sækir staðsetningu viðfangs eða breytu á stafla.
	 \pre isDefined(name) == true
	 \return symloc struct sem inniheldur tölur földun og offset. Földun
	   segir til um hvað þarf að fara upp um margar vakningarfærslur til að finna
	   viðkomandi breytu, og offset inniheldur staðsetningu breytunnar
	   m.v. grunnstak (BP) þeirrar vakningarfærslu í bætum
	   Ef name er nafn á innfluttri breytu skilar fallið sérgildinu {0,0}
	 */
	symloc getSymbolLocation(const string& name);

	/** Skilar streng sem auðkennir fallið.
	 \return streng sem auðkennir fallið út frá nafni þess, fjölda viðfanga að hvorri
	  gerð og næsta falli fyrir ofan í földunarhæð.
	 */
	string getInternalNafn();

	/** Gefur fallinu tilkynningu um að þula breyti stærð staflans.
	 \post Stærð staflans hefur breyst um d bæti.
	 */
	void stackDelta(int d);

	/** Sækir stærð staflans m.v. þá þulu sem hefur verið skrifuð út.
	 \return Stærð staflans frá síðustu staðværu breytu í bætum eftir að
	   sú þula sem hefur verið skrifuð út hefur keyrt.
	 */
	int getStackSize();

	/** Setur núverandi staflastærð efst á stafla.
	  \post næsta kall í lastStackMark mun skila núverandi staflastærð
	  */
	void markStack();

	/** Gleymir síðasta gildi úr markStack.
	  \pre Kallað hefur verið oftar í markStack en unmarkStack
	  \post næsta gildi úr lastStackMark mun verða stærð staflans við þarsíðasta markStack
	  */
	void unmarkStack();

	/** Sækir stærð staflans við síðasta markStack
	 \return Stærð staflans þegar kallað var í markStack síðast, eða 0 ef
	   kallað hefur verið jafn oft í markStack og unmarkStack
	 */
	int lastStackMark();

	/* TODO: docs, gera ekki inline? */
	void pushUtLabel(int l) { _utLabels.push(l); }
	void popUtLabel() { _utLabels.pop(); }
	int getUtLabel() { return _utLabels.top(); }

	/** Smíðar þulu fyrir stefið.
	 \pre Ekki verður kallað aftur í föllin addInnflutt, addSegd, addStadvaer,
	   addUndirstef, addVidfang eða setParent. out er löglegur úttaksstraumur.
	 \post Búið er að skrifa í out þulu stefsins.
	 */
	void generate(ostream& out);

	/** Athugar hvort nafn er locally skilgreint
	  \return true þ.þ.a.a. nafn sé skilgreint breytu- eða viðfangsnafn í þessu stefi
	  */
	bool isLocallyDefined(const string& nafn);

	/** Athugar hvort nafn er nafn á beinu undirstefi
	  \return true þ.þ.a.a. nafn sé nafn á beinu undirstefi þessa falls
	 */
	bool isLocallyDefinedUndirstef(const string& nafn, int n, int m);

private:
	/** Leitar í symboltöflu.
	 \pre s er lögleg symtab, nafn er löglegur strengur
	 \return iterator sem bendir á parið <str,i> með str==nafn ef það er til í s,
	   s.end() annars
	 */
	symtab::iterator findSymbol(symtab& s, const string& nafn);

};

}

#endif /* __stef_h__ */