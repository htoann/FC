#include <iostream>
using namespace std;

template<class T, class V>
class Demo {
  V a[5];
  int n = 5;
  public:
  	int CheckNguyenTo(T a) {
	  if(a < 2) {
	    return 0;
	  }
	  for(int i = 3; i < a; i++) {
	    if(a % 2 == 0) {
	      return 0;
	    }
	  }
	  return 1;
	}
  	
    void Nhap() {
      for (int i = 0; i < n; i++) {
        cout << "Enter a[" << i << "]: ";
        cin >> a[i];
      }
    }

    void Xuat() {
      for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
      }
    }

    void TangDan() {
      cout << "\nTang dan: ";
      for (int i = 0; i < n; i++) {
        for (int j = 0 ; j < n; j++) {
          if(a[j] < a[i]) {
            float temp = a[j];
            a[j] = a[i];
            a[i] = temp;
          }
        }
      }
    }

    void GiamDan() {
      cout << "\nGiam dan: ";
      for (int i = 0; i < n; i++) {
        for (int j = 0 ; j < n; j++) {
          if(a[j] > a[i]) {
            float temp = a[j];
            a[j] = a[i];
            a[i] = temp;
          }
        }
      }
    }

    void HienThiNguyenToVaTong() {
      float tong = 0;
      cout << "\nSo Nguyen To: ";
      for (int i = 0; i < n; i++) {
        if(a[i] == (int)a[i]) {
        	if(CheckNguyenTo(a[i])) {
          		cout << a[i] << " ";
	        	tong += a[i];
        	}
		}
      }
      cout << "\nTong NT = " << tong << endl;
    }

    void HienThiNoNguyenToVaTong() {
			float sumNotSNT = 0;
			for(int i=0; i<n; i++) {
				if(arr[i] == (int)arr[i]){
					if(checkSNT(arr[i]) == 0) {
						cout << arr[i] << " ";
						sumNotSNT += arr[i];
					}		
				} else {
					cout << arr[i] << " ";
					sumNotSNT += arr[i];
				}	
			}
			cout << "	Tong khong phai SNT = " << sumNotSNT << endl;
		}
};


int main() {
	Demo<int, float> a;
	a.Nhap();
	a.Xuat();
	a.HienThiNguyenToVaTong();
	a.HienThiNoNguyenToVaTong();
	a.TangDan();
	a.Xuat();
	a.GiamDan();
	a.Xuat();
}
