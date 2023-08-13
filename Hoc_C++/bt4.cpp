#include <iostream>

using namespace std;

int main(){
	
	//1
//	
//	int n, arr[10];
//	
//	cout<<"n = ";
//	cin>>n;
//
//	cout<<"Nhap mang: ";
//	for(int i = 0; i < n; i++){
//		cin>>arr[i];
//	}
//	for(int i = n - 1; i > 0; i--){
//		for(int j = 0; j < i; j++){
//			if(arr[j] < arr[j + 1]){
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}	
//		}
//	}
//	cout<<"Mang sau khi sap xep la: ";
//	for(int i = 0; i < n; i++){
//		cout<<arr[i]<<" ";
//	}

	//2. 
//	int n, k, arr[10];
//	
//	cout<<"n = ";
//	cin>>n;
//	
//	cout<<"Nhap mang: ";
//	for(int i = 0; i < n; i++){
//		cin>>arr[i]; 
//	} 
//	
//	//tìm k
//	cout<<"k = ";
//	cin>>k;
//	
//	int x = -1, y = -1 ;//the hien chua luu tru vi tri nao
//	for(int i = 0; i< n; i++){
//		for(int j = 0; j < n; j++){
//			if(i != j && (arr[i] + arr[j]==k)){
//				x = i;
//				y = j;
//				break;
//			} 
//		} 
//		if(x != -1 && y != -1){
//				break;
//		}
//	} 
//	if(x != -1 && y != -1){
//		cout<<"Ket qua la: "<<x<<" "<<y;
//	}else{
//		cout<<"Khong co";
//	}
	 
	 //3
//	 int n , m, matrix1[10][10], matrix2[10][10];
//	 
//	 cout<<"n = ";
//	 cin>>n;
//	 cout<<"m = ";
//	 cin>>m;
//	 
//	 cout<< "Nhap ma tran 1: "<< endl;
//	 for(int i = 0; i < n; i++){
//	 	for(int j = 0; j < m; j++){
//	 		cin>>matrix1[i][j];
//		 }
//	 }
//	 
//	 cout<< "Nhap ma tran 2: "<< endl;
//	 for(int i = 0; i < n; i++){
//	 	for(int j = 0; j < m; j++){
//	 		cin>>matrix2[i][j];
//		 }
//	 }
//	 cout<<"Tong 2 ma tran la: "<<endl;
//	 for(int i = 0; i < n; i++){
//	 	for(int j = 0; j < m; j++){
//	 		cout << matrix1[i][j] + matrix2[i][j]<<" ";
//		 }
//		 cout<<endl;
//	 }
	
	//4
	int n, m, arr[10][10];
	
	cout<<"n = ";
	cin>>n;
	cout<<"m = ";
	cin>>m;
	
	cout<<"nhap ma tran: "<<endl;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin>>arr[i][j];
		}
	}
	
	int sum = 0;
	for(int i = 0; i < n;i++){
		for(int j = 0; j < m; j++){
			if(arr[i][j] % 2 == 1){
				sum += arr[i][j];
			}
		}
	}
	cout<<"Tong cac phan tu le la: "<<sum;
	return 0;
}
