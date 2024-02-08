//---------------------------------------------------------------------------

#include <vcl.h>
#include <fstream>
#pragma hdrstop

#include "Alimentar1.h"
#include "Menu.h"
#include "Alimentar2.h"
#include "Alimentar3.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TAlimentarForm1 *AlimentarForm1;
//---------------------------------------------------------------------------
__fastcall TAlimentarForm1::TAlimentarForm1(TComponent* Owner)
	: TForm(Owner)
{
	BorderStyle = bsNone;
	WindowState = TWindowState::wsMaximized;
}
//---------------------------------------------------------------------------
void __fastcall TAlimentarForm1::ExitClick(TObject *Sender)
{
	Application->Terminate();
}
//---------------------------------------------------------------------------
void __fastcall TAlimentarForm1::PreviousClick(TObject *Sender)
{
	TMenuForm *newForm= new TMenuForm(NULL);
	newForm->Show();
	this->Hide();
}
//---------------------------------------------------------------------------
 void __fastcall TAlimentarForm1::NextClick(TObject *Sender)
{
	const char* filePath="answer";
	std::ofstream outputFile(filePath);
	  if (!outputFile.is_open()) {
		ShowMessage("Error: Could not open the file " + AnsiString(filePath));
		return;
	}
	outputFile << RadioGroup1->ItemIndex << std::endl;
	outputFile << RadioGroup2->ItemIndex << std::endl;
	outputFile << RadioGroup3->ItemIndex << std::endl;
	outputFile << RadioGroup4->ItemIndex << std::endl;
	outputFile.close();

	TAlimentarForm2 *newForm1= new TAlimentarForm2(NULL);
	newForm1->Show();
	this->Hide();
}
//---------------------------------------------------------------------------

void __fastcall TAlimentarForm1::FormResize(TObject *Sender)
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
//---------------------------------------------------------------------------


void __fastcall TAlimentarForm1::Button2Click(TObject *Sender)
{
	const char* filePath="answer";
	std::ofstream outputFile(filePath);
      if (!outputFile.is_open()) {
        ShowMessage("Error: Could not open the file " + AnsiString(filePath));
        return;
	}
    outputFile << RadioGroup1->ItemIndex << std::endl;
	outputFile << RadioGroup2->ItemIndex << std::endl;
	outputFile << RadioGroup3->ItemIndex << std::endl;
	outputFile << RadioGroup4->ItemIndex << std::endl;
	outputFile.close();
	TAlimentarForm2 *newForm1= new TAlimentarForm2(NULL);
	newForm1->Show();
	this->Hide();
}
//---------------------------------------------------------------------------

void __fastcall TAlimentarForm1::Button3Click(TObject *Sender)
{
	const char* filePath="answer";
	std::ofstream outputFile(filePath);
	  if (!outputFile.is_open()) {
		ShowMessage("Error: Could not open the file " + AnsiString(filePath));
        return;
	}
	outputFile << RadioGroup1->ItemIndex << std::endl;
	outputFile << RadioGroup2->ItemIndex << std::endl;
	outputFile << RadioGroup3->ItemIndex << std::endl;
	outputFile << RadioGroup4->ItemIndex << std::endl;
	outputFile.close();
	TAlimentarForm3 *newForm1= new TAlimentarForm3(NULL);
	newForm1->Show();
	this->Hide();
}
//---------------------------------------------------------------------------








