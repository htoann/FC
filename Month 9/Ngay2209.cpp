 #include <iostream>
 #include <math.h>
 using namespace std;

 struct PhanSo {
 	int tu;
 	int mau;
 	
 	public:
	 friend istream &operator>>(istream &is, PhanSo &p) {
	 	cout << "\nNhap tu, mau: ";
	 	is >> p.tu >> p.mau;
	 	return is;
	 }
	 
	 friend ostream &operator<<(ostream &os, PhanSo &p) {
	 	os << p.tu << "/" << p.mau;
	 	return os;
	 }
	 
	 friend PhanSo operator+(PhanSo p1, PhanSo p2) {
	 	PhanSo p;
	 	p.tu = p1.tu * p2.mau + p1.mau * p2.tu;
	 	p.mau = p1.mau * p2.mau;
	 	return p;
	 }
	 
	 friend PhanSo operator-(PhanSo p1, PhanSo p2) {
	 	PhanSo p;
	 	p.tu = p1.tu * p2.mau - p1.mau * p2.tu;
	 	p.mau = p1.mau * p2.mau;
	 	return p;
	 }
	 
	 friend PhanSo operator*(PhanSo p1, PhanSo p2) {
	 	PhanSo p;
	 	p.tu = p1.tu * p2.tu;
	 	p.mau = p1.mau * p2.mau;
	 	return p;
	 }
	 
	 friend PhanSo operator/(PhanSo p1, PhanSo p2) {
	 	PhanSo p;
	 	p.tu = p1.tu * p2.mau;
	 	p.mau = p1.mau * p2.tu;
	 	return p;
	 }
 };
 
 int main()
 {
 	PhanSo p, p1, p2;
 	cin >> p1 >> p2;
 	char x;
 	cout << "Choose (+, -, *, /): ";
 	cin >> x;
 	switch(x) {
 		 case '+': {
 			p = p1 + p2;
			break;
		 }
		 case '-': {
 			p = p1 - p2;
			break;
		 }
		 case '*': {
 			p = p1 * p2;
			break;
		 }
		 case '/': {
		 	if(p2.mau == 0) {
		 		cin >> p1 >> p2;
			 }
 			p = p1 / p2;
			break;
		 }
	 }
	 cout << p;
 }

