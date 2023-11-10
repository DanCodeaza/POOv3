//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Menu.h"
#include "TellMeMore.h"
#include "Alimentar1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TMenuForm *MenuForm;
//---------------------------------------------------------------------------
__fastcall TMenuForm::TMenuForm(TComponent* Owner)
	: TForm(Owner)
{
	MenuForm->BorderStyle=bsNone;
	MenuForm->WindowState=wsMaximized;
}
//---------------------------------------------------------------------------
void __fastcall TMenuForm::ExitClick(TObject *Sender)
{
       Application->Terminate();
}
//---------------------------------------------------------------------------
void __fastcall TMenuForm::TellMeMoreClick(TObject *Sender)
{
	TTellMeMoreForm *newForm = new TTellMeMoreForm(NULL);
	newForm->Show();
	this->Hide();
}
//---------------------------------------------------------------------------

void __fastcall TMenuForm::ACAlimentarClick(TObject *Sender)
{
	TAlimentarForm1 *newForm1 = new TAlimentarForm1(NULL);
	newForm1->Show();
    this->Hide();
}
//---------------------------------------------------------------------------

