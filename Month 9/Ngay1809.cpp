#include <iostream>
#include <math.h>
using namespace std;

class Thietbi {
	public:
		string SoHieu, Tenthietbi, Xuatxu, loaiTV;
		float GiacoVAT;

		void Nhap();

		float Tinhgiaban() {};
};

class Tivi:public Thietbi{
	public:
		string LoaiTV;
		float GiachuaVAT;
		
		void Nhap() {
		cout << "\nSo Hieu: ";
		cin >> SoHieu;
		cout << "Ten thiet bi: ";
		cin >> Tenthietbi;
		cout << "Xuat xu: ";
		cin >> Xuatxu;
		cout << "Loai TV: ";
		cin >> loaiTV;
		cout << "Gia chua VAT: ";
		cin >> GiachuaVAT;
	}
	
	void Xuat() {
		cout << "\nSo Hieu: " << SoHieu << " Ten thiet bi: " << Tenthietbi << " Xuat xu: " << Xuatxu << " Loai TV: " << loaiTV << " Gia chua VAT: " << GiachuaVAT;
	}

	float Tinhgiaban() {
		return GiacoVAT = GiachuaVAT + (GiachuaVAT * 10) / 100;
	}
	
};

class DSTivi{
	public:
	Tivi tivi[10];
	
	void NhapTV() {
		for(int i = 0; i < 10; i++) {
			cout << "\nTivi thu " <<  (i + 1) << ": ";
			tivi[i].Nhap();
		}
	}

	float TinhTongTien() {
		float Sum = 0.0f;
		for(int i = 0; i < 10; i++) {
			Sum += tivi[i].Tinhgiaban();
		}
		return Sum;
	}

	void SapXep() {
		Tivi temp;
		for(int i = 0; i < 10; i++) {
			for(int j = i + 1; j < 10; j++) {
				if(tivi[j].GiachuaVAT < tivi[i].GiachuaVAT) {
					temp = tivi[i];
					tivi[i] = tivi[j];
					tivi[j] = temp;
				}
			}
		}
	}

	void TimTV() {
		float max = 0.0f;
		for(int i = 0; i < 10; i++) {
			if(tivi[i].GiachuaVAT > max) {
				max = tivi[i].GiachuaVAT;
			}
		}

		cout << "\nTivi co gia chua VAT cao nhat: ";
		
		for(int i = 0; i < 10; i++) {
			if(tivi[i].GiachuaVAT == max) {
				tivi[i].Xuat();
			}
		}
	}

	void HienThi() {
		for(int i = 0; i < 10; i++) {
			tivi[i].Xuat();
		}
	}
};

int main() {
	DSTivi List;
	List.NhapTV();
	cout << "\nTong tien = " << List.TinhTongTien();
	cout << "\nDanh sach cac tivi chua sap xep: ";
	List.HienThi();
	List.TimTV();
	List.SapXep();
	cout << "\nDanh sach cac tivi da sap xep: ";
	List.HienThi();
}
