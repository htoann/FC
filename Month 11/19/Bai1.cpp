#include <vector>
#include <iostream>
using namespace std;
#include <bits/stdc++.h>

int isPrime(int n) {
  if(n < 2) {
    return 0;
  }
  else if (n > 2) {
    for(int i = 2; i < n; i++) {
      if(n % i == 0) {
        return 0;
      }
    }
  }
  return 1;
}

bool isEven(const int& left, const int& right) {
	if(left % 2 == 1) {
        return true;
    }
    
	return false;
}

int main() {		
	vector <int> v;
  int a[100];
  int n;
  cout << "Nhap so phan tu: ";
  cin >> n;

  for(int i = 0; i < n; i++) {
  	cout << "Enter a[" << (i + 1) << "]: ";
    cin >> a[i];
    v.push_back(a[i]);
  }

 for(int i = 0; i < v.size(); i++) {
   if(isPrime(v[i])) {
     v.erase(v.begin() + i);
     i--;
   }
 }

  sort(v.begin(), v.end(), isEven);

  for(int i = 0; i < v.size(); i++) {
    cout << v[i] << " ";
  }
}

