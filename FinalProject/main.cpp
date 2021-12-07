#include<iostream>
#include<string>
#include<fstream>
#include "stringFormat.cpp"
#include "dateAndTime.cpp"
using namespace std;
#include "ChuyenXeList.cpp"
#include "ChuyenXeNgoaiThanh.cpp"
#include "ChuyenXeNoiThanh.cpp"

//Tran Mai Anh Phong 

int main(){
    ChuyenXeList cx;
    cout<<"Cac chuyen xe truoc day: "<<endl;
    cx.readFile();

    int choose;
    char cont;

    do
    {
        cout<<"//-----------------------------------------------------\\\\"<<endl;
        cout<<"|\t1.Nhap chuyen xe \t\t\t\t|\n|\t2.Xuat tat ca cac chuyen xe\t\t\t|\n|\t3.Sap xep cac chuyen xe theo ten tai xe\t\t|\n|\t4.Sap xep cac chuyen xe theo doanh thu\t\t|\n|\t5.Tong doanh thu\t\t\t\t|\n|\t6.Max doanh thu, Min doanh thu\t\t\t|\n|\t7.Tim kiem chuyen xe\t\t\t\t|\n|\t8.Chinh sua thong tin chuyen xe\t\t\t|"<<endl;
        cout<<"\\\\-----------------------------------------------------//"<<endl;
        cout<<"\n\nChon mot tinh nang: "; 
        cin>>choose;
        switch (choose)
        {
        case 1:
            cout<<"-------------------------"<<endl;
            cx.nhapListChuyenXe();
            cout<<"-------------------------"<<endl;
            break;
        case 2:
            cout<<"-------------------------"<<endl;
            cx.xuatListChuyenXe();
            cout<<"-------------------------"<<endl;
            break;
        case 3:
            cout<<"-------------------------"<<endl;
            cx.SortByAlphabet();
            cx.xuatListChuyenXe();
            cout<<"-------------------------"<<endl;
            break;
        case 4:
            cout<<"-------------------------"<<endl;
            cx.sortByRevenue();
            cx.xuatListChuyenXe();
            cout<<"-------------------------"<<endl;
            break;
        case 5:
            cout<<"-------------------------"<<endl;
            cx.sumOfRevenue();
            cout<<"-------------------------"<<endl;
            break;
        case 6:
            cout<<"-------------------------"<<endl;
            cx.maxOfRevenue();
            cout<<"-------------------------"<<endl;
            break;
        case 7:
            cout<<"-------------------------"<<endl;
            cx.searchByName();
            cout<<"-------------------------"<<endl;
            break;
        case 8:
            cout<<"-------------------------"<<endl;
            cx.editInformation();
            cout<<"-------------------------"<<endl;
            break;
        default:
            cout<<"Khong co lua chon nay"<<endl;
            break;
        }
        cout<<"Tiep tuc? (y/n): ";
        cin>>cont;
    } while (cont == 'y' || cont == 'Y');
    
    cx.generationFile();
}
