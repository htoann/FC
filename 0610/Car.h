#include <iostream>
#include "Vehicle.cpp"
using namespace std;

class Car : public Vehicle {
	public:
		string manufacturer;
		float priceWithVAT;
		float priceWithoutVAT;
		Car();
		float cash();
		void input();
};
