#include <fstream>
#include <iostream>
using namespace std;

void GhiFile() {
  ofstream fo;
  fo.open("Text.txt");
  if(fo.is_open()) {
    fo << "Hello, world!" << endl;
  }
  else cout << "File is not open!" << endl;
}

void DocFile() {
  ifstream fi;
  string str;
  fi.open("Text.txt");
  if(!fi.eof()) {
    getline(fi, str);
    cout << str;
  }
  else cout << "File can't be opened" << endl;
}

int main() {
  GhiFile();
  DocFile();
}
