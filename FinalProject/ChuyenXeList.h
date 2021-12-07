#include "ChuyenXe.h"
#include<iostream>
#include<string>
#include<fstream>
using namespace std;
#include "ChuyenXeNgoaiThanh.h"
#include "ChuyenXeNoiThanh.h"

//Tran Cong Tri

class ChuyenXeList{
public: 
    ChuyenXe *cx[100];
    int k,n=0;
    string fileAddress = "file.txt"; // File de doc du lieu
    string dataFile = "dataFile.txt"; // file data de luu du lieu
    ofstream outfile; 

    void nhapListChuyenXe();
    template <class val>
    void swapVal(val &a , val &b);
    void SortByAlphabet();
    void sortByRevenue();
    void searchByName();
    void  xuatListChuyenXe();
    void generationFile();
    void readFile();
    void sumOfRevenue();
    void maxOfRevenue();
    void editInformation();
};