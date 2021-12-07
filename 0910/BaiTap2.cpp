#include <iostream>
using namespace std;

template<class T>
istream& operator>>(istream &is, T a, T b) {
  cout << "Nhap phan thuc, phan ao: ";
  is >> a >> b;
  return is;
}

template<class T>
ostream& operator<<(ostream &os, T a, T b) {
  cout << "\n" + a << "i + " + << "b";
  return os;
}

template<class T>


int main() {
  cout << "\nMax 2 so = " << Max2Num(1, 5.5);
  cout << "\nMax 3 so = " << Max3Num(1, 5.5, 9);
  int n = 3;
  int a[3] = {1, 2, 4};
  cout << "\nMax array = " << MaxArray(a, n);
}
