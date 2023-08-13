#include <iostream>
#include <stdio.h>

using namespace std;

//tinh do dai cua chuoi
int len(char * s){
	int i = 0;
//	int dem = 0;
//	while(s[i] != '\0'){
//		dem++;
//		i++;
//	}

	for(; s[i];i++);
	return i;
}

int main(){
//	char * s = "Hello";
	char s[100];
	cout<<"Nhap vao 1 chuoi: \n";
	cin>>s;
	int l = len(s);
	cout<<"Do dai: "<<l;
	
	return 0;
}
