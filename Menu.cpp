//---------------------------------------------------------------------------

#include <vcl.h>
#include <fstream>
#pragma hdrstop

#include "Menu.h"
#include "TellMeMore.h"
#include "Alimentar1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TMenuForm *MenuForm;
//---------------------------------------------------------------------------
__fastcall TMenuForm::TMenuForm(TComponent* Owner)
	: TForm(Owner)
{
	BorderStyle=bsNone;
	WindowState=wsMaximized;
    Label1->Font->Size=11;
	Label1->Caption ="Carbon dioxide (CO2) stands as a critical component in the Earth's atmosphere, wielding a powerful influence on the delicate balance of our planet's climate. Its presence is both a blessing and a curse, playing a pivotal role in maintaining a habitable environment for life on Earth, while also contributing to the challenges associated with climate change.CO2 is a natural component of the Earth's atmosphere, forming a small but potent fraction of the overall composition. Its primary role lies in the greenhouse effect, a process that enables the Earth to retain heat from the sun, creating a temperature suitable for life. Without this greenhouse effect, the planet would be a frigid and inhospitable place. CO2, along with other greenhouse gases such as water vapor and methane, absorbs and re-emits infrared radiation, preventing it from escaping back into space. However, the rise in anthropogenic activities, particularly the burning of fossil fuels and deforestation, has led to a significant increase in atmospheric CO2 levels. This amplified presence contributes to the intensification of the greenhouse effect, leading to global warming and climate change. The consequences of this phenomenon are diverse and far-reaching. One of the most notable impacts of elevated CO2 levels is the alteration of weather patterns. Changes in temperature and precipitation patterns result in more frequent and severe weather events, such as hurricanes, droughts, and heatwaves. These events pose a threat to ecosystems, agriculture, and human communities, disrupting the delicate balance that sustains life. Furthermore, the oceans, acting as a vast carbon sink, absorb a substantial amount of atmospheric CO2. While this helps mitigate the impacts of climate change to some extent, it leads to ocean acidification—a consequence with profound implications for marine life. Acidification affects the growth and development of marine organisms, including corals, mollusks, and plankton, disrupting entire ecosystems and threatening the biodiversity of the oceans. Efforts to mitigate the influence of CO2 involve a combination of strategies, ranging from transitioning to renewable energy sources to reforestation projects and sustainable land management. International agreements, such as the Paris Agreement, highlight the global commitment to curbing CO2 emissions and mitigating the impacts of climate change.In conclusion, the influence of CO2 on Earth's climate is undeniable, shaping the conditions that support life on our planet. However, the dramatic increase in CO2 levels due to human activities poses a significant threat, amplifying the challenges associated with climate change. Addressing this complex issue requires global cooperation and a concerted effort to reduce emissions and embrace sustainable practices, ensuring a healthier and more stable future for generations to come.";
}
//---------------------------------------------------------------------------
void __fastcall TMenuForm::ExitClick(TObject *Sender)
{
       Application->Terminate();
}
//---------------------------------------------------------------------------
void __fastcall TMenuForm::TellMeMoreClick(TObject *Sender)
{
	TTellMeMoreForm *newForm = new TTellMeMoreForm(NULL);
	newForm->Position = poDefault;
	newForm->Show();
	this->Hide();
}
//---------------------------------------------------------------------------

void __fastcall TMenuForm::ACAlimentarClick(TObject *Sender)
{
     const char* filename = "C:/Users/iontu/OneDrive/Documente/Embarcadero/Studio/Projects/actual/POOv3-main/Alimentar_ans/answer";

    std::ofstream file(filename, std::ofstream::trunc);

    if (file.is_open())
	{
        file.close();
    }
    else
    {
        ShowMessage("Unable to open the file.");
	}
	 const char* filename2 = "C:/Users/iontu/OneDrive/Documente/Embarcadero/Studio/Projects/actual/POOv3-main/Alimentar_ans/answer2";

	std::ofstream file2(filename2, std::ofstream::trunc);

	if (file2.is_open())
	{
		file2.close();
	}
	else
	{
		ShowMessage("Unable to open the file.");
	}
	 const char* filename3 = "C:/Users/iontu/OneDrive/Documente/Embarcadero/Studio/Projects/actual/POOv3-main/Alimentar_ans/answer3";

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

void __fastcall TMenuForm::FormResize(TObject *Sender)
{
	Exit->Width = ClientWidth / 20;
	Exit->Height = ClientHeight / 20;
    Exit->Top = 975;
	ACAlimentar->Width = ClientWidth / 3;
	ACAlimentar->Height = ClientHeight / 20;
	ACAlimentar->Top = 590;
	ACHouse->Width = ClientWidth / 3;
	ACHouse->Height = ClientHeight / 20;
	ACHouse->Top = 510;
	ACIndividual->Width = ClientWidth / 3;
	ACIndividual->Height = ClientHeight / 20;
    ACIndividual->Top = 430;
	TellMeMore->Width = ClientWidth / 3;
	TellMeMore->Height = ClientHeight / 20;
	TellMeMore->Top = 700;
	Label1->Width = ClientWidth - 100;
	Label1->Left = 50;
	Image1->Top = 430;
    Image1->Left = 1000;
}
//---------------------------------------------------------------------------

