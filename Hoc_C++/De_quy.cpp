#include<iostream>

//De quy

using namespace std;

//void print_values(int value){
//	cout<<"Value: "<<value<<endl;
//	if(value == 1)
//		return;
//	print_values(value - 1);
//}

//tinh tong s= 1+2+3+...+n
int s(int n){
	if(n == 1)
		return 1;
	return n + s(n - 1);
}

long long factor(int n) {//n!
	if(n == 0 || n == 1)
		return 1;
	return n * factor(n - 1); 
}
int main(){
//	print_values(3);
	
	int n = 3;
	cout<<s(n)<<endl;
	cout<<factor(n);
	
	return 0;
}
