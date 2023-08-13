#include<iostream>
#include<stdio.h>

//dung app codeblock
using namespace std;

int main(){
	//b1: khai bao
//	File *fptr;
//	fptr = fopen("file_name", "mode");//mode: r(doc), w(ghi), a.
	//b2:doc or ghi
	//in(ghi)
	//int fprintf(FILE *stream, const char *format,...)
	//quet(doc) 
	//int fscanf(FILE *stream, const char *format,...)
	//b3: dong file
//	fclose(fptr);

	int n;
	cout<<"Nhap num: ";
	cin>>n;
	
	FILE *fptr;
	//mo file de ghi
	fptr = fopen("data.txt", "w");

	//ghi file
//	printf("Enter num: ");
//	scanf("%d", &num);	
	for(int i = 1; i <= n; i++){
		if(i < n){
			fprintf(fptr,"%d ", i);
		}else{
			fprintf(fptr, "%d", i);
		}
	}	
	//dong file
	fclose(fptr);
	
	//mo file de doc
	fptr = fopen("data.txt", "r");
	while(feof(fptr) == 0){
		int num = 0;
		fscanf(fptr, "%d", &num);
		cout<<num<<" ";
	}
	//dont file
	fclose(fptr);
	
	return 0;
}
