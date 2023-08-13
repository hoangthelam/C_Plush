#include<iostream>
#include<string> 
using namespace std;

//struc

struct Date{
	int date;
	int month;
	int year;
	Date(){};
	Date(int _date, int _month, int _year){
		date = _date;
		month = _month;
		year = _year; 
	}
};

struct Student{
	//propepties 
	string name;
	int age;	
	Date dob;
	
//	Student(){};
	//constructor
	Student(string _name, int _age, Date _dob){
//		cout<<"Ham khoi tao chay."<<endl;
		name = _name;
		age = _age;
		dob = _dob;
	}
	
	
	//methods
	void run(){
		cout<<name<<" is running..."<<endl; 
	} 
	void print(){
		cout<<"Ten: "<<name<<" , Tuoi: "<<age;
		cout<<" , Ngay Sinh: "<<dob.date<<"/"<<dob.month<<"/"<<dob.year<<endl;
	}
}; 
 
int main(){
//	Student student_1("lam", 18, Date(2, 8, 2001));
////	Student("Long", 18);
//	
//	cout<<"Nhap Ten: ";
//	getline(cin, student_1.name);
//	cout<<"Nhap tuoi: ";
//	cin>>student_1.age; 
	
//	cout<<"Ten: "<<student_1.name<<endl;
//	cout<<"Tuoi: "<<student_1.age<<endl; 
//	cout<<"Ngay Sinh: "<<student_1.dob.date<<"/"<<student_1.dob.month<<"/"<<student_1.dob.year<<endl;
//	
//	student_1.run();

//--------------------------------------------------//
	Student students[2] = {
		Student("Lam", 18, Date(2, 8, 2001)),
		Student("A", 18, Date(1, 1, 2001))
	};
	
	for(int i = 0; i < 2; i++){
		students[i].print();
	}
	return 0; 
} 
