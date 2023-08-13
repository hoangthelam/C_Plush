#include <iostream>
#include <string>
#include <math.h>

using namespace std;

//Ham - function

void Print_message(string message){
	cout<<"Message: "<<message<<endl;
}

int sum1(int a, int b){
	return a + b;
}

//Doi voi ham tra ve
int sum(int a, int b){
//	int c = a + b;
	int c = sum1(a, b);//goi ham trong ham
	
	cout<<"Logic trong ham sum."<<endl;
	return c;
	cout<<"Logic trong ham sum(DUOI return)";//se khong hien thi
}
//neu dinh nghia duoi sum se bi loi
//int sum1(int a, int b){
//	return a + b;
//}

//---------------------------------------------//

void kiem_tra_so_nt(int n){
	for(int i = 2; i <= sqrt(n); i++){
		if(n%i == 0)
			cout<<n<<" khong phai so nguyen to."<<endl;
			return;
	}
	cout<<n<<" la so nguyen to"<<endl;
	return;
}

int main(){
	string c = "Hello";
	
//	Print_message("Hello");
	Print_message(c);
	
	cout<<sum(1, 2)<<endl;
	
//--------------------------------------//
	int x = 3;
	int y = 4;
	kiem_tra_so_nt(x);
	kiem_tra_so_nt(y);
	
	return 0;
} 
