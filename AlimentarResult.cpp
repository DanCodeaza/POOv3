//---------------------------------------------------------------------------
#include <vcl.h>
#include<fstream>
#pragma hdrstop
#include "Menu.h"
#include "AlimentarResult.h"
#include "Alimentar1.h"
#include "Individual1.h"
#include "House1.h"
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
	else
		j=j+0;

		if(v[1]==0)
		j=j+730*10;
	else if (v[1]==1)
		j=j+730*3;
	else
		j=j+0;

		if(v[2]==0)
		j=j+730*1;
	else if (v[2]==1)
		j=j+730*3;
	else if(v[2]==2)
		j=j+730*8;
	else
		j=j+0;

	if(v[3]==0)
		j=j+730*1;
	else if (v[3]==1)
		j=j+730*2;
	else if(v[3]==2)
		j=j+730*4;
	else
		j=j+0;

	if(v[4]==0)
		j=j+730*10;
	else if (v[4]==1)
		j=j+730*4;
	else if(v[4]==2)
		j=j+730*1;
	else
		j=j+0;

	if(v[5]==0)
		j=j+730*1;
	else if (v[5]==1)
		j=j+730*2;
	else
		j=j+0;

	if(v[6]==0)
		j=j+730*7;
	else if (v[6]==1)
		j=j+730*3;
	else if(v[6]==2)
		j=j+730*1;
	else
		j=j+0;

	if(v[7]==0)
		j=j+730*1;
	else if (v[7]==1)
		j=j+730*2;
	else if(v[7]==2)
		j=j+730*3;
	else
		j=j+0;

	if(v[8]==0)
		j=j+730*3;
	else if (v[8]==1)
		j=j+730*2;
	else if(v[8]==2)
		j=j+730*1;
	else
		j=j+0;

	if(v[9]==0)
		j=j+730*1;
	else if (v[9]==1)
		j=j+730*1;
	else if(v[9]==2)
		j=j+730*2;
	else
		j=j+0;


	Label4->Caption =j;
	int pb=25,o;
	o=j;
	o=o-8760;
	o=o/400;
	pb=pb+o;
    pb=100-pb;
	ProgressBar1->Position = pb;
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
	Label7->Left=100;
	Label7->Top=300;
	Button2->Left=95;
	Button2->Top=600;
	Button1->Left=95;
	Button1->Top=500;

}
//---------------------------------------------------------------------------



void __fastcall TAlimentarFormResult::MenuClick(TObject *Sender)
{
	TMenuForm *newForm= new TMenuForm(NULL);
	newForm -> Show();
	this->Hide();
}
//---------------------------------------------------------------------------

void __fastcall TAlimentarFormResult::Button1Click(TObject *Sender)
{
const char* filename = "answer";

    std::ofstream file(filename, std::ofstream::trunc);

    if (file.is_open())
	{
        file.close();
	}
    else
	{
        ShowMessage("Unable to open the file.");
	}
	 const char* filename2 = "answer2";

	std::ofstream file2(filename2, std::ofstream::trunc);

	if (file2.is_open())
	{
		file2.close();
	}
	else
	{
		ShowMessage("Unable to open the file.");
	}
	 const char* filename3 = "answer3";

	std::ofstream file3(filename3, std::ofstream::trunc);

	if (file3.is_open())
	{
		file3.close();
	}
	else
	{
		ShowMessage("Unable to open the file.");
	}
	TIndividualForm1 *newForm1 = new TIndividualForm1(NULL);
	newForm1->Show();
	this->Hide();
}
//---------------------------------------------------------------------------

void __fastcall TAlimentarFormResult::Button2Click(TObject *Sender)
{
       const char* filename = "answer";

    std::ofstream file(filename, std::ofstream::trunc);

    if (file.is_open())
	{
        file.close();
	}
    else
	{
        ShowMessage("Unable to open the file.");
	}
	 const char* filename2 = "answer2";

	std::ofstream file2(filename2, std::ofstream::trunc);

	if (file2.is_open())
	{
		file2.close();
	}
	else
	{
		ShowMessage("Unable to open the file.");
	}
	 const char* filename3 = "answer3";

	std::ofstream file3(filename3, std::ofstream::trunc);

	if (file3.is_open())
	{
		file3.close();
	}
	else
	{
		ShowMessage("Unable to open the file.");
	}
	THouseForm1 *newForm1 = new THouseForm1(NULL);
	newForm1->Show();
	this->Hide();
}
//---------------------------------------------------------------------------


