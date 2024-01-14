//---------------------------------------------------------------------------

#include <vcl.h>
#include <fstream>
#pragma hdrstop

#include "Individual1.h"
#include "Individual2.h"
#include "Individual3.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TIndividualForm2 *IndividualForm2;
//---------------------------------------------------------------------------
__fastcall TIndividualForm2::TIndividualForm2(TComponent* Owner)
	: TForm(Owner)
{	BorderStyle = bsNone;
	WindowState = TWindowState::wsMaximized;
}
//---------------------------------------------------------------------------
void __fastcall TIndividualForm2::ExitClick(TObject *Sender)
{
	Application->Terminate();
}
//---------------------------------------------------------------------------

void __fastcall TIndividualForm2::NextClick(TObject *Sender)
{
	TIndividualForm3* newForm = new TIndividualForm3(NULL);
	newForm -> Show();
	this->Hide();
}
//---------------------------------------------------------------------------

void __fastcall TIndividualForm2::PreviousClick(TObject *Sender)
{
	TIndividualForm1* newForm1 = new TIndividualForm1(NULL);
	newForm1 -> Show();
	this->Hide();
}
//---------------------------------------------------------------------------

void __fastcall TIndividualForm2::Button1Click(TObject *Sender)
{
	TIndividualForm1* newForm1 = new TIndividualForm1(NULL);
	newForm1 -> Show();
	this->Hide();
}
//---------------------------------------------------------------------------

void __fastcall TIndividualForm2::Button3Click(TObject *Sender)
{
	TIndividualForm3* newForm = new TIndividualForm3(NULL);
	newForm -> Show();
	this->Hide();
}
//---------------------------------------------------------------------------
 void __fastcall TIndividualForm2::FormResize(TObject *Sender)
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
