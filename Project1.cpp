//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <tchar.h>
//---------------------------------------------------------------------------
USEFORM("Menu.cpp", MenuForm);
USEFORM("TellMeMore.cpp", TellMeMoreForm);
USEFORM("Alimentar1.cpp", AlimentarForm1);
USEFORM("Alimentar2.cpp", AlimentarForm2);
USEFORM("Alimentar3.cpp", AlimentarForm3);
USEFORM("AlimentarResult.cpp", AlimentarFormResult);
USEFORM("Individual1.cpp", IndividualForm1);
USEFORM("Individual2.cpp", IndividualForm2);
USEFORM("Individual3.cpp", IndividualForm3);
USEFORM("IndividualResult.cpp", IndividualFormResult);
//---------------------------------------------------------------------------
int WINAPI _tWinMain(HINSTANCE, HINSTANCE, LPTSTR, int)
{
	try
	{
		Application->Initialize();
		Application->CreateForm(__classid(TMenuForm), &MenuForm);
		Application->CreateForm(__classid(TTellMeMoreForm), &TellMeMoreForm);
		Application->CreateForm(__classid(TAlimentarForm1), &AlimentarForm1);
		Application->CreateForm(__classid(TAlimentarForm2), &AlimentarForm2);
		Application->CreateForm(__classid(TAlimentarForm3), &AlimentarForm3);
		Application->CreateForm(__classid(TAlimentarFormResult), &AlimentarFormResult);
		Application->CreateForm(__classid(TIndividualForm1), &IndividualForm1);
		Application->CreateForm(__classid(TIndividualForm2), &IndividualForm2);
		Application->CreateForm(__classid(TIndividualForm3), &IndividualForm3);
		Application->CreateForm(__classid(TIndividualFormResult), &IndividualFormResult);
		Application->Run();
	}
	catch (Exception &exception)
	{
		Application->ShowException(&exception);
	}
	catch (...)
	{
		try
		{
			throw Exception("");
		}
		catch (Exception &exception)
		{
			Application->ShowException(&exception);
		}
	}
	return 0;
}
//---------------------------------------------------------------------------
