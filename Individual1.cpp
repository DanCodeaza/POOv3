//---------------------------------------------------------------------------

#include <vcl.h>
#include <fstream>
#pragma hdrstop

#include "Individual1.h"
#include "Individual2.h"
#include "Individual3.h"
#include "Menu.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TIndividualForm1 *IndividualForm1;
//---------------------------------------------------------------------------
__fastcall TIndividualForm1::TIndividualForm1(TComponent* Owner)
	: TForm(Owner)
{
	BorderStyle = bsNone;
	WindowState = TWindowState::wsMaximized;
}
//---------------------------------------------------------------------------
void __fastcall TIndividualForm1::PreviousClick(TObject *Sender)
{
	TMenuForm *newForm= new TMenuForm(NULL);
	newForm->Show();
	this->Hide();
}
//---------------------------------------------------------------------------

void __fastcall TIndividualForm1::NextClick(TObject *Sender)
{
	TIndividualForm2 *newForm1= new TIndividualForm2(NULL);
	newForm1->Show();
	this->Hide();
}
//---------------------------------------------------------------------------

void __fastcall TIndividualForm1::ExitClick(TObject *Sender)
{
	Application->Terminate();
}
//---------------------------------------------------------------------------
void __fastcall TIndividualForm1::FormResize(TObject *Sender)
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

    RadioGroup1->Left=100;
	RadioGroup1->Top=150;
	RadioGroup2->Left=100;
	RadioGroup2->Top=375;
	RadioGroup4->Left=100;
	RadioGroup4->Top=825;

	//-----------------------------------
	/*
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


	*/
	//-----------------------------------
}

void __fastcall TIndividualForm1::Button2Click(TObject *Sender)
{
	TIndividualForm2 *newForm1= new TIndividualForm2(NULL);
	newForm1->Show();
	this->Hide();
}
//---------------------------------------------------------------------------

void __fastcall TIndividualForm1::Button3Click(TObject *Sender)
{
	TIndividualForm3 *newForm1= new TIndividualForm3(NULL);
	newForm1->Show();
	this->Hide();
}
//---------------------------------------------------------------------------



