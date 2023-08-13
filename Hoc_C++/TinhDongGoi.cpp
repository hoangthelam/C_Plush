#include<iostream>

using namespace std;
/*
	-Tinh dong goi
	-Tinh ke thua
	-Tinh da hinh
	-tinh truu tuong
*/

class Square{
	private:
		float side_length;
	public:
		//setter: xet du lieu
		void set_side_length(float _side_length){
			side_length = _side_length;
		}
		//getter: lay du lieu ra
		float get_side_length(){
			return side_length;
		}
};

int main(){
	Square s1;
	
	s1.set_side_length(1.3);
	
	cout<<"Side length: "<<s1.get_side_length()<<endl;
	
	return 0;
}
