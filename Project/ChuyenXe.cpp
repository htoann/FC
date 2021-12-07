#include<iostream>
#include<string>
#include<fstream>
#include "stringFormat.cpp"
#include "dateAndTime.cpp"
using namespace std;

class ChuyenXe{
public: 
    int maSoChuyen;
    string hoTenTaiXe ;
    string soXe ;
    double doanhThu ;
    string nhaSanXuat ;
    string namSanXuat;
    string xuatXu;
    string type;

    ChuyenXe(){
        this->maSoChuyen = 0;
        this->soXe = "";
        this->doanhThu = 0;
        this->hoTenTaiXe = "";
        this->nhaSanXuat = "";
        this->namSanXuat = "";
        this->xuatXu = "";
    }

    ChuyenXe(int maSoChuyen, string hoTenTaiXe, string soXe, double doanhThu, string nhaSanXuat ){
        this->maSoChuyen = maSoChuyen;
        this->soXe = soXe;
        this->doanhThu = doanhThu;
        this->hoTenTaiXe = hoTenTaiXe;
        this->nhaSanXuat = nhaSanXuat;
        this->namSanXuat = namSanXuat;
        this->xuatXu = xuatXu;
    }

    virtual void nhapThongTinChuyenXe(){
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

    virtual double tinhDoanhThu(){
        return 0;
    }

    friend ostream &operator << (ostream &os, ChuyenXe c){
        os<<"Ma so chuyen: "<<c.maSoChuyen<<endl;
        os<<"So xe: "<<c.soXe<<endl;
        os<<"Ho ten tai xe: "<<c.hoTenTaiXe<<endl;
        os<<"Doanh thu: "<<c.doanhThu<<endl;
        os<<"Nha san xuat: "<<c.nhaSanXuat<<endl;
        os<<"Nam san xuat: "<<c.namSanXuat<<endl;
        os<<"XuatXu: "<<c.xuatXu<<endl;
        return os;
    }

    friend istream &operator >> (istream &is, ChuyenXe c){
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

    virtual string toString(){
        return "";
    }
    
};

class ChuyenXeNoiThanh : public ChuyenXe{
public:
    int soTuyen;
    double soKmDiDuoc;

    ChuyenXeNoiThanh(){
        this->soTuyen = 0;
        this->soKmDiDuoc = 0;
    }

    ChuyenXeNoiThanh(int maSoChuyen, string hoTenTaiXe, string soXe, double doanhThu, string nhaSanXuat, int soTuyen, double soKmDiDuoc) : ChuyenXe(maSoChuyen,hoTenTaiXe,soXe, doanhThu,nhaSanXuat){
        this->soTuyen = soTuyen;
        this->soKmDiDuoc = soKmDiDuoc;
    }

    void nhapThongTinChuyenXe(){
        ChuyenXe::nhapThongTinChuyenXe();
        cout<<"Nhap so tuyen: ";
        cin>>soTuyen;
        cout<<"Nhap so km di duoc: ";
        cin>>soKmDiDuoc;
        type = "cxnoithanh";
    }


    friend ostream &operator << (ostream &os, ChuyenXeNoiThanh c){
        os<<"[ChuyenXeNoiThanh] Ma so chuyen: "<<c.maSoChuyen<<endl;
        os<<"[ChuyenXeNoiThanh] So xe: "<<c.soXe<<endl;
        os<<"[ChuyenXeNoiThanh] Ho ten tai xe: "<<c.hoTenTaiXe<<endl;
        os<<"[ChuyenXeNoiThanh] Doanh thu: "<<c.doanhThu<<endl;
        os<<"[ChuyenXeNoiThanh] So tuyen: "<<c.soTuyen<<endl;
        os<<"[ChuyenXeNoiThanh] So km di duoc: "<<c.soKmDiDuoc<<endl;
        return os;
    }

    //Tru thue 5%
    double tinhDoanhThu(){
        return (double)doanhThu - (double)doanhThu * 5 / 100;
    }

    string toString(){
        return "[ChuyenXeNoiThanh] Ma so chuyen: " + convertToString(maSoChuyen) + 
        "\n[ChuyenXeNoiThanh] So xe: " + soXe +
        "\n[ChuyenXeNoiThanh] Ho ten tai xe: " + hoTenTaiXe +
        "\n[ChuyenXeNoiThanh] Doanh thu: " + convertToString(doanhThu) +
        "\n[ChuyenXeNoiThanh] So tuyen: " + convertToString(soTuyen) +
        "\n[ChuyenXeNoiThanh] So km di duoc: " + convertToString(soKmDiDuoc) + "\n";
    }

};

class ChuyenXeNgoaiThanh : public ChuyenXe{
public:
    string noiDen;
    int soNgayDiDuoc;

    ChuyenXeNgoaiThanh(){
        this->noiDen = "";
        this->soNgayDiDuoc = 0;
    }

    ChuyenXeNgoaiThanh(int maSoChuyen, string hoTenTaiXe, string soXe, double doanhThu, string nhaSanXuat,string noiDen, int soNgayDiDuoc):  ChuyenXe(maSoChuyen,hoTenTaiXe,soXe, doanhThu,nhaSanXuat){
        this->noiDen = noiDen;
        this->soNgayDiDuoc = soNgayDiDuoc;
    }

    void nhapThongTinChuyenXe(){
        ChuyenXe::nhapThongTinChuyenXe();
        cout<<"Nhap noi den: ";
        cin>>noiDen;
        cout<<"Nhap so ngay di duoc: ";
        cin>>soNgayDiDuoc;
        type = "cxngoaithanh";
    }

    friend ostream &operator << (ostream &os, ChuyenXeNgoaiThanh c){
        os<<"[ChuyenXeNgoaiThanh] Ma so chuyen: "<<c.maSoChuyen<<endl;
        os<<"[ChuyenXeNgoaiThanh] So xe: "<<c.soXe<<endl;
        os<<"[ChuyenXeNgoaiThanh] Ho ten tai xe: "<<c.hoTenTaiXe<<endl;
        os<<"[ChuyenXeNgoaiThanh] Doanh thu: "<<c.doanhThu<<endl;
        os<<"[ChuyenXeNgoaiThanh] Noi den: "<<c.noiDen<<endl;
        os<<"[ChuyenXeNgoaiThanh] So ngay di duoc: "<<c.soNgayDiDuoc<<endl;
        return os;
    }

    //Tru thue 10%
    double tinhDoanhThu(){
        return (double)doanhThu - (double)doanhThu * 10 / 100;
    }

    string toString(){
        return "[ChuyenXeNgoaiThanh] Ma so chuyen: " + convertToString(maSoChuyen) + 
        "\n[ChuyenXeNgoaiThanh] So xe: " + soXe +
        "\n[ChuyenXeNgoaiThanh] Ho ten tai xe: " + hoTenTaiXe +
        "\n[ChuyenXeNgoaiThanh] Doanh thu: " + convertToString(doanhThu) +
        "\n[ChuyenXeNgoaiThanh] Noi den: " + noiDen +
        "\n[ChuyenXeNgoaiThanh] So ngay di duoc: " + convertToString(soNgayDiDuoc) + "\n";
    }

};

class ChuyenXeList{
public: 
    ChuyenXe *cx[100];
    int k,n=0;
    string fileAddress = "file.txt"; // File de doc du lieu
    string dataFile = "dataFile.txt"; // file data de luu du lieu
    ofstream outfile; 

    void nhapListChuyenXe(){
        int choose;
        k=0;
        while(k<100){
            cout<<"1.ChuyenXeNoiThanh\n2.ChuyenXeNgoaiThanh\n3.Exit\nChoose(1,2,3): ";
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
    void swapVal(val &a , val &b){
            val temp;
            temp = a;
            a = b;
            b = temp;
    }

    void SortByAlphabet(){
        for(int i = 0; i < k; i++){
            cx[i]->hoTenTaiXe = formatString(cx[i]->hoTenTaiXe);
        }

        for (int i=0;i<k-1;i++){
            for (int j=i+1;j<k;j++){
                if(((int)(cx[i]->hoTenTaiXe.at(1))) > ((int)(cx[j]->hoTenTaiXe.at(1)))){
                    swapVal(cx[i], cx[j]);
                }
            }     
        }
        
    }

    void sortByRevenue(){
        for (int i=0;i<k-1;i++){
            for (int j=i+1;j<k;j++){
                if(cx[i]->doanhThu > cx[j]->doanhThu){
                    swapVal(cx[i], cx[j]);
                }
            }     
        }
    }

    void searchByName(){
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

    void  xuatListChuyenXe(){
        for(int i = 0; i < k;i++){
            cout<<*cx[i];
        }
    }

    void generationFile(){
        
        outfile.open(fileAddress, fstream::app);
        outfile << dateNow()<<endl;
        for(int i  = 0; i< k ;i++){
            outfile << cx[i]->toString() << endl;
        }
        outfile.close();
    }


    void readFile(){
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

    void sumOfRevenue(){
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

    void maxOfRevenue(){
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

    void editInformation(){
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
};

int main(){
    ChuyenXeList cx;
    cout<<"Cac chuyen xe truoc day: "<<endl;
    cx.readFile();

    int choose;
    char cont;

    do
    {
        cout<<"1.Nhap chuyen xe \n2.Xuat tat ca cac chuyen xe\n3.Sap xep cac chuyen xe theo ten tai xe\n4.Sap xep cac chuyen xe theo doanh thu\n5.Tong doanh thu\n6.Max doanh thu, Min doanh thu\n7.Tim kiem chuyen xe\n8.Chinh sua thong tin chuyen xe\nChon mot tinh nang: ";
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
