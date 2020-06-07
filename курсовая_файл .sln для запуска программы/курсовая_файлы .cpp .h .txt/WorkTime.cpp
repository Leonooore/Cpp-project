// WorkTime.cpp

#include "WorkTime.h"

WorkTime::WorkTime() {}

WorkTime::WorkTime(int empl_code, string date, int StartWorkHour, int StartWorkMin, int FinishWorkHour, int FinishWorkMin, int StartBreakHour, int StartBreakMin, int FinishBreakHour,  int FinishBreakMin) {
	this->empl_code = empl_code;
	this->date = date;
	this->StartWorkHour = StartWorkHour;
	this->StartWorkMin = StartWorkMin;
	this->FinishWorkHour = FinishWorkHour;
	this->FinishWorkMin = FinishWorkMin;
	this->StartBreakHour = StartBreakHour;
	this->StartBreakMin = StartBreakMin;
	this->FinishBreakHour = FinishBreakHour;
	this->FinishBreakMin = FinishBreakMin;
}

WorkTime::~WorkTime() { }

int WorkTime::getempl_code() {
	return empl_code;
}

int WorkTime::getStartWorkHour() {
	return StartWorkHour;
}

int WorkTime::getFinishWorkHour() {
	return FinishWorkHour;
}

int WorkTime::getStartWorkMin() {
	return StartWorkMin;
}

int WorkTime::getFinishWorkMin() {
	return FinishWorkMin;
}

int WorkTime::getStartBreakHour() {
	return StartBreakHour;
}

int WorkTime::getStartBreakMin() {
	return StartBreakMin;
}

int WorkTime::getFinishBreakHour() {
	return FinishBreakHour;
}


int WorkTime::getFinishBreakMin() {
	return FinishBreakMin;
}

string WorkTime::getDate() {
	return date;
}

int WorkTime::GetMinDiff() {
	return ((FinishWorkHour - StartWorkHour) * 60 + (FinishWorkMin - StartWorkMin))-((FinishBreakHour - StartBreakHour) * 60 + (FinishBreakMin - StartBreakMin));
}

int WorkTime::GetHour() {
	return GetMinDiff() / 60;
}

int WorkTime::GetMin() {
	return GetMinDiff() % 60;
}

void WorkTime::print_time() {
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << "| Код сотрудника:              | " << empl_code << endl;
	cout << "| Дата:                        | " << date << endl;
	cout << "| Начало работы:               | " << StartWorkHour << ":" << StartWorkMin << endl;
	cout << "| Окончание работы:            | " << FinishWorkHour << ":" << FinishWorkMin << endl;
	cout << "| Начало перерыва:             | " << StartBreakHour << ":" << StartBreakMin << endl;
	cout << "| Окончание перерыва:          | " << FinishBreakHour << ":" << FinishBreakMin << endl;
	cout << "| Отработанное время за день:  | " << GetHour() << " часов " << GetMin() << " минут" << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << endl;
}

ostream & operator<<(ostream & outtime, const WorkTime & obj) {
	outtime << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	outtime << "|Код сотрудника:      | " << obj.empl_code << endl;
	outtime << "|Дата:                | " << obj.date << endl;
	outtime << "|Начало работы:       | " << obj.StartWorkHour << ":" << obj.StartWorkMin << endl;
	outtime << "|Окончание работы:    | " << obj.FinishWorkHour << ":" << obj.FinishWorkMin << endl;
	outtime << "|Начало перерыва:     | " << obj.StartBreakHour << ":" << obj.StartBreakMin<< endl;
	outtime << "|Окончание перерыва:  | " << obj.FinishBreakHour << ":" << obj.FinishBreakMin << endl;
	outtime << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	return outtime;
}

istream & operator>>(istream & intime, WorkTime & obj) {
	intime >> obj.empl_code;
	intime >> obj.date;
	intime >> obj.StartWorkHour;
	intime >> obj.StartWorkMin;
	intime >> obj.FinishWorkHour;
	intime >> obj.FinishWorkMin;
	intime >> obj.StartBreakHour;
	intime >> obj.StartBreakMin;
	intime >> obj.FinishBreakHour;
	intime >> obj.FinishBreakMin;
	return intime;
}


