//---------------------------------------------------------------------------

#ifndef CreditsH
#define CreditsH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.pngimage.hpp>
//---------------------------------------------------------------------------
class TCreditForm : public TForm
{
__published:	// IDE-managed Components
	TLabel *Label1;
	TImage *Image1;
	TButton *Exit;
	TButton *Menu;
	TLabel *Stud;
	TLabel *Stud1;
	TLabel *Stud2;
	TLabel *Stud3;
	TLabel *Stud4;
	TLabel *Stud5;
	TLabel *Teachers;
	TLabel *teach1;
	TLabel *Teach2;
	void __fastcall FormResize(TObject *Sender);
	void __fastcall ExitClick(TObject *Sender);
	void __fastcall MenuClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TCreditForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TCreditForm *CreditForm;
//---------------------------------------------------------------------------
#endif
