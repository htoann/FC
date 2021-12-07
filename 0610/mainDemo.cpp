#include <iostream>
#include "CarList.cpp"
using namespace std;
 
int main() {
	CarList carList;
	carList.inputCar(2);
	cout << "\nLIST CAR\n";
	carList.outputCar(2);
	carList.sort(2);
	carList.sumOfCash(2);
	carList.maxCash(2);
	carList.searchByName(2);
}
