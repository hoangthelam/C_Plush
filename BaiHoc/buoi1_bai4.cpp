#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

//In hoa choi s
char* to_lower(char * s){
	int i = 0; 
	for(;s[i]; i++)
		if(s[i] >= 'A' && s[i] < 'Z')
			s[i] += 32;
	return s; 
} 

char* to_upper(char*s){
	int i = 0;
	for(;s[i];i++)
		if(s[i] >= 'a' && s[i] < 'z')
			s[i] -=32;
	return s;
}

//Viet hoa chi cai dau tien
char * to_cap(char * s){
	//nguyen dung ==> Nguyen Dung
	for(int i = 0; s[i]; i++){
		if(s[i] >= 'A' && s[i] <= 'Z')
			s[i] +=32;
		if(i == 0 || s[i-1] == ' ')
			if(s[i] >= 'a' && s[i] <= 'z')
			s[i] -=32;
	}
	return s;
}

int main(){
	char s[100];
	char kt;
		cout<<"Nhap chuoi: ";
		gets(s);
	char* s2 = to_upper(s);
	cout<<"\nKet qua: "<<s2;
	
	char * s3 = to_lower(s);
	cout<<"\nKet qua: "<<s3;
	
	char* s4 = to_cap(s);
	cout<<"\nKet qua: "<<s4;	
	
	return 0;
}
