#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <bits/stdc++.h>
using namespace std;

int checkNT(int n) {
  int d = 0;
  for(int i = 1; i <= n; i++) {
    if(n % i == 0) {
      d++;
    }
  }
  if(d == 2) return 1;
  return 0;
}

void sumNT(vector<int> V) {
  int sum = 0;
  for(int i = 0; i < V.size(); i++) {
    if(checkNT(V[i]) == 1) {
      sum += V[i];
    }
  }
  cout << "\nTong cac so nguyen to = " << sum;
}

int checkCP(int n) {
  int d = 0;
  for (int i = 1; i <= n; i++) {
    if(i * i == n) {
      d++;
    }
  }
  if(d == 1) return 1;
  return 0;
}

void sumCP(vector<int> V) {
  int sum = 0;
  for(int i = 0; i < V.size(); i++) {
    if(checkCP(V[i]) == 1) {
      sum += V[i];
    }
  }
  cout << "\nTong cac so chinh phuong = " << sum;
}

int checkHH(int n) {
  int sum = 0;
  for (int i = 1; i < n; i++) {
    if(n % i == 0) {
      sum += i;
    }
  }
  if(sum == n) return 1;
  return 0;
}

void sumHH(vector<int> V) {
  int sum=0;
  for(int i = 0; i < V.size(); i++) {
    if(checkHH(V[i]) == 1) {
      sum += V[i];
    }
  }
  cout << "\nTong cac so hoan hao = " << sum;
}

void SumChanLe(vector<int> V) {
  int sumChan = 0, sumLe = 0;
  for (int i = 0; i < V.size(); i++) {
    if(V[i] % 2 == 0) {
      sumChan += V[i];
    }
    else sumLe += V[i];
  }

  cout << "\nSum chan = " << sumChan << endl;
  cout << "Sum le = " << sumLe << endl;
}

void GhiFile(int a[], int n) {
  ofstream of;
  of.open("F1.txt");
  if(of.is_open()) {
    for(int i = 0; i < n; i++) {
      cout << "a[" << i << "]: ";
      cin >> a[i];
      of << a[i] << " ";
    }
  }
}

void GhiFile2(vector<int> V) {
  sort(V.begin(), V.end());
  ofstream of;
  of.open("F2.txt");
  if(of.is_open()) {
    for(int i = 0; i < V.size(); i++) {
      of << V[i] << " ";
    }
  }
}

int main() {
  vector<int> V;
  int a[100];
  int n;
  cout << "Nhap n so phan tu: ";
  cin >> n;
  GhiFile(a, n);
  for(int i = 0; i < n; i++) {
  	cout << a[i] << " ";
    V.push_back(a[i]);
  }
  GhiFile2(V);

  sumNT(V);
  sumCP(V);
  sumHH(V);
  SumChanLe(V);
}
