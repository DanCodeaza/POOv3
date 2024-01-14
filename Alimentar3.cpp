//---------------------------------------------------------------------------

#include <vcl.h>
#include <fstream>
#pragma hdrstop

#include "Alimentar3.h"
#include "Alimentar2.h"
#include "Alimentar1.h"
#include "AlimentarResult.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TAlimentarForm3 *AlimentarForm3;
//---------------------------------------------------------------------------
__fastcall TAlimentarForm3::TAlimentarForm3(TComponent* Owner)
	: TForm(Owner)
{
	BorderStyle = bsNone;
	WindowState = TWindowState::wsMaximized;
}
//---------------------------------------------------------------------------
void __fastcall TAlimentarForm3::PreviousClick(TObject *Sender)
{

	TAlimentarForm2* newForm = new TAlimentarForm2(NULL);
	newForm -> Show();
	this->Hide();
}
//---------------------------------------------------------------------------

void __fastcall TAlimentarForm3::NextClick(TObject *Sender)
{
	const char* filePath="answer3";
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
    	int v[13]={0},i=0;
	// Open a text file for reading
	std::ifstream inputFile("answer");

	// Check if the file is open
	if (!inputFile.is_open()) {
		ShowMessage("Error opening the file!");
		return;
	}

	// Read data from the file
	std::string line;
	while (std::getline(inputFile, line)) {
		v[i]=int(line[0]-48);
		i++;
	}

	// Close the file
	inputFile.close();

	   std::ifstream inputFile2("answer2");

	// Check if the file is open
	if (!inputFile2.is_open()) {
		ShowMessage("Error opening the file!");
		return;
	}

	// Read data from the file
	 line;
	while (std::getline(inputFile2, line)) {
		v[i]=int(line[0]-48);
		i++;
	}

	// Close the file
	inputFile2.close();

	 std::ifstream inputFile3("answer3");

	// Check if the file is open
	if (!inputFile3.is_open()) {
		ShowMessage("Error opening the file!");
		return;
	}

	// Read data from the file
	line;
	while (std::getline(inputFile3, line)) {

		v[i]=int(line[0]-48);
		i++;
	}

	// Close the file
	inputFile3.close();
	int ok1=1,ok2=1,ok3=1;
	for(i=0;i<4;i++)
		if(v[i]<0)
			ok1=0;
	for(i=4;i<8;i++)
		if(v[i]<0)
			ok2=0;
	for(i=8;i<12;i++)
		if(v[i]<0)
			ok3=0;
	if(ok1==0)
		{ShowMessage("Uncomplete quiz!Please fill all questions!");
        ok1=1;
		TAlimentarForm1 *newForm1= new TAlimentarForm1(NULL);
		newForm1->Show();
		this->Hide();
		 }
	else if (ok2==0) {
		ShowMessage("Uncomplete quiz!Please fill all questions!");
		ok2=1;
		TAlimentarForm2 *newForm1= new TAlimentarForm2(NULL);
		newForm1->Show();
		this->Hide();
		 }
	else if(ok3==0){
		ShowMessage("Uncomplete quiz!Please fill all questions!");
        ok3=1;
		TAlimentarForm3 *newForm1= new TAlimentarForm3(NULL);
		newForm1->Show();
		this->Hide();}
	else
	{
	TAlimentarFormResult* newForm1 = new TAlimentarFormResult(NULL);
	newForm1 -> Show();
	this->Hide();
    }
}
//---------------------------------------------------------------------------

void __fastcall TAlimentarForm3::ExitClick(TObject *Sender)
{
	Application->Terminate();
}
//---------------------------------------------------------------------------

void __fastcall TAlimentarForm3::FormResize(TObject *Sender)
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

void __fastcall TAlimentarForm3::Button1Click(TObject *Sender)
{
	const char* filePath="answer3";
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
	TAlimentarForm1* newForm = new TAlimentarForm1(NULL);
	newForm -> Show();
	this->Hide();
}
//---------------------------------------------------------------------------

void __fastcall TAlimentarForm3::Button2Click(TObject *Sender)
{
	const char* filePath="answer3";
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
	TAlimentarForm2* newForm = new TAlimentarForm2(NULL);
	newForm -> Show();
	this->Hide();
}
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------

