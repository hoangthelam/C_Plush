#include<iostream>
#include<string>
#include<math.h>

using namespace std;

void input_interger(string label, int &n);
bool is_prime(int n);
int sum_of_primes(int n);
long long factor(int n);//long long dung cho kieu du lieu lon

int main(){
	int n;
	input_interger("n = ", n);
//1.	
//	if(is_prime(n))
//		cout<<n<<" la so nguyen to";
//	else
//		cout<<n<<" khong phai so nguyen to";
//2.
//	cout<<"Ket qua: "<<sum_of_primes(n);		
//3.
	cout<<n<<"! = "<<factor(n);
	return 0;
}

void input_interger(string label, int &n){
	cout<<label;
	cin>>n;
}
//1.Viet chuong trinh nhap vao mot so nguyen duong n.
//Kiem tra xem so n co phai la so nguyen to hay khong

//Kiem tra so nguyen to
bool is_prime(int n){
	for(int i = 2; i <= sqrt(n); i++)
		if(n % i == 0)
			return 0;
	return 1;
}

//2. Viet chuong trinh nhap vao 1 so nguyen duong n (n>1).
//Tinh va in ra man hinh tong cac so nguyen to tu 2->n.

//vong lap
//int sum_of_primes(int n){
//	int result = 0;
//	for(int i = 2; i <= n; i++){
//		if(is_prime(i)){
//			result += i;
//		}
//	}
//	return result;
//}

//De quy
int sum_of_primes(int n){
	if(n == 2)
		return 2;
	
	if(is_prime(n))
		return n + sum_of_primes(n -1);
	
	return sum_of_primes(n - 1);
}

//3. Viet chuong trinh nhap vao 1 so nguyen duong n.
//Tinh va in ra man hinh n!

//vong lap
//3! = 1 * 2 * 3
//long long factor(int n){
//	long long result = 1;
//	for(int i = 1; i <= n; i++)
//		result *= i;
//	return result;
//}

//De quy
long long factor(int n){
	if(n == 1)
		return 1;
	return n *factor(n - 1); 
}
