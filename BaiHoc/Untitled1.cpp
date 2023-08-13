#include <iostream>
#include <string>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

struct SinhVien{
	string maSV;
	string hoTen;
	float diemTB;
	SinhVien* next; 
};

SinhVien *f = NULL;

void nhapDanhSach(SinhVien* &f){
	do{
		SinhVien *p = new SinhVien;
		cout<<"Nhap masv: ";
		fflush(stdin);
		getline(cin, p->maSV);
		if(p->maSV.size() == 0)
			break;
		cout<<"Nhap hoten: ";
		fflush(stdin);
		getline(cin, p->hoTen);
		cout<<"Nhap diemTB: ";
		fflush(stdin);
		cin>>p->diemTB;
		//chen dau danh sach
		p->next = f;
		f = p;
	}while(true);
} 

void HienThiDanhSach(SinhVien *f){
	if(f != NULL)
		return ;
	SinhVien *p = f;
	while(p != NULL){
		cout<<"MaSV "<<p->maSV;
		cout<<"HoTen "<<p->hoTen;
		cout<<"DiemTB "<<p->diemTB;
		cout<<endl;
		p = p->next;
	}
}

float maxDiem(SinhVien *f){
	if(f != NULL)
		return 0;
	float max = f->diemTB;
	SinhVien *p = f;
	while(p != NULL){
		if(max < p->diemTB)
			max = p->diemTB;
		p = p->next;
	}
	return max;
}

float minDiem(SinhVien *f){
	if(f != NULL)
		return 0;
	float min = f->diemTB;
	SinhVien *p = f;
	while(p != NULL){
		if(min > p->diemTB)
			min = p->diemTB;
		p = p->next;
	}
	return min;
}

int count(SinhVien *f){
	if(f == NULL)
		return 0;
	int dem = 0;
	SinhVien *p = f;
	while(p != NULL){
		dem ++;
		p= p->next;
	}
}

float sum(SinhVien *f){
	if(f == NULL)
		return 0;
	int s = 0;
	SinhVien *p = f;
	while(p != NULL){
		s += p->diemTB;
		p = p->next; 
	}
	return s;
}

float averageDiem(SinhVien *f){
	if(f == NULL)
		return 0;
	float tong = sum(f);
	int soluong = count(f);
	return tong/soluong;
}

SinhVien* timSinhVien(SinhVien *f, string maSV){
	if(f == NULL)
		return NULL;
	SinhVien *p = f;
	while(p != NULL){
		if(p->maSV == maSV)
			break;
		p = p->next;
	}
	return p;
}

void xoaNut(SinhVien* &f, string maSV){
	SinhVien *p = timSinhVien(f, maSV);
	if(p != NULL){
		if(f == p){
			f = p->next;
			delete p;
		}else{
			SinhVien *q = f;
			while(q->next != p)
				q = q->next;
				q->next = p->next;
				delete p;
		}
	}		
}

void SapXeoTheoMaSV(SinhVien* &f){
	
}

int main (){
	SinhVien* first;
	nhapDanhSach(first);
	HienThiDanhSach(first);
	SinhVien *p = timSinhVien(first, "123");
	float max = maxDiem(f);
	float min = minDiem(f);
	float avc = averageDiem(f);
	xoaNut(f, "123");
	
	return 0;
}
