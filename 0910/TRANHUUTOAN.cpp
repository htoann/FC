#include <iostream>
#include <math.h>
using namespace std;

template<class T>
class SoPhuc {
	T a, b;

	public:
	  friend istream &operator>>(istream &is, SoPhuc &p) {
		  cout << "\nNhap phan thuc, phan ao: ";
		  is >> p.a >> p.b;
		  return is;
	  }
	  
	  friend ostream &operator<<(ostream &os, SoPhuc &p) {
		  if(p.b < 0) {
		    os << p.a << " " << p.b << "i";
		  } else {
		    os << p.a << " + " << p.b << "i";
		  }
		  return os;
	  }
	  
	  friend SoPhuc operator+(SoPhuc p1, SoPhuc p2) {
		  SoPhuc p;
		  p.a = p1.a + p2.a;
		  p.b = p1.b + p2.b;
		  return p;
	  }
	  
	  friend SoPhuc operator-(SoPhuc p1, SoPhuc p2) {
		  SoPhuc p;
		  p.a = p1.a - p2.a;
		  p.b = p1.b - p2.b;
		  return p;
	  }
};


int main()
{
	SoPhuc<int> z, z1, z2;
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
	cout << "\nKet qua = " << z;
}
