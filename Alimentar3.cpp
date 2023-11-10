//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Alimentar3.h"
#include "Alimentar2.h"
#include "AlimentarResult.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TAlimentarForm3 *AlimentarForm3;
//---------------------------------------------------------------------------
__fastcall TAlimentarForm3::TAlimentarForm3(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TAlimentarForm3::PreviousClick(TObject *Sender)
{
	TAlimentarForm2* newForm = new TAlimentarForm2(NULL);
	newForm -> Show();
    this->Hide();
}
//---------------------------------------------------------------------------

void __fastcall TAlimentarForm3::NextClick(TObject *Sender)
{
	TAlimentarFormResult* newForm1 = new TAlimentarFormResult(NULL);
	newForm1 -> Show();
	this->Hide();
}
//---------------------------------------------------------------------------

void __fastcall TAlimentarForm3::ExitClick(TObject *Sender)
{
    Application->Terminate();
}
//---------------------------------------------------------------------------

