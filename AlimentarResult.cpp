//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "AlimentarResult.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TAlimentarFormResult *AlimentarFormResult;
//---------------------------------------------------------------------------
__fastcall TAlimentarFormResult::TAlimentarFormResult(TComponent* Owner)
	: TForm(Owner)
{
    BorderStyle = bsNone;
    WindowState = TWindowState::wsMaximized;
}
//---------------------------------------------------------------------------

void __fastcall TAlimentarFormResult::ExitClick(TObject *Sender)
{
    Application->Terminate();
}
//---------------------------------------------------------------------------

void __fastcall TAlimentarFormResult::FormResize(TObject *Sender)
{
	Exit->Top = 1000;
	Exit->Left = 1750;
}
//---------------------------------------------------------------------------



