#include<iostream>
#include<fstream>
#include<string>

using namespace std;
//file text
//Read/Write File

struct Person{
	string name;
	int age;
	
	Person(){
		
	}
	Person(string _name, int _age){
		name = _name;
		age = _age;
	}
};
int main(){
	Person *persons = new Person[2];
//khong su dung khi doc file	
//	persons[0] = Person("A", 24);
//	persons[1] = Person("B", 23);
	
	fstream fs;
	fs.open("text.txt");
	//truong hop: file text.txt khong cung cap vs file.cpp => thi copy link file va them \\ va noi ten file vao 
	//vd: C:\User\hoang => C:\\User\\hoang
	
	if(!fs.is_open())
		return 1;

	//Luu du lieu vao file
//	for(int i = 0; i < 2; i++){
//		fs<<persons[i].name<<endl;
//		fs<<persons[i].age<<endl;
//	}
	//Doc du lieu 
	for(int i = 0; i < 2; i++){
		getline(fs, persons[i].name);
		fs>>persons[i].age;
		fs.ignore();
	}
	for(int i = 0; i < 2; i++){
		cout<<"Name: "<<persons[i].name<<", age: "<<persons[i].age<<endl;
	}
		
	//ghi file
//	fs<<"Hello world";	
	//doc file
//	string str;
//	getline(fs, str);
//	cout<<str;
	
//	fs<<"Hoang The Lam"<<endl;
//	fs<<1;

//	string name;
//	int a;
//	getline(fs, name);
//	fs>>a;
//	cout<<"Name: "<<name<<endl;
//	cout<<"a: "<<a;

//	fs<<"Hello";
//	
//	fs.close();
	return 0;
}
