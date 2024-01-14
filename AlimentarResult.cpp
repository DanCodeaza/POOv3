//---------------------------------------------------------------------------
#include <vcl.h>
#include<fstream>
#pragma hdrstop
#include "Menu.h"
#include "AlimentarResult.h"
#include "Alimentar1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TAlimentarFormResult *AlimentarFormResult;
//---------------------------------------------------------------------------
 void __fastcall TAlimentarFormResult::ReadAndDisplayFileContent()
{
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
	inputFile.close();

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
	inputFile.close();
	int j,k;
	j=0;

	if(v[0]==0)
		j=j+730*4;
	else if (v[0]==1)
		j=j+730*2;
	else if(v[0]==2)
		j=j+730*1;

		if(v[1]==0)
		j=j+730*10;
	else if (v[1]==1)
		j=j+730*3;

		if(v[2]==0)
		j=j+730*1;
	else if (v[2]==1)
		j=j+730*3;
	else if(v[2]==2)
		j=j+730*8;

	if(v[3]==0)
		j=j+730*1;
	else if (v[3]==1)
		j=j+730*2;
	else if(v[3]==2)
		j=j+730*4;

	if(v[4]==0)
		j=j+730*10;
	else if (v[4]==1)
		j=j+730*4;
	else if(v[4]==2)
		j=j+730*1;

	if(v[5]==0)
		j=j+730*1;
	else if (v[5]==1)
		j=j+730*2;
	else if(v[5]==2)
		j=j+730*3;

	if(v[6]==0)
		j=j+730*7;
	else if (v[6]==1)
		j=j+730*3;
	else if(v[6]==2)
		j=j+730*1;

	if(v[7]==0)
		j=j+730*1;
	else if (v[7]==1)
		j=j+730*2;
	else if(v[7]==2)
		j=j+730*3;


	if(v[8]==0)
		j=j+730*1;
	else if (v[8]==1)
		j=j+730*2;
	else if(v[8]==2)
		j=j+730*3;

	if(v[9]==0)
		j=j+730*2;
	else if (v[9]==1)
		j=j+730*1;
	else if(v[9]==2)
		j=j+730*1;

	if(j<18979)
		{ShowMessage("Uncomplete quiz!Please fill all questions!");
		TAlimentarForm1 *newForm1= new TAlimentarForm1(NULL);
		newForm1->Show();
		this->Hide();
		 }
	Label4->Caption =j;
	int pb=25,o;
	o=j;
	o=o-18980;
	o=o/136;
	pb=pb+o;
    pb=100-pb;
	Label5->Caption=pb;
	ProgressBar1->Position =pb;
}


__fastcall TAlimentarFormResult::TAlimentarFormResult(TComponent* Owner)
	: TForm(Owner)
{
    BorderStyle = bsNone;
	WindowState = TWindowState::wsMaximized;
	ReadAndDisplayFileContent();
    Label7->Width=500;
    Label7->Caption="Here are some advices to became more eco-friendly:\n\nChoose locally-produced, seasonal, and organic foods.\nReduce meat consumption, as the production of meat has a significant environmental impact.\nMinimize food waste by planning meals and properly storing leftovers.";
}
//---------------------------------------------------------------------------


void __fastcall TAlimentarFormResult::ExitClick(TObject *Sender)
{
    Application->Terminate();
}
//---------------------------------------------------------------------------

void __fastcall TAlimentarFormResult::FormResize(TObject *Sender)
{
	Exit->Top = 1000;
	Exit->Left = 1750;
	Menu->Top = 1000;
    Menu->Left = 1625;
}
//---------------------------------------------------------------------------



void __fastcall TAlimentarFormResult::MenuClick(TObject *Sender)
{
	TMenuForm *newForm= new TMenuForm(NULL);
	newForm -> Show();
	this->Hide();
}
//---------------------------------------------------------------------------

