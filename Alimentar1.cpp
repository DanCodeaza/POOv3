//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Alimentar1.h"
#include "Menu.h"
#include "Alimentar2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TAlimentarForm1 *AlimentarForm1;
//---------------------------------------------------------------------------
__fastcall TAlimentarForm1::TAlimentarForm1(TComponent* Owner)
	: TForm(Owner)
{
    BorderStyle = bsNone;
    WindowState = TWindowState::wsMaximized;
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
 void __fastcall TAlimentarForm1::NextClick(TObject *Sender)
{
	TAlimentarForm2 *newForm1= new TAlimentarForm2(NULL);
	newForm1->Show();
    this->Hide();
}
//---------------------------------------------------------------------------

