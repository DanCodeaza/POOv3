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
	const char* filePath="C:/Users/iontu/OneDrive/Documente/Embarcadero/Studio/Projects/actual/POOv3-main/Alimentar_ans/answer3";
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
	std::ifstream inputFile("C:/Users/iontu/OneDrive/Documente/Embarcadero/Studio/Projects/actual/POOv3-main/Alimentar_ans/answer");

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

	   std::ifstream inputFile2("C:/Users/iontu/OneDrive/Documente/Embarcadero/Studio/Projects/actual/POOv3-main/Alimentar_ans/answer2");

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

	 std::ifstream inputFile3("C:/Users/iontu/OneDrive/Documente/Embarcadero/Studio/Projects/actual/POOv3-main/Alimentar_ans/answer3");

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

	Label1->Left = 100;
	Label1->Top = 100;
	Label2->Left = 100;
	Label2->Top = 325;
	Label3->Left = 100;
	Label3->Top = 550;
	Label4->Left=100;
	Label4->Top=775;

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
	const char* filePath="C:/Users/iontu/OneDrive/Documente/Embarcadero/Studio/Projects/actual/POOv3-main/Alimentar_ans/answer3";
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
	const char* filePath="C:/Users/iontu/OneDrive/Documente/Embarcadero/Studio/Projects/actual/POOv3-main/Alimentar_ans/answer3";
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

