//---------------------------------------------------------------------------

#ifndef Alimentar1H
#define Alimentar1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TAlimentarForm1 : public TForm
{
__published:	// IDE-managed Components
	TButton *Previous;
	TButton *Next;
	TButton *Exit;
	TLabel *Label1;
	TLabel *Label2;
	TLabel *Label3;
	TRadioGroup *RadioGroup1;
	TRadioGroup *RadioGroup2;
	TRadioGroup *RadioGroup3;
	TRadioButton *RadioButton1;
	TRadioButton *RadioButton2;
	TRadioButton *RadioButton3;
	TRadioButton *RadioButton4;
	TRadioButton *RadioButton5;
	TRadioButton *RadioButton6;
	TRadioButton *RadioButton7;
	TRadioButton *RadioButton8;
	void __fastcall ExitClick(TObject *Sender);
	void __fastcall PreviousClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TAlimentarForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TAlimentarForm1 *AlimentarForm1;
//---------------------------------------------------------------------------
#endif
