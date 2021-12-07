#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;

class Vehicle {
	public:
		string numberSign, color, source;

		Vehicle() {
			numberSign = "";
			color = "";
			source = "";
		}
		float cash();
		void input() {
			cout << "Enter Number Sign: ";
			cin >> numberSign;
			cout << "Enter Color: ";
			cin >> color;
			cout << "Enter Source: ";
			cin >> source;
		}
		void output() {
			cout << "Number Sign: " << numberSign << " Color: " << color << " Source: " << source;
		}
};

class Car : public Vehicle {
	public:
		string manufacturer;
		float priceWithVAT;
		float priceWithoutVAT;

		Car() {
			Vehicle();
			manufacturer = "";
			priceWithVAT = 0;
			priceWithoutVAT = 0;
		}
		float cash() {
			if(priceWithoutVAT <= 2000) return (priceWithoutVAT + priceWithoutVAT * 10/100);
			else return (priceWithoutVAT + priceWithoutVAT * 15/100);
		}
		void input() {
			Vehicle::input();
			cout << "Enter Manufacturer: ";
			cin >> manufacturer;
			cout << "Enter priceWithVAT: ";
			cin >> priceWithVAT;
			cout << "Enter priceWithoutVAT: ";
			cin >> priceWithoutVAT;

		}
};

class CarList {
	Car car[2];
	int n = 2;

	public:
	void inputCar() {
		for(int i = 0; i < n; i++) {
			cout << "Car " << (i + 1) << ": \n";
			car[i].input();
		}
	}
	void outputCar() {
		for(int i = 0; i < n; i++) {
			cout << "\nCar " << (i + 1) << ": ";
			car[i].output();
		}
	}

	void sort() {
		for(int i = 0; i < n; i++) {
			for(int j = i + 1; j < n; j++) {
				if(car[i].priceWithVAT > car[j].priceWithVAT) {
					Car temp = car[i];
					car[i] = car[j];
					car[j] = temp;
				}
			}
		}

		cout << "\nSorting list of cars increases by the price with VAT (priceWithVAT).\n";
		outputCar();
	}
	
	void sumOfCash() {
		float sum = 0;
		for(int j = 0; j < n; j++) {
				sum += car[j].priceWithVAT;
		}
		cout << "\nCalculate the total of the price with VAT of the list of cars = " << sum;
	}

	void maxCash() {
		float max = 0;
		for(int j = 0; j < n; j++) {
				if(car[j].priceWithVAT > max) max = car[j].priceWithVAT;
		}

		cout << "\nDisplay information of the cars that have the highest price without VAT: \n";
		for(int j = 0; j < n; j++) {
				if(car[j].priceWithVAT == max) car[j].output();
		}
	}

	void searchByName() {
		string carName;
		cout << "\nSearch the car's information by any manufacturer name entered from the keyboard: ";
		cin.ignore();
		getline(cin, carName);
		for(int j = 0; j < n; j++) {
			if(car[j].manufacturer == carName) {
				car[j].output();
				return;
			}
			else {
				cout << "No car with name";
				return;
			}
		}
	}
};
 
int main() {
	CarList carList;
	carList.inputCar();
	cout << "\nLIST CAR\n";
	carList.outputCar();
	carList.sort();
	carList.sumOfCash();
	carList.maxCash();
	carList.searchByName();
}

