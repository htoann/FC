#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <bits/stdc++.h>
using namespace std;

void Out(vector<int> V) {
	for(int i = 0; i < V.size(); i++) {
		cout << V[i] << " ";
  	}
}

void Sum(vector<int> V) {
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

int main() {
  vector<int> V;

  ifstream fi;
  string line;
  fi.open("input.txt");
  while(!fi.eof()){
    char temp[255];
    fi.getline(temp, 255);
    string line = temp;
    cout << line << endl;
    
    V.push_back(atoi(line.c_str()));
  }

  sort(V.begin(), V.end());
  cout << "\nAfter sort\n"; Out(V);
  Sum(V);
  V.erase(V.begin() - 1);
  cout << "\nAfter delete first element\n"; Out(V);

  ofstream of;
  of.open("OUTPUT.txt");
  cout << "\nOUPUT.txt\n";
  for(int i = 0; i < V.size(); i++) {
    of << V[i] << endl;
    cout << V[i] << endl;
  }
}
