#include <iostream>

using namespace std;

int main(){
	
//	const int SO_HANG = 2;
//	const int SO_COT = 3;
//	
//	int arr[SO_HANG][SO_COT];
//	//Nhap Mang
//	
//	for(int i = 0; i < SO_HANG; i++){
//		for(int j = 0; j < SO_COT; j++){
//			cout<<"arr["<<i<<"]["<<j<<"] = ";
//			cin>>arr[i][j];
//		}
//	}
//	
//	//Xuat Mang
//	for(int i = 0; i < SO_HANG; i++){
//		for(int j = 0; j < SO_COT; j++){
//			cout<< arr[i][j]<<" ";
//		}
//		cout<<endl;
//	}

	//example
	
	//1
	
//	int n, m, arr[10][10];
//	
//	cout<<"n = ";
//	cin>>n;
//	cout<<"m = ";
//	cin>>m;
//	
//	cout<<"Nhap Mang: "<<endl;
//	for(int i = 0; i < n; i++){
//		for(int j = 0; j < m; j++){
//			cin>>arr[i][j];
//		}
//	}
//	
//	int sum = 0;
//	for(int i = 0; i < n; i++){
//		for(int j = 0; j < m; j++){
//			sum += arr[i][j];
//		}
//	}
//	cout<<"Tong cac phan tu trong mang lag: "<<sum;

	//2
	
//	int n, arr[10];
//	
//	cout<<"n = ";
//	cin>>n;
//	
//	cout<<"Nhap Mang: ";
//	for(int i = 0; i < n ; i++){
//		cin>> arr[i];
//	}
//	
//	int max = arr[0];
//	for(int i = 1; i < n; i++){
//		if(arr[i] > max){
//			max = arr[i];
//		}
//	}
//	
//	cout<<"Gia tri lon nhat la :"<< max;

	//3
//	
//	int n, m, arr[10][10];
//	
//	cout<<"Nhap n: ";
//	cin>>n;
//	cout<<"Nhap m: ";
//	cin>>m;
//	
//	cout<<"Nhap Mang: "<<endl;
//	for(int i = 0; i < n; i++){
//		for(int j = 0; j < m; j++){
//			cin>>arr[i][j];
//		}
//	}
//	
//	cout<<"Cac phan tu lon  nhat la: ";
//	for(int i = 0; i < n; i++){
//		int max = arr[i][0];
//		for(int j = 0; j < m; j++){
//			if(arr[i][j] > max){
//				max = arr[i][j];
//			}
//		}
//		cout<<max<<" ";
//	}
	
	int n, m, arr[10][10];
	
	cout<<"Nhap n = ";
	cin>>n;
	cout<<"Nhap m = ";
	cin>>m;
	
	cout<<"Nhap Mang: "<<endl;
	for(int i = 0; i < n; i++ ){
		for(int j = 0; j < m; j++){
			cin >> arr[i][j];
		}
	}
	
	
	int sum = 0;
	for(int i = 0; i < n; i++ ){
		for(int j = 0; j < m; j++){
			if(i == 0 || j == 0 || i == n-1 || j == m - 1){
				sum += arr[i][j];
			}
		}
	}
	cout<<"Tong cac gia tri bien la: "<<sum;
	return 0;
}
