#include <iostream>
#include<string> 

using namespace std;

//Tham tri &
//Tham chieu khong & 

void input_interger(string label, int &x){//& tham tri 
	cout<<label;
	cin>>x; 
}

int main(){
	int n = 5; 
	input_interger("Nhap n: ", n);
	cout<<"Gia tri vua nhap: "<<n; 
	
	
	return 0; 
}
