#include<iostream>
#include<string>

using namespace std;
//Con tro & object
class Cat{
	private:
		string name;
		int age;
	public:
		Cat(){}
		//c1
//		Cat(string _name, int _age){
//			name = _name;
//			age = _age;
//		}
		//c2: dug con tro this-> (tham chieu toi doi tuong minh muon nhac toi)
		Cat(string name, int age){
			this->name = name;
			this->age = age;
		}
		
		//khi muon dung trong private
		string get_name(){
			return this->name;
		}
		int get_age(){
			return this->age;
		}
};

int main(){
//	Cat cat("Bo", 2);	

//Cap phat dong	
//	Cat *cat = new Cat("Bo", 2);
//in ra console	
//	cout<<"Name: "<<cat->get_name()<<endl;//c2:cout<<"Name: "<<(*cat).get_name()<<endl;
//	cout<<"Age: "<<cat->get_age()<<endl;
//------------------------------------------------//

//dung con tro this = cat
	Cat cat("Bo", 2);

	cout<<"Name: "<<cat.get_name()<<endl;//c2:cout<<"Name: "<<(*cat).get_name()<<endl;
	cout<<"Age: "<<cat.get_age()<<endl;
	return 0;
}
