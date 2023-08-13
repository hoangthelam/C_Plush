#include<iostream>
#include<string>
#include<vector>

using namespace std;
//vd: 
/*-Tao 1 lop Account de luu thong tin tk, gom cac thuoc tinh va phuong thuc sau
		+ name: luu tru ten tk thuoc kieu string, la thuoc tinh private
		+ balance: luu tru so du tai khoan thuoc kieu int, la thuoc tinh private
		+ get_name(): getter dung de lay gia tri cua thuoc tinh nam
		+ set_balance(): getter dung de lay gia tri thuoc tinh balance
  -Tao 1 lop Bank de luu thong tinh danh sach cac tk, gom cac thuoc tinh va phuong thuc sau
  		+ accounts: luu tru danh sach cac tk trong ngan hang la thuoc tinh private
		+ add_account(string name, int balance): phuong thuc dung de them 1 tk moi
		+ get_account(string name): phuong thuc dung de lay ra thong tin tk thong qua ten tk
*/

class Bank;
class Account{
	private:
		string name;
		int balance;
	public:
		string get_name(){
			return this->name;
		}
		int get_balance(){
			return this->balance;
		}
		
		friend Bank;
};
class Bank{
	private:
		vector<Account> accounts;
		
	public:
		void add_account(string name, int balance){
			Account new_account;
			new_account.name = name;
			new_account.balance = balance;
			
			this->accounts.push_back(new_account);//Them vao cuoi
		}
		
		void get_account(string name){
			int index = -1;
			for(int i = 0; i < this->accounts.size(); i++){
				if(!name.compare(this->accounts[i].name)){//compare: dung de ss
					index = i;
					break;
				}
			}
			
			if(index != -1){
				cout<<"Name: "<<this->accounts[index].name<<endl;
				cout<<"Balance: "<<this->accounts[index].balance<<endl;
			}else{
				cout<<"Not found!"<<endl;
			}
		}
};


int main(){
	Bank bank;
	
	bank.add_account("Lam", 2000);
	bank.add_account("A", 4000);
	bank.add_account("B", 5000);
	
	bank.get_account("Lam");
	
	return 0;
}
