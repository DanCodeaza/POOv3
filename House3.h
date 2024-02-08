//---------------------------------------------------------------------------

#ifndef House3H
#define House3H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.jpeg.hpp>
//---------------------------------------------------------------------------
class THouseForm3 : public TForm
{
__published:	// IDE-managed Components
	TButton *Next;
	TButton *Previous;
	TButton *Exit;
	TButton *Button1;
	TButton *Button2;
	TButton *Button3;
	TRadioGroup *RadioGroup1;
	TRadioGroup *RadioGroup2;
	TRadioGroup *RadioGroup3;
	TRadioGroup *RadioGroup4;
	TImage *Image1;
	void __fastcall PreviousClick(TObject *Sender);
	void __fastcall ExitClick(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall FormResize(TObject *Sender);
	void __fastcall NextClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall THouseForm3(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE THouseForm3 *HouseForm3;
//---------------------------------------------------------------------------
#endif
