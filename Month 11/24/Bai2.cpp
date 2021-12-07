#include <fstream>
#include <iostream>
#include <string>
using namespace std;

class Student {
  string id, name;
  float GPA;
  public:
    void GhiFile() {
      ofstream fo;
      fo.open("List.txt");
      int n;
      cout << "Enter number student: ";
      cin >> n;
      if(fo.is_open()) {
        for(int i = 0; i < n; i++) {
          cout << "Enter Id: "; cin >> id;
          cin.ignore();
          cout << "Name: ";
          getline(cin, name);
          cout << "GPA: "; cin >> GPA;
          fo << id << ". " << name << " " << GPA << endl;
        }
      }
      else cout << "File is not open!" << endl;
    }

    void DocFile() {
      ifstream fi;
      string line;
      fi.open("List.txt");
      while(!fi.eof()){
        char temp[255];
        fi.getline(temp, 255);
        string line = temp;
        cout << line << endl;
      }
    }
};

int main() {
  Student x;
  x.GhiFile();
  x.DocFile();
}
