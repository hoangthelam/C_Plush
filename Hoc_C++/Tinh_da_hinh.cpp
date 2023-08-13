#include<iostream>

using namespace std;
/*Tinh da hinh
	-Nap chong
		+Nap chong ham
		+Nap chong toan tu
	-Ghi de
	-Phuong thuc ao
*/

//Nap chong ham

//class Calcualator{
//	public:
//		Calcualator(){}; 
//		
//		Calcualator(int x){
//			this->x= x;
//		}
//		int add(int a, int b){
//			cout<<"Integer"<<endl;
//			return a + b;
//		}
//		float add(float a, float b){
//			cout<<"Float"<<endl;
//			return a + b;
//		}
//};

//Nap chong toan tu

//class Point{
//	public: 
//		int x;
//		int y;
//		
//		Point(){};
//		Point(int x, int y){
//			this->x = x;
//			this->y = y;
//		}
//		//Nap chong toan tu
//		friend Point operator+(Point p1, Point p2){
//			Point p3;
//			p3.x = p1.x + p2.x;
//			p3.y = p1.y + p2.y;
//			
//			return p3;
//		}
//};

//Ghi de

//class Animal{
//	public:
//		void move(){
//			cout<<"Animal move"<<endl;
//		}	
//	
//};
//class Dog : public Animal{
//	public:
//		void move(){
//			cout<<"Dog move"<<endl;
//		}
//		void parent_move(){
//			Animal::move();//Goi ham move cua Animal
//		}
//};

//Phuong thuc ao
class Animal{
	public:
		virtual void move() = 0;//phuong thuc thuan ao(phai dinh nghia o lop con) va khong the tao moi doi tuong
//		virtual void move(){// virtual: tao mot ham ao 
//			cout<<"Animal move";
//		}
};
class Dog : public Animal{
	public: 
		void move(){
			cout<<"Dog move";
		}
};


int main(){
// Nap chong ham	
//	Calcualator cal;
//	
//	int a = 1, b = 2;
//	float c = 1.4, d = 1.5;
//	
//	cout<<"a + b = "<<cal.add(a, b)<<endl;
//	cout<<"c + d = "<<cal.add(c, d)<<endl;
//---------------------------------------//

//Nap chong toan tu
//	Point p1(1, 2), p2(3, 4);
//	
//	Point p3 = p1 + p2;
//	
//	cout<<"P3 = "<<p3.x<<", "<<p3.y<<endl;

//Ghi de
//	Animal animal;
//	animal.move();
//	
//	Dog dog;
//	dog.move();
//	dog.parent_move();

//Phuong thuc ao
//	Dog dog;
//	dog.move();
	Animal *animal = new Dog;
	
	animal->move();
	return 0;
}
