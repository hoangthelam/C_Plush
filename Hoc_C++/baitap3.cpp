#include <iostream>
#include <math.h>

using namespace std;

int main(){
	//1
//	float a, b;
//	
//	cout<<"a = ";
//	cin >>a;
//	
//	cout<<"b = ";
//	cin >>b;
//	
//	if(a == 0 && b ==0){
//		cout<<"Phuong trinh co vo so nghiem";
//	}else if(a == 0 && b !=0){
//		cout<<"Phuong trinh vo nghiem";
//	}else if(a !=0){
//		cout<<"Phuong trinh co mot nghiem duy nhat: "<<-b/a;
//	}

	//2
//	int n;
//	cout<<"n = ";
//	cin>>n;
//	
//	int sum = 0;
//	
//	for(int i = 1; i <= n; i++){
//		if(i%2 == 1){
//			sum += i;
//		}
//	}
//	cout<<"Ket qua la : "<<sum;

	//3
//	float deg_f;
//	cout<< "F = ";
//	cin>>deg_f;
//	
//	float deg_c = (deg_f -32)/1.8;
//	
//	cout <<"C = "<<deg_c;

	//4
//	int n;
//	cout<<"n =";
//	cin>>n;
	
	//n=9
	// 1 2 3 4 5 6 7 8 9 
	
//	bool is_nt = true;
//	
//	for(int i = 2; i <= sqrt(n); i++){
//		if(n % i == 0){
//			is_nt = false;
//			break;
//		}
//	}
//	if(is_nt){
//		cout<< "n la so nguyen to";
//	}else{
//		cout<<"n khong phai la so nguyen to";
//	}

	//5
	
	//2023 % 10 = 3
	//2023 / 10 = 202
	
	int n;
	
	cout<<"n =";
	cin>>n;
	
	int sum = 0;
	while(n > 0){
		sum += (n % 10);
		
		n /= 10;
	}
	
	cout << "ket qua la: "<< sum ;
	

	return 0;
}

