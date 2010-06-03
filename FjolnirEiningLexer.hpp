#ifndef INC_FjolnirEiningLexer_hpp_
#define INC_FjolnirEiningLexer_hpp_

#include <antlr/config.hpp>
/* $ANTLR 2.7.3-20030430: "FjolnirEiningLexer.g" -> "FjolnirEiningLexer.hpp"$ */
#include <antlr/CommonToken.hpp>
#include <antlr/InputBuffer.hpp>
#include <antlr/BitSet.hpp>
#include "FjolnirTokenTypes.hpp"
#include <antlr/CharScanner.hpp>
#line 1 "FjolnirEiningLexer.g"

#include <antlr/TokenStreamSelector.hpp>
#include "utils.h"

#line 17 "FjolnirEiningLexer.hpp"
ANTLR_BEGIN_NAMESPACE(ff)
/** FjolnirEiningLexer er lesgreinir sem vinnur á einingaskilgreiningum
 *  í Fjölnis-forritum, þ.e. þess kóða sem er innan slaufusviga.
 *  Þegar hann sér lokun á óopnuðum slaufusviga ('}') poppar hann af
 *  "input-selector" hlaðanum og með því færist stjórn lesgreiningarinnar
 *  aftur yfir til FjolnirForritLexer, sem lesgreinir tákn utan
 *  eininganna (s.s. einingaraðgerðir).
 */
class CUSTOM_API FjolnirEiningLexer : public antlr::CharScanner, public FjolnirTokenTypes
{
#line 75 "FjolnirEiningLexer.g"

protected:
	int nestedSlaufur;
	antlr::TokenStreamSelector* selector;
	
public:
	void initialize(antlr::TokenStreamSelector * sel) {
		selector = sel;
		nestedSlaufur = 0;
	}
#line 28 "FjolnirEiningLexer.hpp"
private:
	void initLiterals();
public:
	bool getCaseSensitiveLiterals() const
	{
		return true;
	}
public:
	FjolnirEiningLexer(std::istream& in);
	FjolnirEiningLexer(antlr::InputBuffer& ib);
	FjolnirEiningLexer(const antlr::LexerSharedInputState& state);
	antlr::RefToken nextToken();
	protected: void mINNSETNING(bool _createToken);
	protected: void mGILDISVEITING(bool _createToken);
	public: void mSVIGI_OPNA(bool _createToken);
	public: void mSVIGI_LOKA(bool _createToken);
	public: void mSEMIKOMMA(bool _createToken);
	public: void mKOMMA(bool _createToken);
	public: void mHORNKLOFI_OPNA(bool _createToken);
	public: void mHORNKLOFI_LOKA(bool _createToken);
	public: void mPUNKTUR(bool _createToken);
	public: void mPUNKTURPUNKTUR(bool _createToken);
	public: void mSTAFFASTI(bool _createToken);
	protected: void mStyriStafur(bool _createToken,
		bool expand=true
	);
	public: void mSTRENGFASTI(bool _createToken);
	protected: void mHexStafur(bool _createToken);
	public: void mINNSETN_GILDISV_ADGERD_EDA_TALA(bool _createToken);
	protected: void mFLEYTITALA(bool _createToken);
	protected: void mHEILTALA(bool _createToken);
	protected: void mEkkiAdgerdaStafur(bool _createToken);
	protected: int  mADGERD(bool _createToken);
	protected: void mFJOLDATALA(bool _createToken);
	public: void mTOMAGILDI(bool _createToken);
	protected: void mAdgerdaStafur(bool _createToken);
	protected: void mNafnStafur(bool _createToken);
	protected: void mEkkiNafnStafur(bool _createToken);
	public: void mNAFN(bool _createToken);
	public: void mSLAUFA_OPNA(bool _createToken);
	public: void mSLAUFA_LOKA(bool _createToken);
	public: void mWS(bool _createToken);
	protected: void mEndOfLine(bool _createToken);
	public: void mCOMMENT(bool _createToken);
private:
	
	static const unsigned long _tokenSet_0_data_[];
	static const antlr::BitSet _tokenSet_0;
	static const unsigned long _tokenSet_1_data_[];
	static const antlr::BitSet _tokenSet_1;
	static const unsigned long _tokenSet_2_data_[];
	static const antlr::BitSet _tokenSet_2;
	static const unsigned long _tokenSet_3_data_[];
	static const antlr::BitSet _tokenSet_3;
	static const unsigned long _tokenSet_4_data_[];
	static const antlr::BitSet _tokenSet_4;
	static const unsigned long _tokenSet_5_data_[];
	static const antlr::BitSet _tokenSet_5;
	static const unsigned long _tokenSet_6_data_[];
	static const antlr::BitSet _tokenSet_6;
	static const unsigned long _tokenSet_7_data_[];
	static const antlr::BitSet _tokenSet_7;
	static const unsigned long _tokenSet_8_data_[];
	static const antlr::BitSet _tokenSet_8;
	static const unsigned long _tokenSet_9_data_[];
	static const antlr::BitSet _tokenSet_9;
	static const unsigned long _tokenSet_10_data_[];
	static const antlr::BitSet _tokenSet_10;
	static const unsigned long _tokenSet_11_data_[];
	static const antlr::BitSet _tokenSet_11;
	static const unsigned long _tokenSet_12_data_[];
	static const antlr::BitSet _tokenSet_12;
};

ANTLR_END_NAMESPACE
#endif /*INC_FjolnirEiningLexer_hpp_*/
