#include<iostream>
using namespace std;
template <class B>
class SH{
	B so;
	B bien;
	public:
		friend SH add(SH s1, SH s2);
		friend SH add(SH s1, SH s2);
		friend istream& operator >> (istream, SH);
		friend istream& operator >> (istream, SH);
};

istream&operator >> (istream &in, SH s) {
	cout << "Nhap a = "; in >>s.so;
	cout << "Nhap b = "; in >> s.bien;
	return in;
}

ostream&operator << (ostream &out, SH &s) {
	if (s.so > 0 && s.bien > 0)
	{
		out << s.so << "+" << s.bien << "i" << endl;
	} 
	else if (s.so > 0 && s.bien < 0)
	{
		out << s.so << "" << s.bien << "i" << endl;
	} 
	else if (s.so < 0 && s.bien > 0)
	{
		out << s.so << "+" << s.bien << "i" << endl;
	} 
	else 
	{
		out << s.so << "" << s.bien << "i" << endl;
	}
	return out;
}

SH add(SH s1, SH s2) {
	SH s;
	s.so = s1.so + s2.so;
	s.bien = s1.bien + s2.bien;
	return s;
}
SH sub(SH s1, SH s2) {
	SH s;
	s.so = s1.so - s2.so;
	s.bien = s1.bien - s2.bien;
	return s;
}
int main() {
	SH a,s,s1,s2;
	cout << "z = a + b*i" << endl;
	cin >> s1;
	cout << "z` = a` + b`*i" << endl;
	cin >> s2;
	
	a = add(s1,s2);
	s = sub(s1,s2);
	
	cout << "\nCong 2 so phuc: y = " << a;
	cout << "\nTru 2 so phuc: y = " << s;
}
