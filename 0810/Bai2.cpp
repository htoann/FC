#include <iostream>
using namespace std;

template<class T, class V>
void HoanVi(T &a, V &b) {
  V temp = a;
  a = b;
  b = temp;
};

template<class T, class V, class Y>
void Max(T a, V b, Y c) {
  Y max = a;
  if(b > max) {
    max = b;
  }
  if(c > max) {
    max = c;
  }
  cout << "\nMax = " << max;
};

template<class T, class V, class Y>
void Min(T a, V b, Y c) {
  Y min = a;
  if(b < min) {
    min = b;
  }
  if(c < min) {
    min = c;
  }
  cout << "\nMin = " << min;
};

int main() {
	Max(1.1, 2, 3.8);
	Min(1.5, 9.9, 4.5);
	int a = 4;
	float b = 6.7;
	HoanVi(a, b);
	cout << "\n" << a << " " << b;
}
