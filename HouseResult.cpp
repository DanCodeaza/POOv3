//---------------------------------------------------------------------------

#include <vcl.h>
#include <fstream >
#pragma hdrstop

#include "HouseResult.h"
#include "Menu.h"
#include "House1.h"
#include "Alimentar1.h"
#include "Individual1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
THouseFormResult *HouseFormResult;
//---------------------------------------------------------------------------
 void __fastcall THouseFormResult::ReadAndDisplayFileContent()
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
		j=j+500;
	else if (v[0]==1)
		j=j+500;
	else if(v[0]==2)
		j=j+5300;
	else if(v[0]==3)
		j=j+9800;
	else
		j=j+0;

		if(v[1]==0)
		j=j+1500;
	else if (v[1]==1)
		j=j+3000;
	else if(v[1]==2)
		j=j+4500;
	else if (v[1]==3)
        j=j+6000;
	else
		j=j+0;

		if(v[2]==0)
		j=j+6000;
	else if (v[2]==1)
		j=j+3000;
	else if(v[2]==2)
		j=j+4500;
	else if(v[2]==3)
		j=j+6000;
		j=j+0;

	if(v[3]==0)
		j=j+1500;
	else if (v[3]==1)
		j=j+3000;
	else if(v[11]==2)
		j=j+4500;
	else if(v[3]==3)
		j=j+6000;
	else
		j=j+0;

	if(v[4]==0)
		j=j+1500;
	else if (v[4]==1)
		j=j+3000;
	else if(v[4]==2)
		j=j+4500;
	else if(v[4]==3)
		j=j+6000;
	else
		j=j+0;

	if(v[5]==0)
		j=j+1500;
	else if (v[5]==1)
		j=j+3000;
	else if(v[5]==2)
		j=j+4500;
	else if(v[5]==3)
		j=j+6000;
	else
		j=j+0;

	if(v[6]==0)
		j=j+1500;
	else if (v[6]==1)
		j=j+3000;
	else if(v[6]==2)
		j=j+4500;
	else if(v[6]==3)
		j=j+6000;
	else
		j=j+0;

	if(v[7]==0)
		j=j+1500;
	else if (v[7]==1)
		j=j+3000;
	else if(v[7]==2)
		j=j+4500;
	else if(v[7]==3)
		j=j+6000;
	else
		j=j+0;

	if(v[8]==0)
		j=j+1500;
	else if (v[8]==1)
		j=j+3000;
	else if(v[8]==2)
		j=j+4500;
	else if(v[8]==3)
		j=j+6000;
	else
		j=j+0;

	if(v[9]==0)
		j=j+1500;
	else if (v[9]==1)
		j=j+3000;
	else if(v[9]==2)
		j=j+4500;
	else if(v[9]==3)
		j=j+6000;
	else
		j=j+0;

	if(v[10]==0)
		j=j+1500;
	else if (v[10]==1)
		j=j+3000;
	else if(v[10]==2)
		j=j+4500;
	else if(v[10]==3)
		j=j+6000;
	else
		j=j+0;

	if(v[11]==0)
		j=j+1500;
	else if (v[11]==1)
		j=j+3000;
	else if(v[11]==2)
		j=j+4500;
	else if(v[11]==3)
		j=j+6000;
	else
		j=j+0;


	Label4->Caption =j;
	int pb=25,o;
	o=j;
	o=o-18500;
	o=o/764;
	pb=pb+o;
    pb=100-pb;
	Label5->Caption=pb;
	ProgressBar1->Position =pb;
}


__fastcall THouseFormResult::THouseFormResult(TComponent* Owner)
	: TForm(Owner)
{  	BorderStyle = bsNone;
	WindowState = TWindowState::wsMaximized;
	ReadAndDisplayFileContent();
    Label7->Width=500;
	Label7->Caption="Here are some tips to build an eco-friendly house:\nChoose a smaller home for a smaller eco-footprint.\nOrient your home to take advantage of sun and wind.\nInstall energy- and water-efficient appliances.\nUse recycled, renewable and/or locally sourced building materials";

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


void __fastcall THouseFormResult::FormResize(TObject *Sender)
{
	Exit->Top = 1000;
	Exit->Left = 1750;
	Menu->Top = 1000;
    Menu->Left = 1625;
}
//---------------------------------------------------------------------------

void __fastcall THouseFormResult::Button1Click(TObject *Sender)
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

void __fastcall THouseFormResult::Button2Click(TObject *Sender)
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
	TAlimentarForm1 *newForm1 = new TAlimentarForm1(NULL);
	newForm1->Show();
	this->Hide();
}
//---------------------------------------------------------------------------

void __fastcall THouseFormResult::Button3Click(TObject *Sender)
{
    TStringList *sl = new TStringList();
	sl->Assign(Feedback->Lines);
	sl->SaveToFile("Feedback", TEncoding::UTF8);
	delete sl;
}
