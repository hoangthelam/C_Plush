#include <iostream>
#include<string>
#define MAX 40 //c1: dinh nghia han so

using namespace std;

struct SinhVien{
	string MaSV;
	string HoTen;
	int ChieuCao;
	double DiemTB;
};

void Swap(SinhVien * a, SinhVien * b){
	SinhVien tam;
	tam = *a;
	*a = *b;
	*b = tam; 
}

int main(){	
//	SinhVien sv1 = {
//		"101", "Nguyen Dung", 177, 8
//	};
//	
//	cout<<"MaSV: "<<sv1.MaSV<<endl;
//	cout<<"HoTen: "<<sv1.HoTen<<endl;
//	cout<<"ChieuCao: "<<sv1.ChieuCao<<endl;
//	cout<<"DiemTB: " <<sv1.DiemTB<<endl;
//	
//	SinhVien sv2;
//	cout<<"Nhap thong tin sinh vien: "<< endl;
//	cout<<"MaSV: ";
//	getline(cin, sv2.MaSV);
//	cout<<"Ho Ten: ";
//	getline(cin, sv2.HoTen);
//	cout<<"Chieu cao: ";
//	cin>> sv2.ChieuCao;
//	cout<<"DiemTB: ";
//	cin>> sv2.DiemTB;
//	
//	cout<<"Thong tin sinh vien vua nhap: "<<endl;
//	cout<<"MaSV: "<<sv2.MaSV<<endl;
//	cout<<"HoTen: "<<sv2.HoTen<<endl;
//	cout<<"Chieu Cao: "<<sv2.ChieuCao<<endl;
//	cout<<"DiemTB: "<<sv2.DiemTB<<endl;
	
	//const int MAXX = 40;//C2: dinh nghia ra hang so
	SinhVien mangSV[MAX];
	
	int n;
	cout<<"Nhap so luong sinh vien trong lop: "; 
	cin >> n;
	//nhap danh sach sinh vien
	for(int i = 0; i < n; i++){
		fflush(stdin);//xoa bo nho dem ban phim(khi bi tran bo nho)
		cout<<"Thong tin sinh vien thu "<< i + 1 << ": "<<endl;
		cout<<"Ma Sinh Vien: ";
		getline(cin, mangSV[i].MaSV);
		cout<<"Ho Ten: ";
		getline(cin, mangSV[i].HoTen);
		cout<<"Chieu Cao: ";
		cin>> mangSV[i].ChieuCao;
		cout<<"DiemTB: ";
		cin>>mangSV[i].DiemTB;
	}
	
	//sap xep
	for(int i = 0; i < n; i++){
		for(int j = i + 1; j < n; j++){
			if(mangSV[i].MaSV > mangSV[j].MaSV){
				Swap(&mangSV[i], &mangSV[j]);
				//Khi khong su dung ham Swap
//				SinhVien tam = mangSV[i];
//				mangSV[i] = mangSV[j];
//				mangSV[j] = tam;
			}
		}
	}
	
	
	//In danh sach sinh vien
	cout<<"Danh sach sinh vien trong lop: "<<endl;
	for(int i = 0; i < n; i++){
		cout<<"-----Sinh vien thu: "<< i + 1<< "-----"<< endl;
		cout<<"MaSv: "<< mangSV[i].MaSV<<endl;
		cout<<"Ho Ten: "<< mangSV[i].HoTen<<endl;
		cout<<"Chieu Cao: "<< mangSV[i].ChieuCao<<endl;
		cout<<"DiemTB: "<< mangSV[i].DiemTB<<endl;
		cout<<"-------------------------"<<endl;
	}
	
	//BTVN: Viet lai bang cach xay dung ham
	//Nhap danh sach sv, In, Sap xep 
	
	return 0;
}
