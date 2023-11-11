//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "TellMeMore.h"
#include "Menu.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TTellMeMoreForm *TellMeMoreForm;
//---------------------------------------------------------------------------
__fastcall TTellMeMoreForm::TTellMeMoreForm(TComponent* Owner)
	: TForm(Owner)
{
    BorderStyle = bsNone;
    WindowState = TWindowState::wsMaximized;
	Label1->Font->Size=12;
}
//---------------------------------------------------------------------------
void __fastcall TTellMeMoreForm::ExitClick(TObject *Sender)
{
    Application->Terminate();
}
//---------------------------------------------------------------------------
void __fastcall TTellMeMoreForm::PreviousClick(TObject *Sender)
{
	TMenuForm* newForm = new TMenuForm(NULL);
	newForm->WindowState = TWindowState::wsMaximized;
	newForm->BorderStyle = bsNone;
	newForm->Position = poDefault;
	newForm -> Show();
	this->Hide();
}


