#include <iostream>
#include "Car.h"
using namespace std;

Car::Car() {
  Vehicle();
  manufacturer = "";
  priceWithVAT = 0;
  priceWithoutVAT = 0;
}

float Car::cash() {
  if(priceWithoutVAT <= 2000) return (priceWithoutVAT + priceWithoutVAT * 10/100);
	else return (priceWithoutVAT + priceWithoutVAT * 15/100);
}

void Car::input() {
  Vehicle::input();
  cout << "Enter Manufacturer: ";
  cin >> manufacturer;
  cout << "Enter priceWithVAT: ";
  cin >> priceWithVAT;
  cout << "Enter priceWithoutVAT: ";
  cin >> priceWithoutVAT;
}
