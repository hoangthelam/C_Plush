#include <iostream>
#include <math.h>

using namespace std;

int main(){
	//cau 1:
//	int a, b;
//	cin>>a>>b;
//	
//	cout<<"a = "<<a<<endl;
//	cout<<"b = "<<b<<endl;
//	cout<<"a + b = "<<a+b<<endl;
//	cout<<"a - b = "<<a-b<<endl;

	//cau2
//	char c;
//	
//	cout<<"Chu cai viet thuong: ";
//	cin>>c;
//	
//	cout<<"Chu cai viet hoa: "<<(char)(c-32);
//	cin>>c;

	//cau 3
//	int a, b;
//	
//	cout<<"a = ";
//	cin>>a;
//	cout<<"b = ";
//	cin>>b;
	
	//hoan vi
	
//	int c = a;
//	
//	a = b;
//	b = c;
//	
//	cout<< "Gia tri cua a la "<<a << endl;
//	cout<< "Gia tri cua b la "<<b << endl;
	
	//cau 4
	
	int a, b;
	cout<<"a = ";
	cin>>a;
	cout<<"b = ";
	cin>>b;
	
	int tong = a + b;
	int hieu = abs(a - b);//abs: gia tri tuyet doi
	
	
	cout<<"Gia tri nho nhat la "<<(tong - hieu)/2<<endl;
	cout<<"Gia tri lon nhat la "<<(tong + hieu)/2;
	
	return 0;
}
