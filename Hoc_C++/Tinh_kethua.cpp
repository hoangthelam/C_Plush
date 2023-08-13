#include <iostream>
#include<string>
using namespace std;
//Tinh ke thua
class Animal{//class cha
	public: 
		string name;
		float weight;
		
		void run(){
			cout<<"Animails is running..."<<endl;
		}
};
class Cat : public Animal{//class con
	public:
		void eat(){
			cout<<"Cat is eatting..."<<endl;
		}
};
class Dog : public Animal{//class con
	public:
		void eat(){
			cout<<"Dog is eatting..."<<endl;
		}
};

int main(){
	Cat cat;
	
	cat.weight = 30;
	cat.name = "Bo";
	
	cout<<"Name: "<<cat.name<<endl;
	cout<<"Weigth: "<<cat.weight<<endl;
	
	cat.run();
	
	return 0;
}
