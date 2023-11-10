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
}
//---------------------------------------------------------------------------

void __fastcall TAlimentarFormResult::ExitClick(TObject *Sender)
{
    Application->Terminate();
}
//---------------------------------------------------------------------------

