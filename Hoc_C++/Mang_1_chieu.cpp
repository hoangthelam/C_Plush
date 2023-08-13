#include <iostream>

using namespace std;

int main (){
	// <kieu_du_lieu> <ten_mang>[<>so_luong_phan_tu]
//	int numbers[5]= {1, 2, 3, 4, 5};
//	
//	cout<< numbers[2];

//    int numbers[5];
//    
//    for(int i = 0; i <= 4; i ++){
//    	cout<<"numbers["<<i<<"] = ";
//    	cin>> numbers[i];
//	}
//	
//	for(int i = 0; i <= 4; i++){
//		cout<<"numbers["<<i<<"]= "<<numbers[i]<<endl;	
//	}

	//example
	
	//1
	
//	int numbers[20];
//	int n, x;
//	
//	cout<<" n =";
//	cin >> n;
//	
//	cout<<"nhap mang: ";
//	for(int i = 0; i < n; i++){
//		cin>> numbers[i];
//	}
//	
//	cout<<"x = ";
//	cin>>x;
//	
//	numbers[n] = x;
//	n ++;
//	
//	cout<<"Mang sau khi them: ";
//	for(int i = 0; i < n; i++){
//		cout<<numbers[i]<<" ";
//	}

	//2
	
//	int numbers[20];
//	int n, x;
//	
//	cout<< "n = ";
//	cin>> n;
//	
//	cout<< "Nhap manng : ";
//	for(int i = 0; i < n; i++){
//		cin >> numbers[i];
//	}
//	
//	
//	cout<<"x = ";
//	cin>> x;
	//dung de xoa
//	for(int i = 0; i < n - 1; i++){
//		numbers[i] = numbers[i+1];
//	}
//	n--;
//	
//	cout<<"Mang sau khi xoa: ";
//	for(int i = 0; i < n; i++ ){
//		cout<<numbers[i]<< " ";
//	}

	//3
	
	int numbers[20];
	int n, x, y;
	
	cout <<"n = ";
	cin>>n;
	
	cout<<"Nhap mang: ";
	for(int i = 0; i < n; i++){
		cin>> numbers[i];
	}
	//vi tri
	cout <<"x = ";
	cin>>x;
	//them phia truoc 
	cout <<"y = ";
	cin>>y;
	
	cout<<"Nhap mang: ";
	for(int i = n; i > x; i--){
		numbers[i]= numbers[i-1];
	}
	numbers[x]= y;
	n++;
	
	cout<<"Mang sau khi them: ";
	for(int i = 0; i < n; i++ ){
		cout<< numbers[i]<<" ";
	}
		
	
	return 0;
}
