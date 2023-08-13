#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

//Kiem tra ki tu
int dem_kytu(char*s, char kt){
	int dem = 0;
	int i = 0;
	for(;s[i];i++)
		if(s[i] == kt)
			dem++;
	return dem;
}

int main(){
	char s[100];
	char kt;
		cout<<"Nhap chuoi: ";
		gets(s);
		cout<<"Nhap ki tu: ";
		kt = getchar();
		
		int dem = dem_kytu(s, kt);
		printf("Chuoi %s co %d ky tu %c", s, dem, kt);
		
	return 0;
}
