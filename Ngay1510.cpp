#include<iostream>
using namespace std;

class Employee {
	int id;
	string name;

	public: 
		virtual void input() {
			cout << "Id: ";
			cin >> id;
			cin.ignore();
			cout << "Name: ";
			cin >> name;
		}

		virtual void output() {
			cout << "Id: " << id << " Name: " << name;
		}

		virtual float calculateBonus() = 0;
};

class RegularEmp : public Employee {
	int empID;
	float salaryGrading;

	public:
		void input() {
			Employee::input();
			cout << "empID: ";
			cin >> empID;
			cout << "salaryGrading: ";
			cin >> salaryGrading;
		}

		void output() {
			Employee::output();
			cout << " empID " << empID << " " << " salaryGrading " << salaryGrading;
		}

		float calculateBonus() {
			if(salaryGrading > 3) return 1500000;
			return 0;
		}
};

class ContractEmp : public Employee {
	int empID;
	int workDay;

	public:
		void input() {
			Employee::input();
			cout << "empID: ";
			cin >> empID;
			cout << "workDay: ";
			cin >> workDay;
		}

		void output() {
			Employee::output();
			cout << " empID: " << empID << " workDay: " << workDay;
		}

		float calculateBonus() {
			if(workDay > 18) return 750000;
			return 0;
		}
};

class List {
	Employee *x[10];

	public:
		void inputList(int n) {
			for(int i = 0; i < n; i++) {
				int k;
				cout << "1. RegularEmployee\n2. ContractEmp\n3. Exit\n";
				cin >> k;
				if(k == 1) {
					x[i] = new RegularEmp();
				}
				if(k == 2) {
					x[i] = new ContractEmp();
				}
				if(k == 3) {
					break;
				}
				x[i]->input();
			}
		}

		void outputList(int n) {
		for(int i = 0; i < n; i++) {
				x[i]->output();
				cout << " calculateBonus " << x[i]->calculateBonus() << endl;
			}
		}
		
		void sort(int n) {
		for(int i = 0; i < n; i++) {
			for(int j = i + 1; j < n; j++) {
				if(x[i]->calculateBonus() < x[j]->calculateBonus()) {
					Employee *temp = x[i];
					x[i] = x[j];
					x[j] = temp;
				}
			}
		}

		cout << "\nSorting list\n";
		outputList(n);
	}
};

int main() {
	List x;
	x.inputList(2);
	x.outputList(2);
	x.sort(2);
}
