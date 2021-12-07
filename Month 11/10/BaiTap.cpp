#include <iostream>
#include <vector>
using namespace std;
#include <bits/stdc++.h>

int main() {
  vector<int> myVector;
  int n;
  int a[100];
  cout << "Enter n: ";
  cin >> n;
  
  // Store
  for(int i = 0; i < n; i++) {
  	cout << "Enter a[" << (i + 1) << "]: ";
    cin >> a[i];
    myVector.push_back(a[i]);
  }

  sort(myVector.begin(), myVector.end());
  cout << "\nSorted\n";
  
  int sumChan = 0, sumLe = 0;
  for(int i = 0; i < n; i++) {
  	if(myVector[i] % 2 == 0) {
  		sumChan += myVector[i];
	  }
	else {
		sumLe += myVector[i];
	}
  }
  
  cout << "\nSum chan = " << sumChan << "\nSum le = " << sumLe << endl;
  
  // Print
  cout << "\nPrint\n";
  for(int i = 0; i < n; i++) {
    cout << myVector[i] << " ";
  }
  
}
