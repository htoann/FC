#include <iostream>
using namespace std;

template<class T, class V>
float Max2Num(T a, V b) {
  return a > b ? a : b;
}

template<class T, class V, class P>
float Max3Num(T a, V b, P c) {
  float max = a;
  if(b > max) {
    max = b;
  }
  if(c > max) {
    max = c;
  }

  return max;
}

template<class T>
float MaxArray(T a[], int n) {
  T max = a[0];
  for(int i = 0; i < n; i++) {
    if(a[i] > max) {
      max = a[i];
    }
  }
  return max;
}

int main() {
  cout << "\nMax 2 so = " << Max2Num(1, 5.5);
  cout << "\nMax 3 so = " << Max3Num(1, 5.5, 9);
  int n = 3;
  int a[3] = {1, 2, 4};
  cout << "\nMax array = " << MaxArray(a, n);
}
