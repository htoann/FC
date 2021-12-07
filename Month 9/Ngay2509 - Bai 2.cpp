#include<iostream>
#include<iomanip>
using namespace std;
class Vehicle {
	public:
		string manufacturer;
		float priceWithVAT;
		float priceWithoutVAT;
		
		Vehicle(){
			manufacturer = "";
			priceWithVAT = 0;
			priceWithoutVAT = 0;
		}
		
		Vehicle(string manufacturer, float priceWithVAT, float priceWithoutVAT) {
			this->manufacturer = manufacturer;
			this->priceWithVAT = priceWithVAT;
			this->priceWithoutVAT = priceWithoutVAT;
		}
		
		friend istream &operator>>(istream &is, Vehicle &e);
		friend ostream &operator<<(ostream &os, Vehicle e);
		
		float cash() {
			if(priceWithoutVAT <= 2000) {
				return priceWithVAT = priceWithoutVAT + priceWithoutVAT * 10/100;
			} else {
				return priceWithVAT = priceWithoutVAT + priceWithoutVAT * 15/100;
			}
		}
};
istream &operator>>(istream &is, Vehicle &p) {
	cout << "Nhap manufacturer: "; getline(is, p.manufacturer);
	cout << "Nhap price without VAT: "; is >> p.priceWithoutVAT;
	cout << "Nhap price with VAT: "; is >> p.priceWithVAT;
}
ostream &operator<<(ostream &os, Vehicle p) {
	os << "Manufacturer: " << p.manufacturer << " priceWithVAT:  " << p.priceWithVAT << " priceWithoutVAT " << p.priceWithoutVAT;
}
int main() {
	int n = 2;
	Vehicle v[n];
	for(int i = 0; i < n; i++) {
		cout << "\nCAR " << (i + 1) << endl;
		cin >> v[i];
		cin.ignore();
	}
	for(int i=0; i<n; i++) {
		cout << "\nCAR " << (i + 1) << endl;
		cout << v[i];
	}
	return 0;
}
