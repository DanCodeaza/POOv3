//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Alimentar1.h"
#include "Menu.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TAlimentarForm1 *AlimentarForm1;
//---------------------------------------------------------------------------
__fastcall TAlimentarForm1::TAlimentarForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TAlimentarForm1::ExitClick(TObject *Sender)
{
    Application->Terminate();
}
//---------------------------------------------------------------------------
void __fastcall TAlimentarForm1::PreviousClick(TObject *Sender)
{
	TMenuForm *newForm= new TMenuForm(NULL);
	newForm->Show();
    this->Hide();
}
//---------------------------------------------------------------------------
