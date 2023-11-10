//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
//#include <GLUT/glut.h>
//incercare de a include fullscreen^


#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;
//glutFullScreen();
//incercare de a include fullscreen^

//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
	: TForm(Owner)
{
Form2->BorderStyle=bsNone;
Form2->WindowState=wsMaximized;

}
//---------------------------------------------------------------------------
