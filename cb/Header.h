#pragma once
#include <string>
#include <Windows.h>



namespace  Clipboard {
	 std::string GetData();
	 void SetData(const std::string &textData);
}