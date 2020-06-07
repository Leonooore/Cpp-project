// SotrudnikManager.h

#pragma once
#include <iostream>
#include <string>
#include "Sotrudniki.h"
#include "WorkTime.h"
#define SIZE 10

class EmployeeManager: public Employee, public WorkTime {
private:
	int currentEmployeeSize;
	int maxEmployeeSize;
	Employee* employee;

	int currentTimeWorkSize;
	int maxTimeWorkSize;
	WorkTime* time;
public:
	EmployeeManager();
	EmployeeManager(int employee_code, string surname, string name, string patronymic, string number, string pozition);
	EmployeeManager(int empl_code, string date, int StartWorkHour, int StartWorkMin, int FinishWorkHour, int FinishWorkMin, int StartBreakHour, int StartBreakMin, int FinishBreakHour, int FinishBreakMin);
	~EmployeeManager();
	void add_employee();
	void add_time();
	Employee* findEmployeeByCode(int);
	WorkTime* findWorkTimeByEmployeeCode(int);
	void printEmployee();
	EmployeeManager* printTime();
	void deleteAll();
	Employee* deleteEmployeeBySurname(string);
	Employee* getEmployee();
	WorkTime* getTime();
	void addEmployee(Employee empl);
	void addTime(WorkTime tw);
	int getEmployeeCurrentSize();
	int getTimeCurrentSize();
};