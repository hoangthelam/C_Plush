#include <iostream>
#include <string>

using namespace std;

int main(){
	
	//1
//	string str;
//	
//	cout<<"Nhap chuoi: ";
//	getline(cin, str);
//	
//	//xoa khoang trang o dau chuoi
//	while(str[0]== ' ')
//	{
//		str.erase(0, 1);
//	}
//	
//	//xoa khoang trang o cuoi chuoi
//	while(str[str.length() - 1] == ' '){
//		str.erase(str.length() - 1, 1);
//	}
//	
//	cout<<"Ket qua: "<<str;

	//2. xoa khoang trang cua mot chuoi khong khoang cach 
	
//	string str;
//	
//	cout<<"Nhap chuoi: "; 
//	getline(cin, str);
//	
//	int i = 0;
//	while(i < str.length())
//	{
//		if(str[i] == ' ' && str[i + 1] == ' ')
//		{
//			str.erase(i, 1); //xoa 1 ky tu bat dau tu i 
//		} 
//		else
//		{
//			i++; 
//		} 
//	} 
//	
//	cout<<"Ket qua: "<<str; 
	
	//3
	
	 //Viet chuong trinh nhap vao 1 chuoi gom cac ky tu tu a->z, A -> Z va co the chua khoang trang. 
	 //Hay viet hoa cac chu cai dau moi tu, cac chu cai con lai de o dang viet thuong.
	 
//	string str;
//	 
//	cout<<"Nhap chuoi: ";
//	getline(cin, str);
//	 
//	 //chuyen cac ky tu thanh chu thuong
//
//	for(int i = 0; i < str.length(); i++){
//	 	str[i] = tolower(str[i]); 
//	}  
//	//chuen ky tu dau tien thanh chu hoa
//	if(str[0] != ' '){
//	 	str[0] = toupper(str[0]); 
//	 } 
//	
//	for(int i = 0; i < str.length(); i++){
//		if(str[i] ==' ' && str[i + 1] != ' '){
//			str[i + 1] = toupper(str[i + 1]); 
//		} 
//	} 
//	
//	cout<<"Ket qua: "<<str; 

	//4. Viet chuong trinh nhap vao 1 chuoi gom cac ki tu a -> z, A -> Z va co the chua khoang trang.
		//Hay chuon hoa chuoi do
		//goi y:
			//+ Loai bo khoang trang dau duoi
			//+ Loai bo khoang trang thua o giua cac tu.
			//+ Viet hoa chu cai dau, cac chu con lai viet thuong
	
	string str;
	
	cout<<"Nhap chuoi: ";
	getline(cin, str);	
	
	//Loai bo khoang trang o dau 
	while(str[0] == ' '){
		str.erase(0, 1);//xoa tai vi tri 0 , 1 ky tu
	} 
	
	//Loai bo khoang trang o cuoi
	while(str[str.length() - 1] == ' '){
		str.erase(str.length() -1); 
	}
	
	//Loai bo khoang trang giua cac tu
	int i = 0;
	while(i < str.length()){
		if(str[i] == ' ' && str[i + 1] == ' '){
			str.erase(i, 1);
		}
		else{
			i++;
		}
	}
	
	//Viet thuong chuoi	
	for(int i = 0; i < str.length(); i++){
		str[i] = tolower(str[i]);
	}
	//Viet hoa chu cai dau
	str[0] = toupper(str[0]);
	for(int i = 0; i < str.length(); i++){
		if(str[i] == ' ' && str[i + 1] != ' '){
			str[i + 1] = toupper(str[i + 1]);
		}
	}
	
	
	cout<<"Ket qua: "<<str; 
				 
	return 0;
}
