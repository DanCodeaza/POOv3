//---------------------------------------------------------------------------

#include <vcl.h>
#include<fstream>
#pragma hdrstop

#include "House1.h"
#include "House2.h"
#include "House3.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
THouseForm2 *HouseForm2;
//---------------------------------------------------------------------------
__fastcall THouseForm2::THouseForm2(TComponent* Owner)
	: TForm(Owner)
{
	BorderStyle = bsNone;
	WindowState = TWindowState::wsMaximized;
}
//---------------------------------------------------------------------------
void __fastcall THouseForm2::PreviousClick(TObject *Sender)
{
	THouseForm1* newForm1 = new THouseForm1(NULL);
	newForm1 -> Show();
	this->Hide();
}
//---------------------------------------------------------------------------


void __fastcall THouseForm2::NextClick(TObject *Sender)
{
    const char* filePath="answer2";
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

	THouseForm3* newForm = new THouseForm3(NULL);
	newForm -> Show();
	this->Hide();
}
//---------------------------------------------------------------------------

void __fastcall THouseForm2::ExitClick(TObject *Sender)
{
	Application->Terminate();
}
//---------------------------------------------------------------------------

void __fastcall THouseForm2::Button1Click(TObject *Sender)
{
	const char* filePath="answer2";
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

	THouseForm1* newForm1 = new THouseForm1(NULL);
	newForm1 -> Show();
	this->Hide();
}
//---------------------------------------------------------------------------

void __fastcall THouseForm2::Button3Click(TObject *Sender)
{
    const char* filePath="answer2";
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

	THouseForm3* newForm = new THouseForm3(NULL);
	newForm -> Show();
	this->Hide();
}
//---------------------------------------------------------------------------
 void __fastcall THouseForm2::FormResize(TObject *Sender)
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
