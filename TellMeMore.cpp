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


void __fastcall TTellMeMoreForm::FormResize(TObject *Sender)
{
	Exit->Top = 1000;
	Exit->Left = 1750;
	Previous->Top=1000;
	Previous->Left = 1650;
	Label1->Top = 100;
	Label1->Left = 50;
    Label1->Width = ClientWidth-100;
}
//---------------------------------------------------------------------------

