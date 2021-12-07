#include <iostream>
#include "Vehicle.h"
using namespace std;

Vehicle::Vehicle() {
  numberSign = "";
  color = "";
  source = "";
}

void Vehicle::input() {
  cout << "Enter Number Sign: ";
  cin >> numberSign;
  cout << "Enter Color: ";
  cin >> color;
  cout << "Enter Source: ";
  cin >> source;
}

void Vehicle::output() {
  cout << "Number Sign: " << numberSign << " Color: " << color << " Source: " << source;
}
