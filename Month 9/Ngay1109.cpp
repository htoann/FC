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
 
 int UCLN(int a, int b) {
 	a = abs(a);
 	b = abs(b);
 	if(a * b == 0) return 1;
 	while(a != b) {
 		if(a > b) {
 			a -= b;
		 }
		 else {
		 	b -= a;
		 }
	 }
	 return a;
 }
 
 PhanSo RutGon(PhanSo p) {
 	PhanSo q;
 	int x = UCLN(p.tu, p.mau);
 	q.tu = p.tu / x;
 	q.mau = p.mau / x;
 	return q;
 }
 
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


 int main()
 {
 	PhanSo OUT, p, q, z, u, v;
 	cin >> z >> p >> q >> z >> u >> v;
	OUT = (p - q * z) / (u + v);
	OUT = RutGon(OUT);
	cout << "\nKet Qua = " << OUT;
 }

