//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <tchar.h>
//---------------------------------------------------------------------------
USEFORM("TellMeMore.cpp", TellMeMoreForm);
USEFORM("Menu.cpp", MenuForm);
USEFORM("Alimentar1.cpp", AlimentarForm1);
USEFORM("Alimentar2.cpp", AlimentarForm2);
USEFORM("Alimentar3.cpp", AlimentarForm3);
USEFORM("AlimentarResult.cpp", AlimentarFormResult);
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
