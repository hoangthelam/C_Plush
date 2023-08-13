#include<iostream>

using namespace std;

//Con  tro - pointer: la mot bien de luu dia chi
void input_integer(int *n){
	cin>> *n;
}

int main(){
//	int n = 4;
//	
//	int *i_ptr = &n;//khai bao con tro
//	
////	cout<< &n<<endl;
////	cout<<i_ptr;
//	*i_ptr = 6;
//	cout<<*i_ptr<<endl;
//	cout<<n;

//doi voi mang
	int numbers[4] = {1, 2, 3, 4};
	int *i_ptr;
	
//	cout<<numbers;
	
//	for(i_ptr = numbers; i_ptr < numbers + 4; i_ptr++)
//		cout<<*i_ptr<<" ";
	
//	cout<<&numbers[0]<<endl;
//	cout<<&numbers[1]<<endl;
//	cout<<&numbers[0] + 1;

//doi voi ham
	int n = 4;
	input_integer(&n);
	
	cout<<"n = "<<n;
	
	return 0;
}
