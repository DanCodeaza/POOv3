//---------------------------------------------------------------------------

#ifndef Individual1H
#define Individual1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TIndividualForm1 : public TForm
{
__published:	// IDE-managed Components
	TButton *Next;
	TButton *Previous;
	TButton *Exit;
	TButton *Button1;
	TButton *Button2;
	TButton *Button3;
	void __fastcall PreviousClick(TObject *Sender);
	void __fastcall NextClick(TObject *Sender);
	void __fastcall FormResize(TObject *Sender);
	void __fastcall ExitClick(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall Button3Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TIndividualForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TIndividualForm1 *IndividualForm1;
//---------------------------------------------------------------------------
#endif
