//---------------------------------------------------------------------------

#ifndef MenuH
#define MenuH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.pngimage.hpp>
#include <Vcl.Imaging.jpeg.hpp>
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
	TImage *Image1;
	TImage *Image2;
	TLabel *Label2;
	TButton *Credits;
	void __fastcall ExitClick(TObject *Sender);
	void __fastcall TellMeMoreClick(TObject *Sender);
	void __fastcall ACAlimentarClick(TObject *Sender);
	void __fastcall FormResize(TObject *Sender);
	void __fastcall ACIndividualClick(TObject *Sender);
	void __fastcall ACHouseClick(TObject *Sender);
	void __fastcall CreditsClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TMenuForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TMenuForm *MenuForm;
//---------------------------------------------------------------------------
#endif
