// Menu.h

#pragma once
#include <iostream>
#include <string>
#include "SotrudnikManager.h"
#include "FileManager.h"

class Menu {
private:
	EmployeeManager* ems;
	FileManager* file;
public:
	Menu();
	Menu(EmployeeManager* ems, FileManager* file);
	void showMenu();
};
