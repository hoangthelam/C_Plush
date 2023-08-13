#include <iostream>
#include <string>
#include <cctype>  

using namespace std;

//1

//int check_na(char): khi bi loi thu tu 
int check_na(char ch){
	string na = "UEOAIueuai";
//	for(int i = 0; i < na.size(); i++)  
//		if(na[i] == ch)
//			return 1;
//	return 0; 
	//cach 2:
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

string dao_chuoi(string s){
	string t = "";
	for(int i = 0; i < s.size(); i++)
		t = s[i] + t;
	return t; 
}

string toCap(string s){
	for(int i = 0; i < s.size();i++){
		if(i == 0 || s[i-1] == ' '){
			if(s[i] >= 'a' && s[i] <= 'z')
				s[i] -= 32;
		}
	}
	return s;
}

string Inhoa_Inthuong(string chuoi)
{
	string daochuoi = chuoi;
	for (int i = 0; i < chuoi.length(); i++)
	{
		if(islower(chuoi[i]))
			daochuoi[i] = toupper(chuoi[i]); //chu thuong => chu hoa 
		else if (isupper(chuoi[i]))
			daochuoi[i] = tolower(chuoi[i]); // chu hoa => chu thuong 
	} 
	return daochuoi; 
} 

int main(){
	//1. Dem so luong nguyen am cua mot chuoi
//	string s = "Hello every body";
//	int dem = dem_nguyenam(s);
//	cout<<"So nguyen am là: "<<dem; 
	//2. Dao nguoc mot chuoi 
//	string s = "abc";
//	string t = dao_chuoi(s);
//	cout<<s<<" ==> " << t;
	//3. in hoa ky tu dau tien cua moi tu
//	string s = "dung nguyen";
//	string s1 = toCap(s);
//	cout<< s<< "==>"<<s1; 
	//4. ma hoa chuoi don gian. Moi ky tu duoc thay the boi mot ky tu lien sau trong bang ma ASCII
	
	//5. Dem cac tu trong 1 chuoi. Gia su cac tu cach nhau mot khoang trang
	
	//6. dao in hoa thanh in thuong va nguoc lai trong 1 chuoi
	string chuoiBanDau;
    cout << "Nhap vao chuoi: ";
    getline(cin, chuoiBanDau);

    string chuoiDao = Inhoa_Inthuong(chuoiBanDau);
    cout << "Chuoi da dao: " << chuoiDao << endl;
    
	return 0;
}
