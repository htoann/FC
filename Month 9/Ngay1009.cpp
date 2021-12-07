 #include <iostream>
 #include <math.h>
 using namespace std;

 struct PhanSo {
 	int tu;
 	int mau;
 };
 
 istream &operator>>(istream &is, PhanSo &p);
 ostream &operator<<(ostream &os, PhanSo &p);
 PhanSo operator+(PhanSo p1, PhanSo p2);
 PhanSo operator-(PhanSo p1, PhanSo p2);
 PhanSo operator*(PhanSo p1, PhanSo p2);
 PhanSo operator/(PhanSo p1, PhanSo p2);
 
 istream &operator>>(istream &is, PhanSo &p) {
 	cout << "\nNhap tu, mau: ";
 	is >> p.tu >> p.mau;
 	return is;
 }
 
 ostream &operator<<(ostream &os, PhanSo &p) {
 	os << p.tu << "/" << p.mau;
 	return os;
 }
 
 PhanSo operator+(PhanSo p1, PhanSo p2) {
 	PhanSo p;
 	p.tu = p1.tu * p2.mau + p1.mau * p2.tu;
 	p.mau = p1.mau * p2.mau;
 	return p;
 }
 
 PhanSo operator-(PhanSo p1, PhanSo p2) {
 	PhanSo p;
 	p.tu = p1.tu * p2.mau - p1.mau * p2.tu;
 	p.mau = p1.mau * p2.mau;
 	return p;
 }
 
 PhanSo operator*(PhanSo p1, PhanSo p2) {
 	PhanSo p;
 	p.tu = p1.tu * p2.tu;
 	p.mau = p1.mau * p2.mau;
 	return p;
 }
 
 PhanSo operator/(PhanSo p1, PhanSo p2) {
 	PhanSo p;
 	p.tu = p1.tu * p2.mau;
 	p.mau = p1.mau * p2.tu;
 	return p;
 }
 
 
// So Phuc
 
 struct SoPhuc {
 	int a, b;
 };
 
 istream &operator>>(istream &is, SoPhuc &p);
 ostream &operator<<(ostream &os, SoPhuc &p);
 SoPhuc operator+(SoPhuc p1, SoPhuc p2);
 SoPhuc operator-(SoPhuc p1, SoPhuc p2);
 
 istream &operator>>(istream &is, SoPhuc &p) {
 	cout << "\nNhap phan thuc, phan ao: ";
 	is >> p.a >> p.b;
 	return is;
 }
 
 ostream &operator<<(ostream &os, SoPhuc &p) {
	if(p.b < 0) {
		os << p.a << " " << p.b << "i"
	} else {
		os << p.a << " + " << p.b << "i";
	}
 	return os;
 }
 
 SoPhuc operator+(SoPhuc p1, SoPhuc p2) {
 	SoPhuc p;
 	p.a = p1.a + p2.a;
 	p.b = p1.b + p2.b;
 	return p;
 }
 
 SoPhuc operator-(SoPhuc p1, SoPhuc p2) {
 	SoPhuc p;
 	p.a = p1.a - p2.a;
 	p.b = p1.b - p2.b;
 	return p;
 }

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
 	
	// 	So Phuc
 	
 	SoPhuc z, z1, z2;
 	cin >> z1 >> z2;
 	char y;
 	cout << "Choose (+, -): ";
 	cin >> y;
 	switch(y) {
 		 case '+': {
 			z = z1 + z2;
			break;
		 }
		 case '-': {
 			z = z1 - z2;
			break;
		 }
	 }
	 cout << z;
 }

