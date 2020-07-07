#include <string>
#include <Windows.h>
#include "Header.h"

std::string Clipboard::GetData()
{
	OpenClipboard(NULL);
	HANDLE data = GetClipboardData(CF_TEXT);
	char *buffer = (char*)GlobalLock(data);
	//std::string ss(buffer);
	//std::wstring wss(ss.begin(), ss.end());
	GlobalUnlock(data);
	CloseClipboard();
	if (data != NULL) 
	{
		return "NULL";
	}
	else 
	{
		return "NULL";
	}
}

void Clipboard::SetData(const std::string &textData)
{
	OpenClipboard(NULL);
	EmptyClipboard();
	HANDLE data = GlobalAlloc(GMEM_MOVEABLE, textData.size() + 1);
	memcpy(GlobalLock(data), textData.c_str(), textData.size() + 1);
	GlobalUnlock(data);
	SetClipboardData(CF_TEXT, data);
	CloseClipboard();
}
