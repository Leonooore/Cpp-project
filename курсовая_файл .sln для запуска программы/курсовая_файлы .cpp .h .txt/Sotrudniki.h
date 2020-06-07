// Sotrudniki.h

#pragma once
#include <iostream>
#include <string>
#define SIze 10

using namespace std;

class Employee {
private:
	int employee_code;
	string surname;
	string name;
	string patronymic;
	string number;
	string pozition;
public:
	Employee();
	Employee(int);
	Employee(int, string, string, string, string, string);
	~Employee();
	int getemployee_code();
	string getsurname();
	string getname();
	string getpatronymic();
	string getnumber();
	string getpozition();
	void print_employee();

	friend ostream& operator << (ostream& out, const Employee& obj);
	friend istream& operator >> (istream& in, Employee& obj);
};
