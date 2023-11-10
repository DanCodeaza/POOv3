//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "TellMeMore.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TTellMeMoreForm *TellMeMoreForm;
//---------------------------------------------------------------------------
__fastcall TTellMeMoreForm::TTellMeMoreForm(TComponent* Owner)
	: TForm(Owner)
{
	TellMeMoreForm->BorderStyle=bsNone;
	TellMeMoreForm->WindowState=wsMaximized;
    Label1->Font->Size=12;
}
//---------------------------------------------------------------------------
void __fastcall TTellMeMoreForm::ExitClick(TObject *Sender)
{
    Application->Terminate();
}
//---------------------------------------------------------------------------

