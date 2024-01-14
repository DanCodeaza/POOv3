//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "Menu.h"
#include "House1.h"
#include "House2.h"
#include "House3.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
THouseForm1 *HouseForm1;
//---------------------------------------------------------------------------
__fastcall THouseForm1::THouseForm1(TComponent* Owner)
	: TForm(Owner)
{
	BorderStyle = bsNone;
	WindowState = TWindowState::wsMaximized;
}
//---------------------------------------------------------------------------
void __fastcall THouseForm1::ExitClick(TObject *Sender)
{
	Application->Terminate();
}
//---------------------------------------------------------------------------
void __fastcall THouseForm1::PreviousClick(TObject *Sender)
{
	TMenuForm *newForm= new TMenuForm(NULL);
	newForm->Show();
	this->Hide();
}
//---------------------------------------------------------------------------
void __fastcall THouseForm1::NextClick(TObject *Sender)
{
	THouseForm2 *newForm1= new THouseForm2(NULL);
	newForm1->Show();
	this->Hide();
}
//---------------------------------------------------------------------------
void __fastcall THouseForm1::Button2Click(TObject *Sender)
{
	THouseForm2 *newForm1= new THouseForm2(NULL);
	newForm1->Show();
	this->Hide();

}
//---------------------------------------------------------------------------
void __fastcall THouseForm1::Button3Click(TObject *Sender)
{
	THouseForm3 *newForm1= new THouseForm3(NULL);
	newForm1->Show();
	this->Hide();
}
//---------------------------------------------------------------------------
 void __fastcall THouseForm1::FormResize(TObject *Sender)
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