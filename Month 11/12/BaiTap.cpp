#include <iostream>
#include <vector>
using namespace std;
#include <bits/stdc++.h>

int SNT(int n) {
	if(n < 2) return 0;
	for(int i = 3; i < n; i+=2) {
		if(n % 2 == 0) return 0;
	}
	return 1;
}

void print(vector<int> V, int n) {
  for(int i = 0; i < V.size(); i++) {
    cout << V[i] << " ";
  }
}

void reverse(vector<int> V) {
  reverse(V.begin(), V.end());
  cout << "\nReverse: ";
  print(V, V.size());
}

void des(vector<int> V) {
  sort(V.begin(), V.end(), greater<int>());
  cout << "\nGiam dan: ";
  print(V, V.size());
}

void deleteNT(vector<int> V) {
	for(int i = 0; i < V.size(); i++) {
    if(SNT(V[i])) {
      V.erase(V.begin() + i);
      i--;
    }
  }

  cout << "\nAfter delete SNT: ";
  print(V, V.size());
}

void TamPTDauTangDan(vector<int> V) {
	sort(V.begin(), V.begin() + 8);
	cout << "\nSap xep 8 phan tu dau tang dan: ";
	print(V, V.size());
}

void TongSoChan(vector<int> V) {
  int sumChan = 0;
  for(int i = 0; i < V.size(); i++) {
  	if(V[i] % 2 == 0) {
  		sumChan += V[i];
	  }
  }
  
  cout << "\nSum chan = " << sumChan << endl;
}

int main() {
  vector<int> V;
  int n = 20;
  int a[100];
  
  // Store
  for(int i = 0; i < n; i++) {
  	cout << "Enter a[" << (i + 1) << "]: ";
    cin >> a[i];
    V.push_back(a[i]);
  }

  reverse(V);
  des(V);
  deleteNT(V);
  TamPTDauTangDan(V);
  TongSoChan(V);
}