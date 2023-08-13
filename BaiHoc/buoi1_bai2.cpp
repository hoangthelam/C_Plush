#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

//kiem tra doi xung
int la_doixung(char*s){
	int size = strlen(s);
	for(int i = 0; i < size; i++){
		int j = size - i - 1;
		if(s[i] != s[j])
		return 0; 
	}
	return 1;
}
int main(){
	char *s = "AbCbA";
	if(la_doixung(s))
		cout<<s<<"\ndoi xung";
	else
		cout<<s<<"\nkhong doi xung";
	return 0;
}
