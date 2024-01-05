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
	void __fastcall ExitClick(TObject *Sender);
	void __fastcall MenuClick(TObject *Sender);
	void __fastcall FormResize(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TIndividualFormResult(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TIndividualFormResult *IndividualFormResult;
//---------------------------------------------------------------------------
#endif
