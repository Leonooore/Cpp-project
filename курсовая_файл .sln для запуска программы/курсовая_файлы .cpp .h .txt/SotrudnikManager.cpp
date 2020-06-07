// SotrudnikManager.cpp

#include "SotrudnikManager.h"

EmployeeManager::EmployeeManager() {
	currentEmployeeSize = 0;
	maxEmployeeSize = SIZE;
	employee = new Employee[maxEmployeeSize];

	currentTimeWorkSize = 0;
	maxTimeWorkSize = SIZE;
	time = new WorkTime[maxTimeWorkSize];
}
EmployeeManager::EmployeeManager(int employee_code, string surname, string name, string patronymic, string number, string pozition) : Employee(employee_code, surname, name, patronymic, number, pozition) {}
EmployeeManager::EmployeeManager(int empl_code, string date, int StartWorkHour, int StartWorkMin, int FinishWorkHour, int FinishWorkMin, int StartBreakHour, int StartBreakMin, int FinishBreakHour, int FinishBreakMin) : WorkTime(empl_code, date, StartWorkHour, StartWorkMin, FinishWorkHour, FinishWorkMin, StartBreakHour, StartBreakMin, FinishBreakHour, FinishBreakMin) {}
EmployeeManager::~EmployeeManager() {
	delete[] employee;
	delete[] time;
}
// добавить сотрудника
void EmployeeManager::add_employee() {
	int employee_code;
	string surname;
	string name;
	string patronymic;
	string number;
	string pozition;
	
	cout << "¬ведите код сотрудника: ";
	cin >> employee_code;
	cout << "¬ведите фамилию сотрудника: ";
	cin >> surname;
	cout << "¬ведите им€ сотрудника: ";
	cin >> name;
	cout << "¬ведите отчество сотрудника: ";
	cin >> patronymic;
	cout << "¬ведите номер телефона сотрудника: +";
	cin >> number;
	cout << "¬ведите должность сотрудника: ";
	cin >> pozition;

	Employee sup(employee_code, surname, name, patronymic, number, pozition);
	addEmployee(sup);
}

void EmployeeManager::add_time() {
	int StartWorkHour;
	int StartWorkMin;
	int FinishWorkHour;
	int FinishWorkMin;
	int StartBreakHour;
	int StartBreakMin;
	int FinishBreakHour;
	int FinishBreakMin;
	int empl_code;
	string date;

	cout << " од сотрудника: ";
	cin >> empl_code;
	cout << "¬ведите дату в формате день.мес€ц.год: ";
	cin >> date;
	cout << "¬ведите врем€ начала работы (час): ";
	cin >> StartWorkHour;
	cout << "¬ведите врем€ начала работы (мин) : ";
	cin >> StartWorkMin;
	cout << "¬ведите врем€ окончани€ работы (час) : ";
	cin >> FinishWorkHour;
	cout << "¬ведите врем€ окончани€ работы (мин) : ";
	cin >> FinishWorkMin;
	cout << "¬ведите врем€ начала перерыва (час): ";
	cin >> StartBreakHour;
	cout << "¬ведите врем€ перерыва работы (мин) : ";
	cin >> StartBreakMin;
	cout << "¬ведите врем€ окончани€ перерыва(час) : ";
	cin >> FinishBreakHour;
	cout << "¬ведите врем€ окончани€ перерыва (мин) : ";
	cin >> FinishBreakMin;
			
	WorkTime tw(empl_code, date, StartWorkHour, StartWorkMin, FinishWorkHour, FinishWorkMin, StartBreakHour, StartBreakMin, FinishBreakHour, FinishBreakMin);
	addTime(tw);
}

void EmployeeManager::printEmployee() {
	for (int i = 0; i < currentEmployeeSize; i++) {
		employee[i].print_employee();
	}
}

EmployeeManager* EmployeeManager::printTime() {
	for (int i = 0; i < currentTimeWorkSize; i++) {
			time[i].print_time();
	}
	return nullptr;
}
// найти сотрудника по коду
Employee* EmployeeManager::findEmployeeByCode(int employee_code) {
	for (int i = 0; i < currentEmployeeSize; i++) {
		if (employee[i].getemployee_code() == employee_code) {
			return &employee[i];
		}
	}
	return nullptr;
}
// найти рабочее врем€ сотрудника по коду
WorkTime* EmployeeManager::findWorkTimeByEmployeeCode(int employee_code) {
	for (int i = 0; i < currentTimeWorkSize; i++) {
		if (time[i].getempl_code() == employee_code) {
			time[i].print_time();
		}
	}
	return nullptr;
}

// удалить всех сотрудников
void EmployeeManager::deleteAll() {
	currentEmployeeSize = 0;
	cout << "¬се сотрудники успешно удалены" << endl;
}
// удалить сотрудника по фамилии
Employee* EmployeeManager::deleteEmployeeBySurname(string surname) {
	for (int i = 0; i < currentEmployeeSize; i++) {
		if (employee[i].getsurname() == surname) {
			for (int j = i; j < currentEmployeeSize - 1; j++) {
				employee[j] = employee[j + 1];
			}
			currentEmployeeSize--;
		}
	}
	return nullptr;
}

Employee* EmployeeManager::getEmployee() {
	return &employee[0];
}

WorkTime* EmployeeManager::getTime() {
	return &time[0];
}

void EmployeeManager::addEmployee(Employee empl) {
	if (currentEmployeeSize == maxEmployeeSize) {
		Employee* temp = employee;
		int newSize = 2 * maxEmployeeSize + 1;
		employee = new Employee[newSize];
		for (int i = 0; i < maxEmployeeSize; i++) {
			*(employee + i) = *(temp + i);
		}
		delete[] temp;
		maxEmployeeSize = newSize;
	}
	employee[currentEmployeeSize++] = empl;
}

void EmployeeManager::addTime(WorkTime tw) {
	if (currentTimeWorkSize == maxTimeWorkSize) {
		WorkTime* temp = time;
		int newSize = 2 * maxTimeWorkSize + 1;
		time = new WorkTime[newSize];
		for (int i = 0; i < maxTimeWorkSize; i++) {
			*(time + i) = *(temp + i);
		}
		delete[] temp;
		maxTimeWorkSize = newSize;
	}
	time[currentTimeWorkSize++] = tw;
}

int EmployeeManager::getEmployeeCurrentSize() {
	return currentEmployeeSize;
}

int EmployeeManager::getTimeCurrentSize() {
	return currentTimeWorkSize;
}
