//---------------------------------------------------------------------------

#ifndef MenuH
#define MenuH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------
class TMenuForm : public TForm
{
__published:	// IDE-managed Components
	TLabel *Label1;
	TButton *ACIndividual;
	TButton *ACHouse;
	TButton *ACAlimentar;
	TButton *TellMeMore;
	TButton *Exit;
	void __fastcall ExitClick(TObject *Sender);
	void __fastcall TellMeMoreClick(TObject *Sender);
	void __fastcall ACAlimentarClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TMenuForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TMenuForm *MenuForm;
//---------------------------------------------------------------------------
#endif
