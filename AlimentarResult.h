//---------------------------------------------------------------------------

#ifndef AlimentarResultH
#define AlimentarResultH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ComCtrls.hpp>
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
	void __fastcall ExitClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TAlimentarFormResult(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TAlimentarFormResult *AlimentarFormResult;
//---------------------------------------------------------------------------
#endif
