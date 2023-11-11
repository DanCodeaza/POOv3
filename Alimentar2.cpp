//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Alimentar2.h"
#include "Alimentar1.h"
#include "Alimentar3.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TAlimentarForm2 *AlimentarForm2;
//---------------------------------------------------------------------------
__fastcall TAlimentarForm2::TAlimentarForm2(TComponent* Owner)
	: TForm(Owner)
{
    BorderStyle = bsNone;
    WindowState = TWindowState::wsMaximized;
}
//---------------------------------------------------------------------------

void __fastcall TAlimentarForm2::ExitClick(TObject *Sender)
{
    Application->Terminate();
}
//---------------------------------------------------------------------------

void __fastcall TAlimentarForm2::NextClick(TObject *Sender)
{
	TAlimentarForm3* newForm = new TAlimentarForm3(NULL);
	newForm -> Show();
    this->Hide();
}
//---------------------------------------------------------------------------

void __fastcall TAlimentarForm2::PreviousClick(TObject *Sender)
{
	TAlimentarForm1* newForm1 = new TAlimentarForm1(NULL);
	newForm1 -> Show();
    this->Hide();
}
//---------------------------------------------------------------------------

