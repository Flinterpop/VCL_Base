

#pragma hdrstop

#include "VCLBaseForm.h"



void __fastcall TForm14::BN_ClearClick(TObject *Sender)
{
	MemoDebug->Lines->Clear();
}

void  TForm14::pme(const char* fmt, ...)
{
	if (MemoDebug->Lines->Count > 1000) MemoDebug->Lines->Clear();

	va_list args;
	va_start(args, fmt);
	char buf[200];
	vsprintf(buf,fmt,args);
		MemoDebug->Lines->Add(buf);
	va_end(args);

	//scroll to bottom of text
	MemoDebug->SelStart = MemoDebug->Lines->Text.Length();
	MemoDebug->SelLength = 1;
	MemoDebug->ClearSelection();
}


void  TForm14::pme(String buf)
{
	if (MemoDebug->Lines->Count > 1000) MemoDebug->Lines->Clear();
	MemoDebug->Lines->Add(buf);


	//scroll to bottom of text
	MemoDebug->SelStart = MemoDebug->Lines->Text.Length();
	MemoDebug->SelLength = 1;
	MemoDebug->ClearSelection();
}





void  TForm14::HexDump(const unsigned char* m, int len)
{
std::string B;
	char buf[200];
	for (int x=0;x<len;x++) {
		sprintf(buf,"%02X ",m[x]);
		if ((0==x%16) & (x!=0)) B+="\r\n";
		B += buf;
	}

	pme(B.c_str());
}



