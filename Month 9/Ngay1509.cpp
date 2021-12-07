 #include <iostream>
 #include <math.h>
 using namespace std;
 
 class student {
 	public:
 		int id;
 		string name;
 		void input() {
 			cout << "\nID: ";
 			cin >> id;
 			cout << "Name: ";
 			cin.ignore();
			getline(cin, name); 		
		 }
		void output() {
 			cout<<"\nID " << id << " name " << name; 
		 }
 };
 
 class studentList {
 	public:
 		void input(student st[], int &n) {
 			for(int i = 0; i < n; i++) {
 				cout<<"\nSinh vien thu "<<(i + 1)<<": ";
 				st[i].input();
			 }
		 }
		 void output(student st[], int &n) {
 			for(int i = 0; i < n; i++) {
 				cout<<"\nSinh vien thu "<<(i + 1)<<": ";
 				st[i].output();
			 }
		 }
 };

 int main()
 {
 	int n = 5;
 	student st[n];
 	studentList list;
 	list.input(st, n);
	list.output(st, n);  
 }

