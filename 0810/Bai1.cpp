#include<iostream>
using namespace std;
//function template cung kieu du lieu
template <class T>
T add(T a, T b) {
	return a+b;
}

//function template khac kieu du lieu
template <class A, class B>
B add(A a, B b) {
	return a+b;
}

//class template
template <class T, class F>
class cals {
	public:
		F plus(T a, F b) {
			return a+b;
		}
};
int main() {
	//Su dung function template
	int i1=10, i2=20;
	float f1=3.5, f2=4.5;
	
	cout << "Tong 2 so int " << add(i1,i2) << endl;
	cout << "Tong 2 so float " << add(f1,f2) << endl;
	cout << "Tong 2 so int, float " << add(i1, f2) << endl;
	
	//Su dung class template
	int a=10;
	float b=30.5;
	double d=10.333;
	cals<int,float> o1;
	cals<float,double> o2;
	
	cout << "Tong 2 so int, float " << o1.plus(a,b) << endl;
	cout << "Tong 2 so float, double " << o2.plus(b,d) << endl;
	return 0;
}
