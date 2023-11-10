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
	TLabel *Label1;
	TLabel *Label2;
	TLabel *Label3;
	TButton *Previous;
	TButton *Next;
	TButton *Exit;
	TRadioGroup *RadioGroup1;
	TRadioGroup *RadioGroup2;
	TRadioGroup *RadioGroup3;
	void __fastcall ExitClick(TObject *Sender);
	void __fastcall NextClick(TObject *Sender);
	void __fastcall PreviousClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TAlimentarForm2(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TAlimentarForm2 *AlimentarForm2;
//---------------------------------------------------------------------------
#endif
