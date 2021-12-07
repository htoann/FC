 #include <iostream>
 #include <math.h>
 using namespace std;

 struct NhanVien {
 	string Ma, Ten;
 	float Luong;
 	
 	public:
	 friend istream &operator>>(istream &is, NhanVien &p) {
	 	cout << "\nNhap ma: ";
	 	is >> p.Ma;
	 	cout << "\nNhap ten: ";
	 	is >> p.Ten;
	 	cout << "\nNhap luong: ";
	 	is >> p.Luong;
	 	return is;
	 }
	 
	 friend ostream &operator<<(ostream &os, NhanVien &p) {
	 	os << "Ma: " << p.Ma << " Ten: " << p.Ten << " Luong: " << p.Luong;
	 	return os;
	 }
 };

 int main()
 {
 	NhanVien x;
 	cin >> x;
 	cout << x;
 }

