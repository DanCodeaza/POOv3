//---------------------------------------------------------------------------

#include <vcl.h>
#include <fstream>
#pragma hdrstop

#include "Individual1.h"
#include "Individual2.h"
#include "Individual3.h"
#include "IndividualResult.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TIndividualForm3 *IndividualForm3;
//---------------------------------------------------------------------------
__fastcall TIndividualForm3::TIndividualForm3(TComponent* Owner)
	: TForm(Owner)
{
	BorderStyle = bsNone;
	WindowState = TWindowState::wsMaximized;
}
//---------------------------------------------------------------------------
void __fastcall TIndividualForm3::PreviousClick(TObject *Sender)
{
	TIndividualForm2* newForm = new TIndividualForm2(NULL);
	newForm -> Show();
	this->Hide();
}
//---------------------------------------------------------------------------

void __fastcall TIndividualForm3::ExitClick(TObject *Sender)
{
	Application->Terminate();
}
//---------------------------------------------------------------------------

void __fastcall TIndividualForm3::NextClick(TObject *Sender)
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
	for(i=0;i<3;i++)
		if(v[i]<0)
			ok1=0;
	for(i=3;i<7;i++)
		if(v[i]<0)
			ok2=0;
	for(i=7;i<10;i++)
		if(v[i]<0)
			ok3=0;
	if(ok1==0)
		{ShowMessage("Uncomplete quiz!Please fill all questions!");
		ok1=1;
		TIndividualForm1 *newForm1= new TIndividualForm1(NULL);
		newForm1->Show();
		this->Hide();
		 }
	else if (ok2==0) {
		ShowMessage("Uncomplete quiz!Please fill all questions!");
		ok2=1;
	TIndividualForm2 *newForm1= new TIndividualForm2(NULL);
		newForm1->Show();
		this->Hide();
		 }
	else if(ok3==0){
		ShowMessage("Uncomplete quiz!Please fill all questions!");
		ok3=1;
	TIndividualForm3 *newForm1= new TIndividualForm3(NULL);
		newForm1->Show();
		this->Hide();}
	else  {
	TIndividualFormResult* newForm1 = new TIndividualFormResult(NULL);
	newForm1 -> Show();
	this->Hide();
    }
}
//---------------------------------------------------------------------------

void __fastcall TIndividualForm3::Button1Click(TObject *Sender)
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
	TIndividualForm1* newForm = new TIndividualForm1(NULL);
	newForm -> Show();
	this->Hide();
}
//---------------------------------------------------------------------------

void __fastcall TIndividualForm3::Button2Click(TObject *Sender)
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
	TIndividualForm2 *newForm = new TIndividualForm2(NULL);
	newForm -> Show();
	this->Hide();
}
//---------------------------------------------------------------------------
void __fastcall TIndividualForm3::FormResize(TObject *Sender)
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
}
