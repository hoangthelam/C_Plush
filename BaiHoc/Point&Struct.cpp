#include<iostream>
#include<string> 

using namespace std;
//Struct 

struct Student{
	string name;
	int age;
	
	Student(){};
	
	Student(string _name, int _age){
		name = _name;
		age = _age; 
	} 
};
int main(){
//	Student student("Long", 23);//vung nho stack 
//  Student *student_ptr = &student; 
	//cap phat dong 
	Student *student_ptr = new Student("Lam", 23);//vung nho Heap 
	
	cout<<(*student_ptr).name;//cout<<student_ptr->name; 
	
	delete student_ptr;//giai phong bo nho(khi dung bo nho heap) 
	
	return 0; 
} 
