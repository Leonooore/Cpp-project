//FileManager.h

#pragma once

#include <iostream> 
#include <string> 
#include "SotrudnikManager.h"
#include <fstream>

using namespace std;

class FileManager {
public:
	void LoadFromFile(EmployeeManager* ems);
	void SaveToFile(EmployeeManager* ems);
};

