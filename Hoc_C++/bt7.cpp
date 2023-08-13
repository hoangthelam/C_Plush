#include<iostream>
#include<string>

using namespace std;
//1.
void input_integer(string label, int &n);
void input_array(int *arr, int size);
void print_array(int *arr, int size);
void push(int* &arr, int &size, int new_element);
//2.khong su dung ham push
//void remove(int* &arr, int &size, int deleted_index);
//3.
//void update(int* &arr, int &size, int updated_index, int new_element);
//4.
void sort(int *arr, int size);
int main(){
//1.
//	int n, x;
//	input_integer("n = ", n);
//	
//	int *numbers = new int[n];
//	cout<<"Nhap mang: ";
//	input_array(numbers, n);
//	
//	input_integer("x = ", x);
//	push(numbers, n, x);
	
//	cout<<"Mang sau khi them: ";
//	print_array(numbers, n);
//2.
//	remove(numbers, n, x);
//	cout<<"Mang sau khi xoa: ";
//	print_array(numbers, n);	
//3.
//	int n, x, y;
//	input_integer("n = ", n);
//	
//	int *numbers = new int[n];
//	cout<<"Nhap mang: ";
//	input_array(numbers, n);
//	input_integer("y = ", y);
//	input_integer("x = ", x);
//	
//	update(numbers, n, x, y);
//	cout<<"Mang sau khi them: ";
//	print_array(numbers, n);
//4.
	int n, x, y;
	input_integer("n = ", n);
	
	int *numbers = new int[n];
	cout<<"Nhap mang: ";
	input_array(numbers, n);
	
	sort(numbers, n);
	cout<<"Mang sau khi sap xep: ";
	print_array(numbers, n);
	return 0;
}

//1. Tao mang dong co n phan tu nguyen(toi da 10 phan tu). 
//nhap vao so nguyen x va them x vao cuoi mang da tao.

void input_integer(string label, int &n){
	cout<<label;
	cin>>n;
}
void input_array(int *arr, int size){
	for(int i = 0; i < size; i++){
		cin>>arr[i];
	}
}

void print_array(int *arr, int size){
	for(int i = 0; i < size; i++)
		cout<< arr[i]<<" ";
}
void push(int* &arr, int &size, int new_element){
	//tao ra mot mang moi
	int new_size = size + 1;
	int *tmp_arr = new int[new_size];
	//copy toan bo phan tu cu sang mang moi
	for(int i = 0; i< size; i++)
		tmp_arr[i] = arr[i];
	//them phan tu moi vao cuoi mang moi
	tmp_arr[new_size - 1] = new_element;
	//gan mang moi sang con tro cu va tang size len mot don vi
	delete[] arr;
	arr = tmp_arr;
	size = new_size; 
}

//2. Tao mang dong co n phan tu nguyen(toi da 10 phan tu). Nhap vao 1 so nguyen duong x
//(0 <= x <= 9) va xoa phan tu o vi tri x.

void remove(int* &arr, int &size, int deleted_index){
	//Xoa phan tu can xoa tren mang cu
	for(int i = deleted_index; i < size - 1; i++)
		arr[i] = arr[i + 1];
	//Tao ra mot mang moi 
	int new_size = size - 1;
	int *tmp_arr = new int[new_size];
	//copy cac phan tu ben mang cu sang mang moi
	for(int i = 0; i < new_size; i++)
		tmp_arr[i] = arr[i];
	//gan mang moi cho mang cu va giam size di mot don vi
	delete[] arr;
	arr = tmp_arr;
	size = new_size;
}	

//3. Tao mang dong co n phan tu nguyen (toi da 10 phan tu).
//Nhap vao 1 so nguyen duong x(0 <= x <= 9) va so nguyen y.
//Them y vao vi tri x cua mang.
void update(int* &arr, int &size, int updated_index, int new_element){
	//Tao mot mang moi
	int new_size = size + 1;
	int *tmp_arr = new int[new_size];
	//copy toan bo phan tu cu sang mang moi
	for(int i = 0; i < size; i++)
		tmp_arr[i] = arr[i];
	//them phan tu moi vao mang moi
	for(int i = new_size - 1; i > updated_index; i--)
		tmp_arr[i] = tmp_arr[i - 1];
	tmp_arr[updated_index] = new_element;
	//gan mang moi cho con tro cu va tang size len mot don vi
	delete[] arr;
	arr = tmp_arr;
	size = new_size;
}
//4.Tao mang dong co n phan tu nguyen (toi da 10 phan tu). 
//Sap xep lai mang do theo thu tu tang dan va in ra man hinh
void sort(int *arr, int size){
	for(int i = size - 1; i > 0; i--){
		for(int j = 0; j < i; j++){
			if(arr[j] > arr[j + 1]){
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
			
	}
}

