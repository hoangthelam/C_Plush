#include<iostream>

//Cap phat dong
	//stack
	//heap
using namespace std;

int main(){
	float *a = new float(5.6);//x
	delete a;
	a = new float(3.4);//y
	delete a;
	a = new float(1.2);//z
	
	cout<<*a;
	delete a;//giai phong vung nho con tro a dang quang ly (gay ro ri bo nho )
	return 0;
}
