//Static giup tiet kiem o nho luu tru
//static X khi chay se chi co mot bien X duoc khoi tao. Cac Obj se cung chi se 1 bien static
//static se thuoc lop chu khong thuoc the hien cua lop
//dem so doi tuong duoc tao

#include <iostream>  
using namespace std;  
class NhanVien { 
    int msnv;    
    string ten;
    // int tuoi;
    // string tenCongTy;
    public:
        static string tencongty;
        static int tuoi;
        static int dem;             //application2
       NhanVien(int msnv, string ten) {    
            this->msnv = msnv;    
            this->ten = ten;    
            // this->tuoi = tuoi; 
            // this->tenCongTy = tenCongTy;
            dem++;
       }    
       void HienThi() {    
            cout << ten << endl;
            cout << "   Ma so nhan vien: " << msnv << endl;
            cout << "   Tuoi: " << tuoi << endl;
            cout << "   Ten cong ty: " << tencongty << endl;
            cout << "   NV so: " << dem << endl;
       }    
}; 

string NhanVien::tencongty = "BHS-B Hardware Solution";
int NhanVien::tuoi = 25;
int NhanVien::dem = 0;
   
int main() {  
    NhanVien n1 =  NhanVien(111231, "Nguyen Van A");
    n1.HienThi();   
    NhanVien n2 =  NhanVien(213214, "Nguyen Van B");
    n2.HienThi();
    NhanVien n3 =  NhanVien(213215, "Nguyen Van C");
    n3.HienThi();
    return 0;  
}