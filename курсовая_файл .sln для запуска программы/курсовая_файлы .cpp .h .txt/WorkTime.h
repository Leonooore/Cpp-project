// Worktime.h

#pragma once
#include <iostream>
#include <string>

using namespace std;

class WorkTime {
private:
	int empl_code;
	int StartWorkHour;
	int StartWorkMin;
	int FinishWorkHour;
	int FinishWorkMin;
	int StartBreakHour;
	int FinishBreakHour;
	int StartBreakMin;
	int FinishBreakMin;
	string date;
public:
	WorkTime();
	WorkTime(int empl_code, string date, int StartWorkHour, int StartWorkMin, int FinishWorkHour, int FinishWorkMin, int StartBreakHour, int StartBreakMin, int FinishBreakHour,int FinishBreakMin);
	~WorkTime();
	int getempl_code();
	int getStartWorkHour();
	int getFinishWorkHour();
	int getStartWorkMin();
	int getFinishWorkMin();
	int getStartBreakHour();
	int getStartBreakMin();
	int getFinishBreakHour();
	int getFinishBreakMin();
	string getDate();
	int GetMinDiff();
	int GetHour();
	int GetMin();
	void print_time();

	friend ostream& operator<< (ostream& outtime, const WorkTime& obj);
	friend istream& operator>> (istream& intime, WorkTime& obj);
};