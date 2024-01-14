//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "House1.h"
#include "House2.h"
#include "House3.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
THouseForm3 *HouseForm3;
//---------------------------------------------------------------------------
__fastcall THouseForm3::THouseForm3(TComponent* Owner)
	: TForm(Owner)
{
	BorderStyle = bsNone;
	WindowState = TWindowState::wsMaximized;
}
//---------------------------------------------------------------------------
void __fastcall THouseForm3::PreviousClick(TObject *Sender)
{
	THouseForm2* newForm = new THouseForm2(NULL);
	newForm -> Show();
	this->Hide();
}
//---------------------------------------------------------------------------

void __fastcall THouseForm3::ExitClick(TObject *Sender)
{
	Application->Terminate();
}
//---------------------------------------------------------------------------

void __fastcall THouseForm3::Button1Click(TObject *Sender)
{
	THouseForm1* newForm = new THouseForm1(NULL);
	newForm -> Show();
	this->Hide();
}
//---------------------------------------------------------------------------

void __fastcall THouseForm3::Button2Click(TObject *Sender)
{
	THouseForm2* newForm = new THouseForm2(NULL);
	newForm -> Show();
	this->Hide();
}
//---------------------------------------------------------------------------
  void __fastcall THouseForm3::FormResize(TObject *Sender)
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
	RadioGroup3->Left=100;
	RadioGroup3->Top=600;
	RadioGroup4->Left=100;
	RadioGroup4->Top=825;

}
