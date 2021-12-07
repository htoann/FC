#include<iostream>
using namespace std;
#pragma once

class ChuyenXe {
  public:
    int maSoChuyen;
    string hoTenTaiXe ;
    string soXe ;
    double doanhThu ;
    string nhaSanXuat ;
    string namSanXuat;
    string xuatXu;
    string type;

    ChuyenXe();
    ChuyenXe(int maSoChuyen, string hoTenTaiXe, string soXe, double doanhThu, string nhaSanXuat );
    virtual void nhapThongTinChuyenXe();
    virtual double tinhDoanhThu();
    friend ostream &operator << (ostream &os, ChuyenXe& c);
    friend istream &operator >> (istream &is, ChuyenXe& c);
    virtual string toString();
};

ostream &operator << (ostream &os, ChuyenXe& c);
istream &operator >> (istream &is, ChuyenXe& c);
