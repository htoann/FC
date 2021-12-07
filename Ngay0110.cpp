#include<iostream>
using namespace std;

class Employee {
	string Id, Name;
	float Salary;
	public:

	Employee() {
		Id = "";
		Name = "";
		Salary = 0;
	}

	virtual void input() {
		cout << "Enter id: ";
		cin >> Id;
		cin.ignore();
		cout << "Enter name: ";
		getline(cin, Name);
		cout << "Enter Salary: ";
		cin >> Salary;
	}

	virtual void output() {
		cout << "\nId: " << Id << " Name: " << Name << " Salary " << Salary;
	}

	virtual float calculateSalary() = 0;
};

class RegularEmployee : public Employee {
	float salaryGrading, benefitGrading;

	public:

	RegularEmployee() {
		salaryGrading = 0;
		benefitGrading = 0;
	}

	void input() {
		Employee::input();
		cout << "Enter salaryGrading: ";
		cin >> salaryGrading;
		cout << "Enter benefitGrading: ";
		cin >> benefitGrading;
	}

	void output() {
		Employee::output();
		cout << "\nsalaryGrading: " << salaryGrading << " benefitGrading: " << benefitGrading;
	}

	float calculateSalary() {
		return 1000000*(1.0+ salaryGrading + benefitGrading);
	}
};

class ContractStaff : public Employee {
	float wage, workday, excessHoursGrading;

	public:

	ContractStaff() {
		wage = 0;
		workday = 0;
		excessHoursGrading = 0;
	}

	void input() {
		Employee::input();
		cout << "Enter wage: ";
		cin >> wage;
		cout << "Enter workday: ";
		cin >> workday;
		cout << "Enter excessHoursGrading: ";
		cin >> excessHoursGrading;
	}

	void output() {
		Employee::output();
		cout << "\nwage: " << wage << " workday: " << workday << " excessHoursGrading: " << excessHoursGrading;
	}

	float calculateSalary() {
		return wage* workday*(1+ excessHoursGrading);
	}
};

class EmployeeList {
	int k;
	Employee *ds[100];
	public:
	void inputEmployee() {
		int chon, i;
		k = 0;
		while(k < 100) {
			cout << "1. RegularEmployee\n2. ContractStaff\n3. Exit\n";
			cin >> chon;
			if(chon == 1) {
				ds[k] = new RegularEmployee();
			}
			if(chon == 2) {
				ds[k] = new ContractStaff();
			}
			if(chon == 3) {
				break;
			}
			ds[k]->input();
			k++;
		}
	}

	void outputEmployee() {
		for(int i = 0; i < k; i++) {
			ds[i]->output();
			cout << " calculateSalary " << ds[i]->calculateSalary() << endl;
		}
	}

	void sort() {
		for(int i = 0; i < k; i++) {
			for(int j = i + 1; j < k; j++) {
				if(ds[i]->calculateSalary() > ds[j]->calculateSalary()) {
					Employee *temp = ds[i];
					ds[i] = ds[j];
					ds[j] = temp;
				}
			}
		}

		cout << "\nSorting list of employees increases by the salary\n";
		outputEmployee();
	}
	
	void sumOfSalary() {
		float sum = 0;
		for(int j = 0; j < k; j++) {
				sum += ds[j]->calculateSalary();
		}
		cout << "\nCalculate the total of salary of the list of employees = " << sum;
	}

	void maxSalary() {
		float max = 0;
		for(int j = 0; j < k; j++) {
				if(ds[j]->calculateSalary() > max) max = ds[j]->calculateSalary();
		}

		cout << "\nDisplay information of the employee who have the highest salaries in the list of employees: \n";
		for(int j = 0; j < k; j++) {
				if(ds[j]->calculateSalary() == max) ds[j]->output();
		}
	}

};

int main() {
	EmployeeList x;
	x.inputEmployee();
	x.outputEmployee();
	x.sort();
	x.sumOfSalary();
	x.maxSalary();
}
