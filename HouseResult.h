//---------------------------------------------------------------------------

#ifndef HouseResultH
#define HouseResultH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ComCtrls.hpp>
//---------------------------------------------------------------------------
class THouseFormResult : public TForm
{
__published:	// IDE-managed Components
	TButton *Exit;
	TButton *Menu;
	TLabel *Label1;
	TLabel *Label4;
	TLabel *Label8;
	TLabel *Label2;
	TLabel *Label5;
	TLabel *Label3;
	TProgressBar *ProgressBar1;
	TButton *Button1;
	TButton *Button2;
	TLabel *Label6;
	TMemo *Feedback;
	TLabel *Label7;
	TButton *Button3;
	void __fastcall MenuClick(TObject *Sender);
	void __fastcall ExitClick(TObject *Sender);
	void __fastcall FormResize(TObject *Sender);
	void __fastcall ReadAndDisplayFileContent();
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall Button3Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall THouseFormResult(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE THouseFormResult *HouseFormResult;
//---------------------------------------------------------------------------
#endif
