//---------------------------------------------------------------------------

#ifndef HouseResultH
#define HouseResultH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------
class THouseFormResult : public TForm
{
__published:	// IDE-managed Components
	TButton *Exit;
	TButton *Menu;
	void __fastcall MenuClick(TObject *Sender);
	void __fastcall ExitClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall THouseFormResult(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE THouseFormResult *HouseFormResult;
//---------------------------------------------------------------------------
#endif
