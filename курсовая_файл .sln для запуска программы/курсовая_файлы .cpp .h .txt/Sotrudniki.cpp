// Sotrudniki.cpp

#include "Sotrudniki.h"
Employee::Employee() {}

Employee::Employee(int employee_code) {
	this->employee_code = employee_code;
}
Employee::Employee(int employee_code, string surname, string name, string patronymic, string number, string pozition) {
	this->employee_code = employee_code;
	this->surname = surname;
	this->name = name;
	this->patronymic = patronymic;
	this->number = number;
	this->pozition = pozition;
}
Employee::~Employee() {}

int Employee::getemployee_code() {
	return employee_code;
}
string Employee::getsurname() {
	return surname;
}
string Employee::getpatronymic() {
	return patronymic;
}
string Employee::getname() {
	return name;
}
string Employee::getnumber() {
	return number;
}
string Employee::getpozition() {
	return pozition;
}

void Employee::print_employee() {
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << "| ��� ����������:          | " << employee_code << endl;
	cout << "| ��� ����������:          | " << surname << " " << name << " " << patronymic << endl;
	cout << "| ������� ����������:      | +" << number << endl;
	cout << "| ��������� ����������:	   | " << pozition << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << endl;
}

ostream & operator<<(ostream & out, const Employee & obj) {
	out << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	out << "|��� ����������:   | " << obj.employee_code << endl;
	out << "|�������:          | " << obj.surname << endl;
	out << "|���:              | " << obj.name << endl;
	out << "|��������:         | " << obj.patronymic << endl;
	out << "|�������:          | " << obj.number << endl;
	out	<< "|���������:        | " << obj.pozition << endl;
	out << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	return out;
}

istream & operator>>(istream & in, Employee & obj) {
	in >> obj.employee_code;
	in >> obj.surname;
	in >> obj.name;
	in >> obj.patronymic;
	in >> obj.number;
	in >> obj.pozition;
	return in;
}
