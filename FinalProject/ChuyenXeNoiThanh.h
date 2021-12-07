#include "ChuyenXe.h"
#include<iostream>
#include<string>
#include<fstream>
using namespace std;
#pragma once

// Tran Huu Toan

class ChuyenXeNoiThanh : public ChuyenXe {
public:
    int soTuyen;
    double soKmDiDuoc;
    ChuyenXeNoiThanh();
    ChuyenXeNoiThanh(int maSoChuyen, string hoTenTaiXe, string soXe, double doanhThu, string nhaSanXuat, int soTuyen, double soKmDiDuoc);
    void nhapThongTinChuyenXe();
    friend ostream &operator << (ostream &os, ChuyenXeNoiThanh& c);
    double tinhDoanhThu();
    string toString();
};

ostream &operator << (ostream &os, ChuyenXeNoiThanh& c);

