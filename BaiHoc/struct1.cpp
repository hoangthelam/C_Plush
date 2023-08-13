#include <iostream>
#include <string>
#define MAX 40

using namespace std;

struct SinhVien{
	string MaSV;
	string HoTen;
	int ChieuCao;
	double DiemTB;
};
  
void NhapDanhSachSinhVien(SinhVien mangSV[], int n) {
    cin.ignore(); // Ignore bo qua moi ky tu xuong dong 
    for (int i = 0; i < n; i++) {
        cout << "Thong tin sinh vien thu " << i + 1 << ": " << endl;
        cout << "Ma Sinh Vien: ";
        getline(cin, mangSV[i].MaSV);
        cout << "Ho Ten: ";
        getline(cin, mangSV[i].HoTen);
        cout << "Chieu Cao: ";
        cin >> mangSV[i].ChieuCao;
        cout << "DiemTB: ";
        cin >> mangSV[i].DiemTB;
        cin.ignore();
    }
}

//Sap xep sinh vien theo maSV 
void Swap(SinhVien * a, SinhVien * b){
	SinhVien tam;
	tam = *a;
	*a = *b;
	*b = tam; 
}

void SapXep(SinhVien mangSV[], int n){
	for(int i = 0; i < n; i++){
		for(int j = i + 1; j < n; j++){
			if(mangSV[i].MaSV > mangSV[j].MaSV){
				//Khi khong su dung ham Swap
				SinhVien tam = mangSV[i];
				mangSV[i] = mangSV[j];
				mangSV[j] = tam;
			}
		}
	} 
}

void HienThiDanhSachSinhVien(SinhVien mangSV[], int n) {
    cout << "Danh sach sinh vien trong lop: " << endl;
    for (int i = 0; i < n; i++) {
        cout << "-----Sinh vien thu: " << i + 1 << "-----" << endl;
        cout << "MaSv: " << mangSV[i].MaSV << endl;
        cout << "Ho Ten: " << mangSV[i].HoTen << endl;
        cout << "Chieu Cao: " << mangSV[i].ChieuCao << endl;
        cout << "DiemTB: " << mangSV[i].DiemTB << endl;
        cout << "-------------------------" << endl;
    }
}



int main(){
	SinhVien mangSV[MAX];

    int n;
    cout << "Nhap so luong sinh vien trong lop: ";
    cin >> n;

    NhapDanhSachSinhVien(mangSV, n);
    SapXep(mangSV, n); 
    HienThiDanhSachSinhVien(mangSV, n);
	
	return 0; 
} 
 
