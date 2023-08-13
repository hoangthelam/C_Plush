#include <iostream>

//Ham nguyen mau

using namespace std;

int sum(int, int);
void print_value(int);
int main(){
	print_value(sum(1, 2));
	
	return 0;
}

int sum(int a, int b){
	
	return a + b;
}

void print_value(int value){
	
	cout<<"Value: "<<value<<endl;
}
