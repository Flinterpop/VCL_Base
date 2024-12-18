//---------------------------------------------------------------------------

#ifndef VCLBaseFormH
#define VCLBaseFormH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------
class TForm14 : public TForm
{
__published:	// IDE-managed Components
	TMemo *MemoDebug;
	TButton *BN_Close;
	TButton *BN_Clear;
	TButton *BN_Start;
	void __fastcall BN_ClearClick(TObject *Sender);
	void __fastcall BN_CloseClick(TObject *Sender);
	void __fastcall BN_StartClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm14(TComponent* Owner);
	void  pme(const char* fmt, ...);
	void  pme(String buf);
    void  HexDump(const unsigned char* m, int len);


};
//---------------------------------------------------------------------------
extern PACKAGE TForm14 *Form14;
//---------------------------------------------------------------------------
#endif
