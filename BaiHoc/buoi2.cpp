#include <iostream>
#include <string>
using namespace std;

string * sapXep(string* sv, int n){
	for (int i = 0; i <= n - 2; i++)
		for(int j = i + 1; j <= n-1; j++)
			if(sv[i] > sv[j]){
				string temp = sv[i];
				sv[i] = sv[j];
				sv[j] = temp;
			}
	return sv;		
}
//------------------------------------------------------//
//int check_na(char): khi bi loi thu tu 
int check_na(char ch){
	string na = "UEOAIueuai";
//	for(int i = 0; i < na.size(); i++)  
//		if(na[i] == ch)
//			return 1;
//	return 0; 
	int pos = na.find(ch);
	return (pos == -1?0:1);
} 

int dem_nguyenam(string s){ 
	int dem = 0; 
	for(int i = 0; i < s.size(); i++){
		if (check_na(s[i]))
			dem++; 
	} 
	return dem; 
} 

int main(){
//	string sv[40];
//	int n = 0;
//	
//	cout<<"Nhap so sinh vien: ";
//	cin>>n;
//	
//	for(int i = 0; i < n; i++){
//		cout<<"Ho ten sinh vien thu "<< i + 1<<": ";
//		fflush(stdin);
//		getline(cin, sv[i]);
//	}
//	sapXep(sv, n);
//	
//	cout<<"Danh sach sinh vien: "<<endl;
//	for(int i = 0; i < n; i++)
//		cout<<sv[i]<<endl;

//--------------------------------------------------------//
		
	return 0;
}
