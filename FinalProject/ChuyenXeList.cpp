#include<iostream>
#include<string>
#include<fstream>
using namespace std;
#include "ChuyenXeList.h"
#include "ChuyenXeNoiThanh.cpp"
#include "ChuyenXeNgoaiThanh.cpp"

//Tran Cong Tri

void ChuyenXeList::nhapListChuyenXe(){
    int choose;
    k=0;
    while(k<100){
        cout<<"1.Chuyen Xe Noi Thanh\n2.Chuyen Xe Ngoai Thanh\n3.Exit\nChoose(1, 2, 3): ";
        cin>>choose;
        if(choose ==1){
            cx[k] = new ChuyenXeNoiThanh();
        }
        if(choose ==2){
            cx[k] = new ChuyenXeNgoaiThanh();
        }    
        if(choose != 1 and choose != 2){
            break;
        }
        cx[k]->nhapThongTinChuyenXe();
        k++;
    }
}

// sap xep theo ten

template <class val>
void ChuyenXeList::swapVal(val &a , val &b){
        val temp;
        temp = a;
        a = b;
        b = temp;
}

void ChuyenXeList::SortByAlphabet(){
    for(int i = 0; i < k; i++){
        cx[i]->hoTenTaiXe = formatString(cx[i]->hoTenTaiXe);
    }

    for (int i=0;i<k-1;i++){
        for (int j=i+1;j<k;j++){
            if(((int)(cx[i]->hoTenTaiXe.at(0))) > ((int)(cx[j]->hoTenTaiXe.at(0)))){
                swapVal(cx[i], cx[j]);
            }
        }     
    }
    
}

void ChuyenXeList::sortByRevenue(){
    for (int i=0;i<k-1;i++){
        for (int j=i+1;j<k;j++){
            if(cx[i]->doanhThu > cx[j]->doanhThu){
                swapVal(cx[i], cx[j]);
            }
        }     
    }
}

void ChuyenXeList::searchByName(){
    string nameSearch;
    for(int i = 0; i < k; i++){
        cx[i]->hoTenTaiXe = formatString(cx[i]->hoTenTaiXe);
    }

    cout<<"Vui long nhap ten tai xe: ";
    cin.ignore();
    getline(cin, nameSearch);
    nameSearch = formatString(nameSearch);

    for(int i = 0 ; i < k; i++){
        if(nameSearch == cx[i]->hoTenTaiXe){
            cout<<cx[i]->toString();
        }
    }
}

void  ChuyenXeList::xuatListChuyenXe(){
    for(int i = 0; i < k;i++){
        cout<<*cx[i];
    }
}

void ChuyenXeList::generationFile(){
    
    outfile.open(fileAddress, fstream::app);
    outfile << dateNow()<<endl;
    for(int i  = 0; i< k ;i++){
        outfile << cx[i]->toString() << endl;
    }
    outfile.close();
}


void ChuyenXeList::readFile(){
    k = 0;
    ifstream in(fileAddress);
    if (in.fail()){
        cout<<"can not open file";
    }
    else{
        while(!in.eof()){
            char temp[255];
            in.getline(temp, 255);
            string line = temp;
            cout << line << endl;
        }
    }
}

void ChuyenXeList::sumOfRevenue(){
    double sumNoiThanh = 0;
    double sumNgoaiThanh = 0;
    for(int i = 0 ; i< k ; i++){
        if(cx[i]->type == "cxngoaithanh")
            sumNgoaiThanh+= cx[i]->doanhThu;
        if(cx[i]->type == "cxnoithanh")
            sumNoiThanh+= cx[i]->doanhThu;
    }
    cout<<"Tong doanh thu noi thanh: "<<sumNoiThanh<<endl;
    cout<<"Tong doanh thu ngoai thanh: "<<sumNgoaiThanh<<endl;
    cout<<"Tong doanh thu: "<<(sumNoiThanh+sumNgoaiThanh)<<endl;
}

void ChuyenXeList::maxOfRevenue(){
    double max = cx[0]->doanhThu;
    double min = cx[0]->doanhThu;
    for(int i = 0 ; i< k ;i++){
        if( max < cx[i]->doanhThu){
            max = cx[i]->doanhThu;
        }else if(min > cx[i]->doanhThu){
            min = cx[i]->doanhThu;
        }
    }
    for(int i = 0 ; i< k ;i++){
        if(max == cx[i]->doanhThu){
            cout<<"Doanh thu cao nhat: "<<endl;
            cout<<*cx[i];
        }
        if(min == cx[i]->doanhThu){
            cout<<"Doanh thu thap nhat: "<<endl;
            cout<<*cx[i];
        }
    }
}

void ChuyenXeList::editInformation(){
    int typeOfBuses;
    int IDSearch;

    cout << "Loai chuyen xe: \n1.Chuyen xe noi thanh\n2.Chuyen xe ngoai thanh\nNhap: ";
    cin>>typeOfBuses;
    if(typeOfBuses == 1){
        cout<<"Nhap ma so chuyen: ";
        cin>>IDSearch;
        for(int i = 0 ; i< k ;i++){
            if(IDSearch == cx[i]->maSoChuyen && cx[i]->type == "cxnoithanh"){
                cx[i]->nhapThongTinChuyenXe();
            }
        }
    }else if(typeOfBuses == 2){
        cout<<"Nhap ma so chuyen: ";
        cin>>IDSearch;
        for(int i = 0 ; i< k ;i++){
            if(IDSearch == cx[i]->maSoChuyen && cx[i]->type == "cxngoaithanh"){
                cx[i]->nhapThongTinChuyenXe();
            }
        }
    }else{
        cout<<"Invalid type";
    }
}
