//---------------------------------------------------------------------------

#include <vcl.h>
#include <fstream>
#pragma hdrstop

#include "Individual1.h"
#include "Individual2.h"
#include "Individual3.h"
#include "IndividualResult.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TIndividualForm3 *IndividualForm3;
//---------------------------------------------------------------------------
__fastcall TIndividualForm3::TIndividualForm3(TComponent* Owner)
	: TForm(Owner)
{
	BorderStyle = bsNone;
	WindowState = TWindowState::wsMaximized;
}
//---------------------------------------------------------------------------
void __fastcall TIndividualForm3::PreviousClick(TObject *Sender)
{
	TIndividualForm2* newForm = new TIndividualForm2(NULL);
	newForm -> Show();
	this->Hide();
}
//---------------------------------------------------------------------------

void __fastcall TIndividualForm3::ExitClick(TObject *Sender)
{
	Application->Terminate();
}
//---------------------------------------------------------------------------

void __fastcall TIndividualForm3::NextClick(TObject *Sender)
{
	TIndividualFormResult* newForm1 = new TIndividualFormResult(NULL);
	newForm1 -> Show();
	this->Hide();
}
//---------------------------------------------------------------------------

void __fastcall TIndividualForm3::Button1Click(TObject *Sender)
{
	TIndividualForm1* newForm = new TIndividualForm1(NULL);
	newForm -> Show();
	this->Hide();
}
//---------------------------------------------------------------------------

void __fastcall TIndividualForm3::Button2Click(TObject *Sender)
{
	TIndividualForm2* newForm = new TIndividualForm2(NULL);
	newForm -> Show();
	this->Hide();
}
//---------------------------------------------------------------------------
void __fastcall TIndividualForm3::FormResize(TObject *Sender)
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
}
