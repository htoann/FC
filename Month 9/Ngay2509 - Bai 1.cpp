#include <iostream>
#include <math.h>
using namespace std;

struct student{
    int id;
    string name;
    int namSinh;
    float toan, ly, hoa;
    float GPA;
};

void input(student st[], int &n){
    for(int i = 0; i< n; ++i){
        cout << "\nSV thu " <<  (i + 1) << ": ";
        cout << "\nMa: ";
        cin >> st[i].id;
        cin.ignore();
        cout << "Name: ";
        getline(cin, st[i].name);
        cout << "Nam Sinh: ";
        cin >> st[i].namSinh;
        cout << "Toan, Ly, Hoa: ";
        cin >> st[i].toan >> st[i].ly >> st[i].hoa;
        cout << "GPA: ";
        cin >> st[i].GPA;
    }
}

 
void output(student st[], int n){
    for(int i = 0; i< n; ++i){
        cout << "Ma so: " << st[i].id << " " << " Name: " << st[i].name << " " << " Nam sinh: " << st[i].namSinh << " Toan: " << st[i].toan << 
			" Ly: " << st[i].ly <<
			" Hoa: " << st[i].hoa <<
			" GPA: " << st[i].GPA << "\n";
    }
}

void HoanVi(student &a, student &b) {
	student temp = a;
	a = b;
	b = temp;
}

void SapXepTangDanGPA(student st[], int &n){
	cout<<"\nSap xep SV tang dan theo GPA \n";
    for(int i = 0; i< n; ++i){
        for(int j = i + 1; j < n; j++) {
        	if(st[i].GPA > st[j].GPA) {
        		HoanVi(st[i], st[j]);
			}
		}
    }
    output(st, n);
}

void SapXepGiamDanToan(student st[], int &n){
	cout<<"\nSap xep SV giam dan theo diem toan \n";
    for(int i = 0; i< n; ++i){
        for(int j = i + 1; j < n; j++) {
        	if(st[i].toan < st[j].toan) {
        		HoanVi(st[i], st[j]);
			}
		}
    }
    output(st, n);
}

void GPAHonNamVaKhongMonNaoDuoi3(student st[], int &n) {
	cout<<"\nSinh vien co diem trung binh lon hon 5 va khong co mon nao duoi 3: \n";
	for(int i = 0; i< n; ++i){
        if(st[i].GPA > 5 && (st[i].toan >= 3 && st[i].ly >= 3 && st[i].hoa >= 3)) {
        	cout << "Ma so: " << st[i].id << " " << " Name: " << st[i].name << " " << " Nam sinh: " << st[i].namSinh << " Toan: " << st[i].toan << 
				" Ly: " << st[i].ly <<
				" Hoa: " << st[i].hoa <<
		 		" GPA: " << st[i].GPA << "\n";
		}
    }
}

void MaxGPA(student st[], int n) {
	int max = 0;
	int min = st[0].GPA;
    for(int i = 0; i< n; ++i){
        if(st[i].GPA > max) {
        	max = st[i].GPA;
		}
		if(st[i].GPA < min) {
        	min = st[i].GPA;
		}
    }
    
    for (int i = 0; i < n; i++) {
		if(st[i].GPA == max) {
			cout << "\nSinh vien co GPA cao nhat: " << endl;
			 cout << "Ma so: " << st[i].id << " " << " Name: " << st[i].name << " " << " GPA: " << st[i].GPA << "\n";
		}
		if(st[i].GPA == min) {
			cout << "\nSinh vien co GPA thap nhat: " << endl;
			 cout << "Ma so: " << st[i].id << " " << " Name: " << st[i].name << " " << " GPA: " << st[i].GPA << "\n";
		}
	}
}

void TimKiem(student st[], int n) {
	string name;
	cout << "Nhap ten sinh vien can tim kiem: ";
	cin.ignore();
	getline(cin, name);
	for(int i = 0; i< n; ++i){
        if(st[i].name == name) {
        	cout << "Ma so: " << st[i].id << " " << " Name: " << st[i].name << " " << " Nam sinh: " << st[i].namSinh << " Toan: " << st[i].toan << 
				" Ly: " << st[i].ly <<
				" Hoa: " << st[i].hoa <<
		 		" GPA: " << st[i].GPA << "\n";
		}
    }
}

 int main()
 {
 	student st[100];
 	int n;
 	cout <<"Nhap so SV: ";
 	cin >> n;
 	input(st, n);
 	cout<<"\nDanh sach SV \n";
    output(st, n);
    MaxGPA(st, n);
    SapXepGiamDanToan(st, n);
    GPAHonNamVaKhongMonNaoDuoi3(st, n);
    SapXepTangDanGPA(st, n);
    TimKiem(st, n);
 }

