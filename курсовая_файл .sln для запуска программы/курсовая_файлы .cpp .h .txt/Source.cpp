// Source.cpp

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <Windows.h>
#include <string>
#include "Menu.h"

using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	EmployeeManager ems;
	FileManager file;
	Menu menu(&ems, &file);
	menu.showMenu();
	cout << endl;
	system("pause");
	return 0;
}


