// FileManager.cpp

#include "FileManager.h"
// ��������� ��� ������ � ����������� � ����
void FileManager::SaveToFile(EmployeeManager* ems){
	ofstream out("sotrudniki.txt");
	if (out.is_open()) {
		int size = ems->getEmployeeCurrentSize();
		out << size << endl;
		for (int i = 0; i < size; i++) {
			out << ems->getEmployee()[i];
		}
		out.close();
	}
	else {
		cout << "������ �������� �����!" << endl;
	}

	ofstream outtime("WorkTime.txt");
	if (outtime.is_open()) {
		int size = ems->getTimeCurrentSize();
		outtime << size << endl;
		for (int i = 0; i < size; i++) {
			outtime << ems->getTime()[i];
		}
		outtime.close();
	}
	else {
		cout << "������ �������� �����!" << endl;
	}
}
// �������� ���� ������ � ����������� �� �����
void FileManager::LoadFromFile(EmployeeManager* ems){ 
	ifstream in("sotrudniki.txt");
	if (in.is_open()) {
		int size;
		in >> size;
		for (int i = 0; i < size; i++) {
			Employee empl;
			in >> empl;
			ems->addEmployee(empl);
			while (in.read((char*)&empl, sizeof(Employee))) {
				empl.print_employee();
			}
		}
		in.close();
		cout << "������ ����������� �������\n" << endl;
	}
	else {
		cout << "������ �������� �����!" << endl;
	}

	ifstream intime("WorkTime.txt");
	if (intime.is_open()) {
		int size;
		intime >> size;
		for (int i = 0; i < size; i++) {
			WorkTime tw;
			intime >> tw;
			ems->addTime(tw);
			while (intime.read((char*)&tw, sizeof(WorkTime))) {
				tw.print_time();
			}
		}
		intime.close();
		cout << "������  �������� ������� �������\n" << endl;
	}
	else {
		cout << "������ �������� �����!" << endl;
	}

}
