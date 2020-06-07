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
	cout << "| Код сотрудника:          | " << employee_code << endl;
	cout << "| ФИО сотрудника:          | " << surname << " " << name << " " << patronymic << endl;
	cout << "| Телефон сотрудника:      | +" << number << endl;
	cout << "| Должность сотрудника:	   | " << pozition << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << endl;
}

ostream & operator<<(ostream & out, const Employee & obj) {
	out << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	out << "|Код сотрудника:   | " << obj.employee_code << endl;
	out << "|Фамилия:          | " << obj.surname << endl;
	out << "|Имя:              | " << obj.name << endl;
	out << "|Отчество:         | " << obj.patronymic << endl;
	out << "|Телефон:          | " << obj.number << endl;
	out	<< "|Должность:        | " << obj.pozition << endl;
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
