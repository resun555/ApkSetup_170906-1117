// ApkSetup.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#pragma warning(disable:4996)


int main()
{
	system("C:");
	system("cd C:\\Users\\EwacEbup\\Downloads\\platform-tools");
	system("adb.exe kill-server");
	system("adb.exe start-server");
	char buffer[4];
	int package = 135;
	int base = 10;
	for (int i = 0; i < package; i++)
	{
		_itoa(i + 1, buffer, base);
		char adb[39] = "adb.exe install \".\\apk\\base (";
		system(strcat(strcat(adb, buffer), ").apk\""));
	}
	system("adb.exe kill-server");
	system("pause");
	return 0;
}

