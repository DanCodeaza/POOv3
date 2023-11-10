//---------------------------------------------------------------------------

#ifndef Alimentar3H
#define Alimentar3H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TAlimentarForm3 : public TForm
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
	void __fastcall PreviousClick(TObject *Sender);
	void __fastcall NextClick(TObject *Sender);
	void __fastcall ExitClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TAlimentarForm3(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TAlimentarForm3 *AlimentarForm3;
//---------------------------------------------------------------------------
#endif
