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

void __fastcall TAlimentarForm2::FormResize(TObject *Sender)
{
	Exit->Top = 1000;
	Exit->Left = 1750;
	Next->Top = 1000;
	Next -> Left = 1650;
	Previous->Top=1000;
	Previous->Left=1550;

	Label1->Left = 100;
	Label1->Top = 100;
	Label2->Left = 100;
	Label2->Top = 325;
	Label3->Left = 100;
	Label3->Top = 550;
	Label4->Left=100;
	Label4->Top=775;

	RadioGroup1->Left=100;
	RadioGroup1->Top=150;
	RadioGroup2->Left=100;
	RadioGroup2->Top=375;
	RadioGroup3->Left=100;
	RadioGroup3->Top=600;
	RadioGroup4->Left=100;
	RadioGroup4->Top=825;

}
//---------------------------------------------------------------------------

