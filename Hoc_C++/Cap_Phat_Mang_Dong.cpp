#include<iostream>

//Cap phat mang dong

using namespace std;

int main(){
	int a[3];
	
	int *b = new int[3];
	
	for(int i = 0; i < 3; i++){
		b[i] = 1;
	}
	cout<<"Cac phan tu truoc khi them: "<< endl;
	for(int i = 0; i < 3; i++){
		cout<<b[i]<<" ";
	}
	cout<<endl;
	//Tao mang dong moi co so luong phan tu la 4
	int * new_arr = new int[4];
	
	//sao chep toan bo gia tri cu sang mang moi
	for(int i = 0; i < 3; i++){
		new_arr[i] = b[i];
	}
	new_arr[3] = 2;
	//xoa cac vung nho cu
	delete[] b;
	//gan vung nho moi cho con tro b
	b = new_arr;
	
	cout<<"Cac phan tu sau khi them "<<endl;
	for(int i = 0; i< 4; i++){
		cout<<b[i]<<" ";
	}
	
	return 0;
}
