#include "ChuyenXe.h"
#include<iostream>
using namespace std;
#pragma once

//Nguyen Phan Tuan Dat

class ChuyenXeNgoaiThanh : public ChuyenXe{
public:
    string noiDen;
    int soNgayDiDuoc;
    ChuyenXeNgoaiThanh();
    ChuyenXeNgoaiThanh(int maSoChuyen, string hoTenTaiXe, string soXe, double doanhThu, string nhaSanXuat,string noiDen, int soNgayDiDuoc);
    void nhapThongTinChuyenXe();
    friend ostream &operator << (ostream &os, ChuyenXeNgoaiThanh &c);
    double tinhDoanhThu();
    string toString();
};

ostream &operator << (ostream &os, ChuyenXeNgoaiThanh &c);
