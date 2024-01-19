//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Credits.h"
#include "Menu.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TCreditForm *CreditForm;
//---------------------------------------------------------------------------
__fastcall TCreditForm::TCreditForm(TComponent* Owner)
	: TForm(Owner)
{
BorderStyle = bsNone;
	WindowState = TWindowState::wsMaximized;
}
//---------------------------------------------------------------------------
void __fastcall TCreditForm::FormResize(TObject *Sender)
{
	Label1->Top = 200;
	Label1->Left = ClientWidth / 3;
	Label1->Width =    ClientWidth/3;
	Label1->WordWrap = true;  // Enable word wrapping
	Label1->Height = 150;
	Image1->Top = 100;
	Image1->Left = 1550;
    Exit->Width = ClientWidth / 20;
	Exit->Height = ClientHeight / 20;
	Exit->Top = 875;

	Menu->Width = ClientWidth / 20;
	Menu->Height = ClientHeight / 20;
	Menu->Top = 875;
	Exit->Left = 200;

}
//---------------------------------------------------------------------------
void __fastcall TCreditForm::ExitClick(TObject *Sender)
{
Application->Terminate();
}
//---------------------------------------------------------------------------
void __fastcall TCreditForm::MenuClick(TObject *Sender)
{
TMenuForm *newForm= new TMenuForm(NULL);
	newForm->Show();
	this->Hide();
}
//---------------------------------------------------------------------------
