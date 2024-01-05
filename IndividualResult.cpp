//---------------------------------------------------------------------------

#include <vcl.h>
#include<fstream>
#pragma hdrstop

#include "IndividualResult.h"
#include "Individual1.h"
#include "Menu.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TIndividualFormResult *IndividualFormResult;
//---------------------------------------------------------------------------
__fastcall TIndividualFormResult::TIndividualFormResult(TComponent* Owner)
	: TForm(Owner)
{
    BorderStyle = bsNone;
	WindowState = TWindowState::wsMaximized;
}
//---------------------------------------------------------------------------
void __fastcall TIndividualFormResult::ExitClick(TObject *Sender)
{
   Application->Terminate();
}
//---------------------------------------------------------------------------

void __fastcall TIndividualFormResult::MenuClick(TObject *Sender)
{
	TMenuForm *newForm= new TMenuForm(NULL);
	newForm -> Show();
	this->Hide();
}
//---------------------------------------------------------------------------
void __fastcall TIndividualFormResult::FormResize(TObject *Sender)
{
	Exit->Top = 1000;
	Exit->Left = 1750;
	Menu->Top = 1000;
    Menu->Left = 1625;
}
