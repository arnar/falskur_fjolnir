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
	 \return merki sem er skrifa� � �ulu strax � undan eftirm�la
	 */
	int getEndLabel() const { return _steflokLabel; }

	/** Athugar hvort nafn er skilgreint inni � stefinu.
	 \return true �.�.a.a. nafn er skilgreint vi�fangs e�a breytunafn
	 */
	bool isDefined(const string& nafn);

	/** Athugar hvort undirstef er skilgreint innan � stefinu
	 \return 0 ef ekki er til undirstef sem er h�gt a� kalla � fr� n�verandi
	   sta�setningu � �ulu, annars f�ldunarh�� vi�komandi undirstefs.
	 */
	int isDefinedUndirstef(const string& nafn, int n, int m);

	/** Skilar nafni � merki undirfalls 
	 \pre isDefinedUndirstef(...) == true
	 */
	string getUndirstefLabel(const string& nafn, int n, int m);

	/** B�tir vi� vi�fangi af tegund t me� nafni nafn.
	 \pre isLocallyDefined(nafn) == false
	 \post Stefi� �ekkir sta�setningu vi�fangsins � stafla
	 */
	void addVidfang(vidfangsTegund t, string& nafn);

	/** S�kir fj�lda �egar skilgreindra vi�fanga.
	 \return fj�lda �egar skilgreindra vi�fanga af tegund t
	 */
	int getFjoldiVidfanga(vidfangsTegund t);

	/** B�tir vi� nafni innfluttrar breytu
	 \pre isLocallyDefined(nafn) == false
	 \post Stefi� �ekkir nafn sem nafn innfluttrar breytu
	 */
	void addInnflutt(string& nafn);

	/** B�tir vi� sta�v�rri breytu, hugsanlega me� frumstillingu
	 \pre isLocallyDefined(nafn) == false og ef
	      frumstilling er anna� hvort null e�a bendir � l�glega Seg�
	 \post Stefi� �ekkir nafn sem breytunafn �samt sta�setningu � stafla,
	       og mun skrifa �t �ulu til a� frumstilla breytuna. �etta stef
		   mun sj� um a� losa minni fyrir frumstillinguna
     */
	void addStadvaer(string& nafn, Segd* frumstilling = NULL);

	/** B�tir vi� undirstefi undir �etta stef.
	 \pre isLocallyDefinedUndirstef(stef->_nafn) == false og stef er
	      bendir � l�glegt Stef.
	 \post �etta stef �ekkir nafn sem nafn undirstefs og mun skrifa �t
	       �ulu �ess. Kalla� hefur veri� � stef->setParent me� r�ttu vi�f.
		   �etta Stef mun sj� um a� losa minni sem stef bendir �.
	 */
	void addUndirstef(Stef* stef);

	/** B�tir vi� seg� � stefi�.
	 \pre s er bendir � l�glega Seg�
	 \post stefi� mun skrifa �t �ulu seg�arinnar strax � eftir �ulum �eirra
	       seg�a sem �egar hafa veri� settar inn me� �essu bo�i. Kalla� hefur
		   veri� � s->setUmlykjandiStef. �etta stef mun sj� um a� losa minni
		   sem stef bendir �
	 */
	void addSegd(Segd* s);

	/** Setur bendi � stefi� � n�stu f�ldunarh�� fyrir ofan.
	 \pre parent er bendir � l�glegt Stef
	 \post �etta stef inniheldur bendi � parent og heilt�lu f�ldunard�pt, sem
	       er einum h�rri en samsvarandi tala � parent, �etta stef um sj�
		   um a� losa minni sem s bendir �
	 */
	void setParent(Stef* parent);
	
	/** S�kir f�ldunard�pt �essa falls.
	 \return f�ldunard�pt �essa falls (0 ef �etta er grunnfall)
	 */
	int getNestingLevel();

	/** S�kir sta�setningu vi�fangs e�a breytu � stafla.
	 \pre isDefined(name) == true
	 \return symloc struct sem inniheldur t�lur f�ldun og offset. F�ldun
	   segir til um hva� �arf a� fara upp um margar vakningarf�rslur til a� finna
	   vi�komandi breytu, og offset inniheldur sta�setningu breytunnar
	   m.v. grunnstak (BP) �eirrar vakningarf�rslu � b�tum
	   Ef name er nafn � innfluttri breytu skilar falli� s�rgildinu {0,0}
	 */
	symloc getSymbolLocation(const string& name);

	/** Skilar streng sem au�kennir falli�.
	 \return streng sem au�kennir falli� �t fr� nafni �ess, fj�lda vi�fanga a� hvorri
	  ger� og n�sta falli fyrir ofan � f�ldunarh��.
	 */
	string getInternalNafn();

	/** Gefur fallinu tilkynningu um a� �ula breyti st�r� staflans.
	 \post St�r� staflans hefur breyst um d b�ti.
	 */
	void stackDelta(int d);

	/** S�kir st�r� staflans m.v. �� �ulu sem hefur veri� skrifu� �t.
	 \return St�r� staflans fr� s��ustu sta�v�ru breytu � b�tum eftir a�
	   s� �ula sem hefur veri� skrifu� �t hefur keyrt.
	 */
	int getStackSize();

	/** Setur n�verandi staflast�r� efst � stafla.
	  \post n�sta kall � lastStackMark mun skila n�verandi staflast�r�
	  */
	void markStack();

	/** Gleymir s��asta gildi �r markStack.
	  \pre Kalla� hefur veri� oftar � markStack en unmarkStack
	  \post n�sta gildi �r lastStackMark mun ver�a st�r� staflans vi� �ars��asta markStack
	  */
	void unmarkStack();

	/** S�kir st�r� staflans vi� s��asta markStack
	 \return St�r� staflans �egar kalla� var � markStack s��ast, e�a 0 ef
	   kalla� hefur veri� jafn oft � markStack og unmarkStack
	 */
	int lastStackMark();

	/* TODO: docs, gera ekki inline? */
	void pushUtLabel(int l) { _utLabels.push(l); }
	void popUtLabel() { _utLabels.pop(); }
	int getUtLabel() { return _utLabels.top(); }

	/** Sm��ar �ulu fyrir stefi�.
	 \pre Ekki ver�ur kalla� aftur � f�llin addInnflutt, addSegd, addStadvaer,
	   addUndirstef, addVidfang e�a setParent. out er l�glegur �ttaksstraumur.
	 \post B�i� er a� skrifa � out �ulu stefsins.
	 */
	void generate(ostream& out);

	/** Athugar hvort nafn er locally skilgreint
	  \return true �.�.a.a. nafn s� skilgreint breytu- e�a vi�fangsnafn � �essu stefi
	  */
	bool isLocallyDefined(const string& nafn);

	/** Athugar hvort nafn er nafn � beinu undirstefi
	  \return true �.�.a.a. nafn s� nafn � beinu undirstefi �essa falls
	 */
	bool isLocallyDefinedUndirstef(const string& nafn, int n, int m);

private:
	/** Leitar � symbolt�flu.
	 \pre s er l�gleg symtab, nafn er l�glegur strengur
	 \return iterator sem bendir � pari� <str,i> me� str==nafn ef �a� er til � s,
	   s.end() annars
	 */
	symtab::iterator findSymbol(symtab& s, const string& nafn);

};

}

#endif /* __stef_h__ */