
#include <vcl.h>
#pragma hdrstop

#include "VCL_Base_Console.hpp" //printf support for VCL apps

#include "VCLBaseForm.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm14 *Form14;

__fastcall TForm14::TForm14(TComponent* Owner) : TForm(Owner)
{
		InitializeDebugConsole();
}


void __fastcall TForm14::BN_CloseClick(TObject *Sender)
{
	Close();
}


void __fastcall TForm14::BN_StartClick(TObject *Sender)
{
	pme("Start pressed");
	printf("Start Pushed");
}


