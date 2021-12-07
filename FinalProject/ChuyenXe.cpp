#include"ChuyenXe.h"
#include<iostream>
#include<string>
#include<fstream>
using namespace std;
#pragma once
#include "ChuyenXe.cpp"

// Tran Duy Tung

ChuyenXe::ChuyenXe(){
    this->maSoChuyen = 0;
    this->soXe = "";
    this->doanhThu = 0;
    this->hoTenTaiXe = "";
    this->nhaSanXuat = "";
    this->namSanXuat = "";
    this->xuatXu = "";
}

ChuyenXe::ChuyenXe(int maSoChuyen, string hoTenTaiXe, string soXe, double doanhThu, string nhaSanXuat ){
    this->maSoChuyen = maSoChuyen;
    this->soXe = soXe;
    this->doanhThu = doanhThu;
    this->hoTenTaiXe = hoTenTaiXe;
    this->nhaSanXuat = nhaSanXuat;
    this->namSanXuat = namSanXuat;
    this->xuatXu = xuatXu;
}

void ChuyenXe::nhapThongTinChuyenXe(){
    cout<<"Nhap ma so chuyen: ";
    cin>>maSoChuyen;
    cout<<"Nhap so xe: ";
    cin>>soXe;
    cout<<"Nhap ho va ten tai xe: ";
    cin.ignore();
    getline(cin, hoTenTaiXe);
    cout<<"Nhap doanh thu: ";
    cin>>doanhThu;
    cout<<"Nhap nha san xuat: ";
    cin>>nhaSanXuat;
    cout<<"Nhap nam san xuat: ";
    cin>>namSanXuat;
    cout<<"Nhap xuat xu: ";
    cin>>xuatXu;
}

double ChuyenXe::tinhDoanhThu(){
    return 0;
}

ostream &operator << (ostream &os, ChuyenXe& c){
    os<<"Ma so chuyen: "<<c.maSoChuyen<<endl;
    os<<"So xe: "<<c.soXe<<endl;
    os<<"Ho ten tai xe: "<<c.hoTenTaiXe<<endl;
    os<<"Doanh thu: "<<c.doanhThu<<endl;
    os<<"Nha san xuat: "<<c.nhaSanXuat<<endl;
    os<<"Nam san xuat: "<<c.namSanXuat<<endl;
    os<<"XuatXu: "<<c.xuatXu<<endl;
    return os;
}

istream &operator >> (istream &is, ChuyenXe& c){
    cout<<"Nhap ma so chuyen: ";
    cin>>c.maSoChuyen;
    cout<<"Nhap so xe: ";
    cin>>c.soXe;
    cout<<"Nhap ho va ten tai xe: ";
    cin.ignore();
    getline(cin, c.hoTenTaiXe);
    cout<<"Nhap doanh thu: ";
    cin>>c.doanhThu;
    cout<<"Nhap nha san xuat: ";
    cin>>c.nhaSanXuat;
    cout<<"Nhap nam san xuat: ";
    cin>>c.namSanXuat;
    cout<<"Nhap xuat xu: ";
    cin>>c.xuatXu;
    return is;
}

string ChuyenXe::toString(){
    return "";
}
