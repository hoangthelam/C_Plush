#include <iostream>
#include <math.h>

using namespace std;

int main(){
	
	//cau 1
//	int n;
//	
//	cout<<"n = ";
//	cin>>n;
//	
//	int s=0;
//	
//	for(int i = 1; i <= n; i++ ){
//		s += i;
//	}
//	cout<<"S = "<< s;

	//cau 2
//	int n;
//	
//	cout<<"n = ";
//	cin>>n;
//	
//	int s=0;
//	
//	for(int i = 1; i <= n; i++ ){
//		s += (i * i);//pow(i, 2)
//	}
//	cout<<"S = "<< s;

	//cau 3: n = 3, n! = 1*2*3
	
//	int n;
//	
//	cout<<"n = ";
//	cin>>n;
//	
//	unsigned long long s = 1;//tao bien luu ket qua
//	
//	for(int i = 1; i <= n; i++ ){
//		s *= i;
//	}
//	cout<<"S = "<< s;
	
	//cau 4
		int n;
	
	cout<<"n = ";
	cin>>n;
	
	for(int i = 5; i <= n; i+=5 ){
		//c1
//		if(i%5==0){
//			cout<<i<<" ";
//		}
		cout<<i<<" ";
	}

	
	return 0;
	
}
