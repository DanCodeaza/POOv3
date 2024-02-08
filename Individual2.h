//---------------------------------------------------------------------------

#ifndef Individual2H
#define Individual2H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.pngimage.hpp>
//---------------------------------------------------------------------------
class TIndividualForm2 : public TForm
{
__published:	// IDE-managed Components
	TButton *Exit;
	TButton *Next;
	TButton *Previous;
	TButton *Button1;
	TButton *Button2;
	TButton *Button3;
	TRadioGroup *RadioGroup1;
	TRadioGroup *RadioGroup2;
	TRadioGroup *RadioGroup3;
	TImage *Image1;
	void __fastcall ExitClick(TObject *Sender);
	void __fastcall NextClick(TObject *Sender);
	void __fastcall PreviousClick(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Button3Click(TObject *Sender);
	void __fastcall FormResize(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TIndividualForm2(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TIndividualForm2 *IndividualForm2;
//---------------------------------------------------------------------------
#endif
