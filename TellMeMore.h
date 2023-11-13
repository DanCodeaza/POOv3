//---------------------------------------------------------------------------

#ifndef TellMeMoreH
#define TellMeMoreH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------
class TTellMeMoreForm : public TForm
{
__published:	// IDE-managed Components
	TLabel *Label1;
	TButton *Exit;
	TButton *Previous;
	void __fastcall ExitClick(TObject *Sender);
	void __fastcall PreviousClick(TObject *Sender);
	void __fastcall FormResize(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TTellMeMoreForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TTellMeMoreForm *TellMeMoreForm;
//---------------------------------------------------------------------------
#endif
