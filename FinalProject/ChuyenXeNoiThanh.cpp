#include<iostream>
#include<string>
#include<fstream>
using namespace std;
#include "ChuyenXeNoiThanh.h"
#include "ChuyenXe.cpp"
// Tranh include nhieu lan
#pragma once 

// Tran Huu Toan

ChuyenXeNoiThanh::ChuyenXeNoiThanh(){
    this->soTuyen = 0;
    this->soKmDiDuoc = 0;
}

ChuyenXeNoiThanh::ChuyenXeNoiThanh(int maSoChuyen, string hoTenTaiXe, string soXe, double doanhThu, string nhaSanXuat, int soTuyen, double soKmDiDuoc) : ChuyenXe(maSoChuyen,hoTenTaiXe,soXe, doanhThu,nhaSanXuat){
	this->soTuyen = soTuyen;
    this->soKmDiDuoc = soKmDiDuoc;
}

void ChuyenXeNoiThanh::nhapThongTinChuyenXe(){
    ChuyenXe::nhapThongTinChuyenXe();
    cout<<"Nhap so tuyen: ";
    cin>>soTuyen;
    cout<<"Nhap so km di duoc: ";
    cin>>soKmDiDuoc;
    type = "cxnoithanh";
    tinhDoanhThu();
}

ostream &operator << (ostream &os, ChuyenXeNoiThanh& c) {
    os<<"[ChuyenXeNoiThanh] Ma so chuyen: "<<c.maSoChuyen<<endl;
    os<<"[ChuyenXeNoiThanh] So xe: "<<c.soXe<<endl;
    os<<"[ChuyenXeNoiThanh] Ho ten tai xe: "<<c.hoTenTaiXe<<endl;
    os<<"[ChuyenXeNoiThanh] Doanh thu: "<<c.doanhThu<<endl;
    os<<"[ChuyenXeNoiThanh] So tuyen: "<<c.soTuyen<<endl;
    os<<"[ChuyenXeNoiThanh] So km di duoc: "<<c.soKmDiDuoc<<endl;
    return os;
}

//Tru thue 5%
double ChuyenXeNoiThanh::tinhDoanhThu(){
    return (double)doanhThu - (double)doanhThu * 5 / 100;
}

string ChuyenXeNoiThanh::toString(){
    return "[ChuyenXeNoiThanh] Ma so chuyen: " + convertToString(maSoChuyen) + 
    "\n[ChuyenXeNoiThanh] So xe: " + soXe +
    "\n[ChuyenXeNoiThanh] Ho ten tai xe: " + hoTenTaiXe +
    "\n[ChuyenXeNoiThanh] Doanh thu: " + convertToString(doanhThu) +
    "\n[ChuyenXeNoiThanh] So tuyen: " + convertToString(soTuyen) +
    "\n[ChuyenXeNoiThanh] So km di duoc: " + convertToString(soKmDiDuoc) + "\n";
}
