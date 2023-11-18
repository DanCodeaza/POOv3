//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Alimentar3.h"
#include "Alimentar2.h"
#include "Alimentar1.h"
#include "AlimentarResult.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TAlimentarForm3 *AlimentarForm3;
//---------------------------------------------------------------------------
__fastcall TAlimentarForm3::TAlimentarForm3(TComponent* Owner)
	: TForm(Owner)
{
	BorderStyle = bsNone;
	WindowState = TWindowState::wsMaximized;
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

void __fastcall TAlimentarForm3::FormResize(TObject *Sender)
{
	Exit->Top = 1000;
	Exit->Left = 1750;
	Next->Top = 1000;
	Next -> Left = 1000;
	Previous->Top=1000;
	Previous->Left=785;
	Button1->Top = 1000;
	Button1->Left = 890;
	Button2->Top = 1000;
	Button2->Left = 925;
	Button3->Top = 1000;
	Button3->Left = 960;

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

void __fastcall TAlimentarForm3::Button1Click(TObject *Sender)
{
	TAlimentarForm1* newForm = new TAlimentarForm1(NULL);
	newForm -> Show();
	this->Hide();
}
//---------------------------------------------------------------------------

void __fastcall TAlimentarForm3::Button2Click(TObject *Sender)
{
	TAlimentarForm2* newForm = new TAlimentarForm2(NULL);
	newForm -> Show();
	this->Hide();
}
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------

