#include <iostream>
#include <string> 
#define MAX 40

using namespace std;

struct SinhVien{
	string  MaSinhVien;
	string Ten;
	int NamSinh;
	int DiemToan;
	int DiemLy;
	int DiemHoa;
	float tinh_diem_trung_binh(){
        return (DiemToan + DiemLy + DiemHoa) / 3;
    };
}; 
//Nhap danh sach sinh vien  
void NhapDanhSachSinhVien(SinhVien mangSV[], int n) {
    cin.ignore(); // Ignore bo qua moi ky tu xuong dong 
    for (int i = 0; i < n; i++) {
        cout << "Thong tin sinh vien thu " << i + 1 << ": " << endl;
        cout << "Ma Sinh Vien: ";
        getline(cin, mangSV[i].MaSinhVien);
        cout << "Ten: ";
        getline(cin, mangSV[i].Ten);
        cout << "Diem Toan: ";
        cin >> mangSV[i].DiemToan;
        cout << "Diem Ly: ";
        cin >> mangSV[i].DiemLy;
        cout << "Diem Hoa: ";
        cin >> mangSV[i].DiemHoa;
        cin.ignore();
    }
}

//Sap xep top Diem Trung Binh rheo thu tu tang dan
void top_DiemTB(SinhVien mangSV[], int n, int top){
	for(int i = 0; i < n - 1; i++){
		for(int j = i + 1; j < n; j++){
			if(mangSV[i].tinh_diem_trung_binh() > mangSV[j].tinh_diem_trung_binh()){
				SinhVien tam = mangSV[i];
				mangSV[i] = mangSV[j];
				mangSV[j] = tam;
			}
		}
	}
	cout << "-------------------------" << endl;
	cout<<"\nDanh sach Sinh Vien "<<top<<" theo Diem Trung Binh: "<<endl;
	int max = (n > top? top: n);
	for(int i = 0; i < max; i++){
		cout<<"\nMa Sinh Vien: "<< mangSV[i].MaSinhVien<<", ";
		cout<<"Ten : "<< mangSV[i].Ten<<", ";
		cout<<"Diem Trung Binh: "<<mangSV[i].tinh_diem_trung_binh()<<"."<<endl;
		
	}
}

//Sinh vien co DiemTB cao nhat 
int DiemTrungBinhCaoNhat(SinhVien mangSV[], int n){
	double maxDiemTB = -1.0;
    int index = -1;
	cout<<"Sinh co diem trung binh cao nhat: "<<endl;
    for (int i = 0; i < n; i++) {
        if (mangSV[i].tinh_diem_trung_binh() > maxDiemTB) {
            maxDiemTB = mangSV[i].tinh_diem_trung_binh();
            index = i;
        }
    }
	if (index != -1) {
        cout << "Ma Sinh Vien: " << mangSV[index].MaSinhVien << endl;
        cout << "Ten: " << mangSV[index].Ten << endl;
        cout << "Diem Trung Binh: " << mangSV[index].tinh_diem_trung_binh() << endl;
    } else {
        cout << "Khong co sinh vien nao trong danh sach." << endl;
    }

    return index;
}  

//In danh sach sinh vien 
void HienThiDanhSachSinhVien(SinhVien mangSV[], int n) {
	cout << "-------------------------" << endl;
    cout << "Danh sach sinh vien trong lop: " << endl;
    for (int i = 0; i < n; i++) {
        cout << "-----Sinh vien thu: " << i + 1 << "-----" << endl;
        cout << "MaSv: " << mangSV[i].MaSinhVien << endl;
        cout << "Ten: " << mangSV[i].Ten << endl;
        cout << "Diem Toan: " << mangSV[i].DiemToan << endl;
        cout << "Diem Ly: " << mangSV[i].DiemLy << endl;
        cout << "Diem Hoa: " << mangSV[i].DiemHoa << endl;
        cout << "Diem Trung Binh: " << mangSV[i].tinh_diem_trung_binh()<< endl;
        cout << "-------------------------" << endl;
    }
}

// Them Sinh Vien 
void ThemSinhVien(SinhVien mangSV[], int& n, SinhVien sv_moi) {
    int vi_tri_chen = n;
    for (int i = 0; i < n; i++) {
        if (sv_moi.Ten < mangSV[i].Ten) {
            vi_tri_chen = i;
            break;
        }
    }

    for (int i = n; i > vi_tri_chen; i--) {
        mangSV[i] = mangSV[i - 1];
    }

    mangSV[vi_tri_chen] = sv_moi;
    n++;
}

// Xoa Sinh Vien 
bool XoaSinhVien(SinhVien mangSV[], int& n, string ma_sv_can_xoa) {
    int vi_tri_xoa = -1;
    for (int i = 0; i < n; i++) {
        if (mangSV[i].MaSinhVien == ma_sv_can_xoa) {
            vi_tri_xoa = i;
            break;
        }
    }

    if (vi_tri_xoa != -1) {
        for (int i = vi_tri_xoa; i < n - 1; i++) {
            mangSV[i] = mangSV[i + 1];
        }
        n--;
        return true; //  xóa thành công
    } else {
        return false; // không tim thay sinh viên can xóa
    }
}
 

int main(){
	SinhVien mangSV[MAX];

    int n;
    cout << "Nhap so luong sinh vien trong lop: ";
    cin >> n;

    NhapDanhSachSinhVien(mangSV, n); 
    HienThiDanhSachSinhVien(mangSV, n);
    int index = DiemTrungBinhCaoNhat(mangSV, n);
    top_DiemTB(mangSV, n, n);
    
    SinhVien sv_moi;
    cout << "-------------------------" << endl;
    cout << "Nhap thong tin sinh vien moi: " << endl;
    cout << "Ma Sinh Vien: ";
    getline(cin, sv_moi.MaSinhVien);
    cout << "Ten: ";
    getline(cin, sv_moi.Ten);
    cout << "Diem Toan: ";
    cin >> sv_moi.DiemToan;
    cout << "Diem Ly: ";
    cin >> sv_moi.DiemLy;
    cout << "Diem Hoa: ";
    cin >> sv_moi.DiemHoa;
    cin.ignore();
    ThemSinhVien(mangSV, n, sv_moi);
    
 	string ma_sv_can_xoa;
 	cout << "-------------------------" << endl;
    cout << "Nhap Ma Sinh Vien can xoa: ";
    getline(cin, ma_sv_can_xoa);

    if (XoaSinhVien(mangSV, n, ma_sv_can_xoa)) {
        cout << "Da xoa sinh vien co Ma Sinh Vien: " << ma_sv_can_xoa << endl;
    } else {
        cout << "Khong tim thay sinh vien co Ma Sinh Vien: " << ma_sv_can_xoa << endl;
    }
    
    cout << "Danh sach sinh vien sau khi xoa:" << endl;
    HienThiDanhSachSinhVien(mangSV, n);
	
	return 0; 
} 
