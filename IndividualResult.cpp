//---------------------------------------------------------------------------
    #include <System.Classes.hpp>
#include <System.SysUtils.hpp>
#include <System.IOUtils.hpp>
#include <vcl.h>
#include<fstream>
#pragma hdrstop

#include "IndividualResult.h"
#include "Individual1.h"
#include "Menu.h"
#include "Alimentar1.h"
#include "House1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TIndividualFormResult *IndividualFormResult;
//---------------------------------------------------------------------------
void __fastcall TIndividualFormResult::ReadAndDisplayFileContent()
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

	for(i=0;i<10;i++)
		ShowMessage(v[i]);
}

__fastcall TIndividualFormResult::TIndividualFormResult(TComponent* Owner)
	: TForm(Owner)
{
    BorderStyle = bsNone;
	WindowState = TWindowState::wsMaximized;
    Label7->Width=500;
	Label7->Caption="Eat low on the food chain by consuming mostly fruits, veggies, grains, and beans.\nChoose organic and local foods that are in season.\nBuy foodstuffs in bulk when possible using your own reusable container.\nReduce your food waste by planning meals ahead of time, freezing the excess and reusing leftovers.";

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

void __fastcall TIndividualFormResult::FormActivate(TObject *Sender)
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

	int j=0;
	if(v[0]==0)
		j=j+240;
	else
		if(v[0]==1)
			j=j+150;
	else
		if(v[0]==2)
			j=j+100;
	else
		j=j+0;

	if(v[1]==0)
		j=j+500;
	else
		if(v[1]==1)
			j=j+150;
	else
		if(v[1]==2)
			j=j+100;
	else
		j=j+0;

	if(v[2]==0)
		j=j+400;
	else
		if(v[2]==1)
			j=j+50;
	else
		if(v[2]==2)
			j=j+20;
	else
		if(v[2]==3)
			j=j+40;
	else
		if(v[2]==4)
            j=j+50;
	else
		j=j+0;

	if(v[3]==0)
		j=j+180;
	else
		if(v[3]==1)
			j=j+100;
	else
		if(v[3]==2)
			j=j+700;
	else
		if(v[3]==1)
			j=j+50;
	else
		if(v[3]==2)
			j=j+30;
	else
		j=j+0;

	if(v[4]==0)
		j=j+180;
	else
		if(v[4]==1)
			j=j+90;
	else
		if(v[4]==2)
			j=j+70;
	else
		if(v[4]==3)
			j=j+50;
	else
		if(v[4]==4)
            j=j+30;
	else
		j=j+0;

	if(v[5]==0)
		j=j+2000;
	else
		if(v[5]==1)
			j=j+1500;
	else
		if(v[5]==2)
			j=j+1000;
	else
		if(v[5]==3)
			j=j+750;
	else
		if(v[5]==4)
			j=j+500;
	else
		j=j+0;

	if(v[6]==0)
		j=j+100;
	else
		if(v[6]==1)
			j=j+200;
	else
		j=j+0;

	if(v[7]==0)
		j=j+50;
	else
		if(v[7]==1)
			j=j+100;
	else
		j=j+0;

	if(v[8]==0)
		j=j+60;
	else
		if(v[8]==1)
			j=j+70;
	else
		if(v[8]==2)
			j=j+80;
	else
		if(v[8]==3)
			j=j+90;
	else
		if(v[8]==4)
            j=j+100;
	else
		j=j+0;

	if(v[9]==0)
		j=j+10;
	else
		if(v[9]==1)
			j=j+20;
	else
		if(v[9]==2)
			j=j+30;
	else
		if(v[9]==3)
			j=j+40;
	else
		if(v[9]==4)
			j=j+50;
	else
		j=j+0;

	Label2->Caption=j;
    int o;
	o=j;
	o=o-1020;
	o=o/46;
	o=o+25;
	o=100-o;
	ProgressBar1->Position=o;
    Label5->Caption =o;
}
//---------------------------------------------------------------------------


void __fastcall TIndividualFormResult::Button1Click(TObject *Sender)
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


void __fastcall TIndividualFormResult::Button2Click(TObject *Sender)
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

void __fastcall TIndividualFormResult::Button3Click(TObject *Sender)
{
	TStringList *sl = new TStringList();
	sl->Assign(FeedBack->Lines);
	sl->SaveToFile("Feedback", TEncoding::UTF8);
	delete sl;
}
//---------------------------------------------------------------------------

