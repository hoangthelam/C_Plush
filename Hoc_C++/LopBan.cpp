#include<iostream>
#include<vector>
using namespace std;
//Lop ban - friend class
//class B;
//class A{
//	private:
//		int x = 4;
//		
//		friend B;
//};
//class B{
//	public:
//		void print_x(A a){
//			cout<<a.x;
//		}
//};
//-------------------------//

int main(){
//	B b;
//	
//	b.print_x(A());
//-------------------------//
	
	vector<int> numbers;
	
	numbers.push_back(1);//push_back: Them Phan tu vao cuoi
	numbers.push_back(2);
	numbers.push_back(3);
	
	for(int i = 0; i < numbers.size(); i++)
		cout<<numbers[i]<<" ";
	cout<<endl;
	
	numbers.erase(numbers.begin() + 1);//erase: dung de xoa mot phan tu
	//numbers.begin() :tra ve con tro dag tro vi tri dau tien 
	for(int i = 0; i < numbers.size(); i++)
		cout<<numbers[i]<<" ";
	cout<<endl;
	
	return 0;
} 
