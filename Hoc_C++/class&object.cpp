#include<iostream>
#include<string>

using namespace std;
//Huong doi tuong
//class, object

//1 con nguoi, ten: Nguyen Van A, tuoi: 28, diachi: HaNoi
class Person{
	public://Cong khai
		//Properties
		string name;
		int age;
		string address;
		//Contructor: 1. khong tham so , 2. Co tham so
		Person(){}//1, Contructor khoi tao
		//2.
		Person(string _name, int _age, string _address){
			name = _name;
			age = _age;
			address = _address;
		}
		
		//Method
		void work(){
			cout<<name<<"is working... "<<address<<endl;
		}
	private://Rieng tu (Khong the truy suat o ngoai class)
//		string address = "Ha Noi";
};

int main(){
	Person person1("Nguyen Van A", 28, "Ha Noi");
	
//	person1.name="Nguyen Van A";
//	person1.age= 28;
//	person1.address= "Ha Noi";
	
	cout<<"Name: "<<person1.name<<endl;
	cout<<"Age: "<<person1.age<<endl;
	cout<<"Address: "<<person1.address<<endl;
	
	person1.work();
	
	return 0;
}
