#include<iostream>
#include<string>
#include<fstream>
using namespace std;
#include "ChuyenXeNgoaiThanh.h"
#pragma once

//Nguyen Phan Tuan Dat

ChuyenXeNgoaiThanh::ChuyenXeNgoaiThanh(){
	ChuyenXe();
    this->noiDen = "";
    this->soNgayDiDuoc = 0;
}

ChuyenXeNgoaiThanh::ChuyenXeNgoaiThanh(int maSoChuyen, string hoTenTaiXe, string soXe, double doanhThu, string nhaSanXuat,string noiDen, int soNgayDiDuoc):  ChuyenXe(maSoChuyen,hoTenTaiXe,soXe, doanhThu,nhaSanXuat){
    this->noiDen = noiDen;
    this->soNgayDiDuoc = soNgayDiDuoc;
}

void ChuyenXeNgoaiThanh::nhapThongTinChuyenXe(){
    ChuyenXe::nhapThongTinChuyenXe();
    cout<<"Nhap noi den: ";
    cin>>noiDen;
    cout<<"Nhap so ngay di duoc: ";
    cin>>soNgayDiDuoc;
    type = "cxngoaithanh";
    tinhDoanhThu();
}

ostream &operator << (ostream &os, ChuyenXeNgoaiThanh &c){
    os<<"[ChuyenXeNgoaiThanh] Ma so chuyen: "<<c.maSoChuyen<<endl;
    os<<"[ChuyenXeNgoaiThanh] So xe: "<<c.soXe<<endl;
    os<<"[ChuyenXeNgoaiThanh] Ho ten tai xe: "<<c.hoTenTaiXe<<endl;
    os<<"[ChuyenXeNgoaiThanh] Doanh thu: "<<c.doanhThu<<endl;
    os<<"[ChuyenXeNgoaiThanh] Noi den: "<<c.noiDen<<endl;
    os<<"[ChuyenXeNgoaiThanh] So ngay di duoc: "<<c.soNgayDiDuoc<<endl;
    return os;
}

//Tru thue 10%
double ChuyenXeNgoaiThanh::tinhDoanhThu(){
    return (double)doanhThu - (double)doanhThu * 10 / 100;
}

string ChuyenXeNgoaiThanh::toString(){
    return "[ChuyenXeNgoaiThanh] Ma so chuyen: " + convertToString(maSoChuyen) + 
    "\n[ChuyenXeNgoaiThanh] So xe: " + soXe +
    "\n[ChuyenXeNgoaiThanh] Ho ten tai xe: " + hoTenTaiXe +
    "\n[ChuyenXeNgoaiThanh] Doanh thu: " + convertToString(doanhThu) +
    "\n[ChuyenXeNgoaiThanh] Noi den: " + noiDen +
    "\n[ChuyenXeNgoaiThanh] So ngay di duoc: " + convertToString(soNgayDiDuoc) + "\n";
}
