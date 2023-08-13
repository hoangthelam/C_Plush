#include <iostream>
#include<string>
#define MAX 100

using namespace std;

//Tao cau truc luu tru: ma sach, ten sach, so luong, don gia
//Viet ham:
	//Nhap n cuon sach sao cho ma sach khong trung nhau
    //Hien thi 5 cuon sach co gia cao nhat
    //Xoa mot cuon sach nao do dua vao ma sach
struct Sach{
	string MaSach;
	string TenSach;
	int SoLuong;
	float DonGia;
}; 

//Kiem tra MaSach
int KiemTra_trungma(string MaSach, int index, Sach ds[]){
	if(MaSach.size() == 0)
		return 1;
	for(int i = 0; i < index; i++)
		if(MaSach == ds[i].MaSach)
			return 1;
	return 0;
}

//Nhap n cuon sach
void nhap(Sach ds[], int &n){//int *n(khi dung *)
	cout<<"Nhap n: ";
	cin>>n;//cin>>*n
	for(int i = 0; i < n; i++){
		fflush(stdin);//Xoa bo nho dem ban phim
		do{
	 		cout<<"Ma Sach: ";
			getline(cin, ds[i].MaSach);
		}
		while(KiemTra_trungma(ds[i].MaSach, i, ds)==1);
		
		cout<<"Ten Sach: ";
		getline(cin, ds[i].TenSach);
		cout<<"So Luong: ";
		cin>>ds[i].SoLuong;
		cout<<"Don Gia: ";
		cin>>ds[i].DonGia;
	}
}

//Hien thi 5 cuon sach co gia cao nhat
void top_gia(Sach ds[],int n, int top){//Sach *ds = Sach ds[]
	//Buoc 1: Sap xep giam dan theo gia	
	//Buoc 2: Hien thi top sach dau tien
	for(int i = 0; i < n - 1; i++){
		for(int j = i + 1; j < n; j++){
			if(ds[i].DonGia < ds[j].DonGia){
				Sach tam = ds[i];
				ds[i] = ds[j];
				ds[j] = tam;
			}
		}
	}
	cout<<"\nDanh sach top "<<top<<" theo don gia: "<<endl;
	int max = (n > top? top: n);
	for(int i = 0; i < max; i++){
		cout<<"\nMa Sach: "<< ds[i].MaSach<<", ";
		cout<<"Ten Sach: "<< ds[i].TenSach<<", ";
		cout<<"So Luong: "<< ds[i].SoLuong<<", ";
		cout<<"Don Gia: "<< ds[i].DonGia<<".";
	}
}

//xoa
void xoa(Sach ds[],int &n, string MaSach){
	//b1: tu ma sach  ==> vi tri can xoa trong ds (goi la d)
	//b2: xoa phan tu o vi tri d
	int d = -1;
	for(int i = 0; i < n; i ++){
		if(ds[i].MaSach == MaSach){
			d = i;
			break;
		}	
	}
	if(d != -1){
		for(int i = d; i < n; i++)
			ds[i] = ds[i + 1];
		n = n -1;
	}
}

//TH: Sach* nhap(int &n) khai bao nguyen mau ham
int main(){	
	int n = 0;
	Sach ds[MAX];
	nhap(ds, n);
	cout<<ds[1].MaSach;
	
	top_gia(ds, n, 5);
	
//	getchar(); //dung man hinh show lai 
	return 0;
}
