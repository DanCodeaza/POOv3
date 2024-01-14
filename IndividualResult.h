//---------------------------------------------------------------------------

#ifndef IndividualResultH
#define IndividualResultH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.pngimage.hpp>
//---------------------------------------------------------------------------
class TIndividualFormResult : public TForm
{
__published:	// IDE-managed Components
	TButton *Exit;
	TButton *Menu;
	TLabel *Label1;
	TLabel *Label2;
	TLabel *Label3;
	TLabel *Label4;
	TLabel *Label5;
	TLabel *Label6;
	TLabel *Label7;
	TLabel *Label8;
	TMemo *FeedBack;
	TProgressBar *ProgressBar1;
	TButton *Button1;
	TButton *Button2;
	TButton *Button3;
	void __fastcall ExitClick(TObject *Sender);
	void __fastcall MenuClick(TObject *Sender);
	void __fastcall FormResize(TObject *Sender);
	void __fastcall ReadAndDisplayFileContent();
	void __fastcall FormActivate(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall Button3Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TIndividualFormResult(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TIndividualFormResult *IndividualFormResult;
//---------------------------------------------------------------------------
#endif
