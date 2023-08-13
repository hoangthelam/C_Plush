#include <iostream>
#include<string>
using namespace std;
//Tinh ke thua
class Animal{//class cha
	protected://su dung trong class, cho ke thua
		float weight = 30;
	public: 
		void run(){
			cout<<"Animails is running..."<<endl;
		}
		float get_weight(){
			return this->weight;
		}
};
class Pet{
	public :
		string name;
};
class Cat : protected Animal, public Pet
 {//class con
	public:
		void eat(){
			cout<<"Cat is eatting..."<<endl;
		}
		void show_weight(){
			cout<<"Weight: "<<this->get_weight()<<endl;
		}
};

int main(){
	Cat cat;
	cat.name="Bo";

	return 0;
}
