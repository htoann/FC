#include <iostream>
#include "CarList.h"
using namespace std;

void CarList::inputCar(int n) {
  for(int i = 0; i < n; i++) {
    cout << "Car " << (i + 1) << ": \n";
    car[i].input();
  }
}
void CarList::outputCar(int n) {
  for(int i = 0; i < n; i++) {
    cout << "\nCar " << (i + 1) << ": ";
    car[i].output();
  }
}

void CarList::sort(int n) {
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
  outputCar(2);
}

void CarList::sumOfCash(int n) {
  float sum = 0;
  for(int j = 0; j < n; j++) {
      sum += car[j].priceWithVAT;
  }
  cout << "\nCalculate the total of the price with VAT of the list of cars = " << sum;
}

void CarList::maxCash(int n) {
  float max = 0;
  for(int j = 0; j < n; j++) {
      if(car[j].priceWithVAT > max) max = car[j].priceWithVAT;
  }

  cout << "\nDisplay information of the cars that have the highest price without VAT: \n";
  for(int j = 0; j < n; j++) {
      if(car[j].priceWithVAT == max) car[j].output();
  }
}

void CarList::searchByName(int n) {
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
