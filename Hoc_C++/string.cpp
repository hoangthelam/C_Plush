#include <iostream>
#include <string>

using namespace std;

//string - chuoi ky tu

int main(){
//	string str;
//	int n;
//	
//	cout<<"Nhap n: ";
//	cin<<n;
//	cin.ignore();//Khac phuc loi khi dung getline
//	
//	cout << "Nhap chuoi: ";
//	//ham 
//	getline(cin, str);//in ra duoc space
//	
//	cout<<"chuoi vua nhap: "<<str;

//----------------------------------------------------//

/*Cac phuong thuc lam viec voi string
	- str.substr(x, y): lay ra mot chuoi con, co do dai y ki tu ,bat dau tu vi tri x
	- str.find(s): chuyen vao mot chuoi, tim kiem va tra ve vi tri chuoi 
	- str.erase(x, n): tay xoa
	- str.replace(x, n, s): thay the n phan tu tai vi tri x bang chuoi s
	- str.compare(s): so sanh va tra ve 3 gia tri 
		neu lon hon s thi = 1, bang = 0, nho hon = -1
	- str.insert(x, s): chen chuoi s vao vi tri x
	-str.length(), str.size(): dem theo byte
		+length(): do dai cua chuoi
		+size(): do dai cua chuoi(
*/
	//1
//	string str = "01234";
//	string str1 = str.substr(2, 3);
//	
//	 cout << str1;
	//2
//	string str = "abcd";
//	cout<<str.find("cd"); 

	//3
//	string str = "abcd";
//	str.erase(2, 2);//gia tri 1: vi tri xoa; gia tri 2: so luong ki tu se duoc xoa di
	
	//4
//	string str = "abcd";
//	str.replace(1, 2, "***");
//	
//	cout<<str;
	
	//5
//	string str1= "abcd";
//	string str2= "b";
//	
//	cout<<str1.compare(str2);//so sanh chuoi tung phan tu mot theo bang ma ASCII
	
	//6
	string str = "abcd";
	
	str.insert(1, "**");
	cout<<str; 
	
	return 0;
}
