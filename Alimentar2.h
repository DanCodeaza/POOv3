//---------------------------------------------------------------------------

#ifndef Alimentar2H
#define Alimentar2H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TAlimentarForm2 : public TForm
{
__published:	// IDE-managed Components
	TButton *Previous;
	TButton *Next;
	TButton *Exit;
	TRadioGroup *RadioGroup1;
	TRadioGroup *RadioGroup2;
	TRadioGroup *RadioGroup3;
	TRadioGroup *RadioGroup4;
	TButton *Button1;
	TButton *Button2;
	TButton *Button3;
	void __fastcall ExitClick(TObject *Sender);
	void __fastcall NextClick(TObject *Sender);
	void __fastcall PreviousClick(TObject *Sender);
	void __fastcall FormResize(TObject *Sender);
	//void __fastcall Button2Click(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Button3Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TAlimentarForm2(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TAlimentarForm2 *AlimentarForm2;
//---------------------------------------------------------------------------
#endif
