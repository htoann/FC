#include<iostream>
using namespace std;

class Person {
	string Id, Name;
	public:
	virtual void input() {
		cout << "Enter id: ";
		cin >> Id;
		cin.ignore();
		cout << "Enter name: ";
		getline(cin, Name);
	}

	virtual void output() {
		cout << "\nId: " << Id << " Name: " << Name;
	}

	virtual float calculateBonus() = 0;
};

class Student : public Person {
	string studID;
	float avgMark;
	public:
	void input() {
		Person::input();
		cout << "Enter studID: ";
		cin >> studID;
		cout << "Enter avgMark: ";
		cin >> avgMark;
	}

	void output() {
		Person::output();
		cout << "\nstudID: " << studID << " avgMark: " << avgMark;
	}

	float calculateBonus() {
		if(avgMark > 8.0)
			return 750.000;
		return 0;
	}
};

class Lecturer : public Person {
	string empID;
	int numberOfPaper;
	public:
	void input() {
		Person::input();
		cout << "Enter empID: ";
		cin >> empID;
		cout << "Enter numberOfPaper: ";
		cin >> numberOfPaper;
	}

	void output() {
		Person::output();
		cout << "\nempID: " << empID << " numberOfPaper: " << numberOfPaper;
	}

	float calculateBonus() {
		if(numberOfPaper > 3) return 1500000;
		return 0;
	}
};

class ListOfPerson {
	Person *ds[100];
	int k;
	public:
	void inputList() {
		int chon, i;
		int k = 0;
		while(k < 3) {
			cout << "1. Student\n2. Lecturer\n3. Exit\n";
			cin >> chon;
			if(chon == 1) {
				ds[k] = new Student();
			}
			if(chon == 2) {
				ds[k] = new Lecturer();
			}
			if(chon == 3) {
				break;
			}
			ds[k]->input();
			k++;
		}
	}

	void outputList() {
		for(int i = 0; i < k; i++) {
			ds[i]->output();
			cout << " Bonus " << ds[i]->calculateBonus() << endl;
		}
	}
};

int main() {
	ListOfPerson x;
	x.inputList();
	x.outputList();
}
