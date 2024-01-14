//---------------------------------------------------------------------------

#ifndef AlimentarResultH
#define AlimentarResultH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.pngimage.hpp>
//---------------------------------------------------------------------------
class TAlimentarFormResult : public TForm
{
__published:	// IDE-managed Components
	TLabel *Label1;
	TButton *Button1;
	TButton *Button2;
	TButton *Exit;
	TProgressBar *ProgressBar1;
	TLabel *Label2;
	TLabel *Label3;
	TMemo *Feedback;
	TLabel *Label4;
	TLabel *Label5;
	TLabel *Label6;
	TButton *Menu;
	TLabel *Label7;
	TLabel *Label8;
	TButton *Button3;
	void __fastcall ExitClick(TObject *Sender);
	 void __fastcall Button1Click (TObject *Sender);
	void __fastcall FormResize(TObject *Sender);
	void __fastcall MenuClick(TObject *Sender);
    void __fastcall ReadAndDisplayFileContent();
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall Button3Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TAlimentarFormResult(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TAlimentarFormResult *AlimentarFormResult;
//---------------------------------------------------------------------------
#endif
