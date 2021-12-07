#include <iostream>
#include <math.h>
using namespace std;

template <class T>
T MaxTwoValue(T a, T b) {
  if(a > b) return a;
  return b;
}

template <class T>
T MaxThreeValue(T a, T b, T c) {
  T max = a;
  if(b > max) max = b;
  if(c > max) max = c;

  return max;
}

template <class T>
T MaxArray(T a[], int n) {
  T max = a[0];
  for(int i = 0; i < n; i++) {
    if(a[i] > max) max = a[i];
  }

  return max;
}

void TestDouble() {
  cout << "\n\nDOUBLE\n";
  double a = 1.15, b = 8.119, c = 4.975;
  double d[100] = {2.31, 8.99, 0.1, 4.669, 2.123, 0.188, 0.166, 2.6548};
  int n = 8;
  cout << "Max Two Value (" << a << ", " << b << ") = " << MaxTwoValue(a, b) << endl;
  cout << "Max Three Value (" << a << ", " << b << ", " << c << ") = " << MaxThreeValue(a, b, c) << endl;
  cout << "Array Double: ";
  for(int i = 0; i < n; i++) {
  	cout << d[i] << " ";
  }
  cout << "\nMax Value Of Array = " << MaxArray(d, n);
}

void TestInteger() {
  cout << "INTEGER\n";
  int a = 1, b = 8, c = 4;
  int d[100] = {1, 8, 0, 4, 2, 0, 0, 2};
  int n = 8;
  cout << "Max Two Value (" << a << ", " << b << ") = " << MaxTwoValue(a, b) << endl;
  cout << "Max Three Value (" << a << ", " << b << ", " << c << ") = " << MaxThreeValue(a, b, c) << endl;
  cout << "Array Int: ";
  for(int i = 0; i < n; i++) {
  	cout << d[i] << " ";
  }
  cout << "\nMax Value Of Array = " << MaxArray(d, n);
}

class Fraction {
  int tu, mau;
  public:
  Fraction(int a, int b) {
    tu = a;
    mau = b;
  }
  public:
  double value(Fraction *a, Fraction *b) {
    return (a->tu * b->mau) / (a->mau * b->tu);
  }
};

int main() {
  TestInteger();
  TestDouble();
  
  
  cout << "\n\nFraction\n";
  Fraction *a = new Fraction(1, 8);
  Fraction *b = new Fraction(4, 2);
  Fraction *c = new Fraction(8, 3);
  value(&a, &b);
//  cout << "Max Two Value (" << a << ", " << b << ") = " << MaxTwoValue(a, b) << endl;
}

