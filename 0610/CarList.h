#include <iostream>
#include "Car.cpp"
using namespace std;

class CarList {
	Car car[2];

	public:
	void inputCar(int n);
	void outputCar(int n);
	void sort(int n);
	void sumOfCash(int n);
	void maxCash(int n);
	void searchByName(int n);
};
