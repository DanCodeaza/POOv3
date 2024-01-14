//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "HouseResult.h"
#include "Menu.h"
#include "House1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
THouseFormResult *HouseFormResult;
//---------------------------------------------------------------------------
__fastcall THouseFormResult::THouseFormResult(TComponent* Owner)
	: TForm(Owner)
{  	BorderStyle = bsNone;
	WindowState = TWindowState::wsMaximized;
}
//---------------------------------------------------------------------------
void __fastcall THouseFormResult::MenuClick(TObject *Sender)
{
	TMenuForm *newForm= new TMenuForm(NULL);
	newForm -> Show();
	this->Hide();
}
//---------------------------------------------------------------------------

void __fastcall THouseFormResult::ExitClick(TObject *Sender)
{
    Application->Terminate();
}
//---------------------------------------------------------------------------


