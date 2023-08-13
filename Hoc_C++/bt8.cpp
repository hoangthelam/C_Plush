#include<iostream>
#include<string>

using namespace std;

//1.
const float PI = 3.14;
struct Circle{
	float r;
	
	friend istream& operator>>(istream &is, Circle &circle){
		cout<<"Nhap ban kinh: ";
		is>> circle.r;
		
		return is;
	}
	float Chu_Vi(){
	//P = r * 2 * PI
		return r * 2 * PI;		
	}
	float Dien_Tich(){
	//S = r * r * PI
	 	return r * r * PI;
	}
};

//2.
struct Product{
	string name;
	int price;
	int quantity;
	//in
	friend istream& operator>>(istream &is, Product &product){
		cout<<"Nhap Ten: ";
		is.ignore();
		getline(is, product.name);
		cout<<"Nhap Gia: ";
		is>>product.price;
		cout<<"So Luong: ";
		is>>product.quantity;
		
		return is;
	}
	//suat
	friend ostream& operator<<(ostream &os, Product product){
		os<<"Ten: "<<product.name;
		os<<" ; Don Gia: "<<product.price;
		os<<" ; So Luong: "<<product.quantity;
		
		return os;
	}	
};
//2.	
int Show_Menu();
void print_products(Product *product, int size);
void add_product(Product* &products, int &size);
void delete_product(Product* &products, int &size);

int main(){
	//1. Viet chuong trinh nhap vao du lieu ban kinh cua 1 hinh tron.
	//Tinh va in ra man hinh chu vaf dien tich hinh tron do (ung dung struct)

//	Circle circle;
//	cin>>circle;
//	
//	cout<<"Chu vi hinh tron la: "<<circle.Chu_Vi()<<endl;
//	cout<<"Dien tich hinh tron la: "<<circle.Dien_Tich()<<endl;
	
	//2. Viet chuong trinh quan ly san pham (Ten, DonGia, SoLuong) gom cac chuc nang sau:
		// + Xem danh sach san pham
		// + Them san pham moi
		// + Xoa san pham
	int size = 0;
	Product *products = new Product[size];
	while(true){
		int chose = Show_Menu();
		system("cls");
		switch(chose){
			case 1: 
				//Xem danh sach
				print_products(products, size);
				break;
			case 2: 
				//Them san pham
				add_product(products, size);
				break;
			case 3: 
				//Xoa san pham
				delete_product(products, size);
				break;
			case 0:
				cout<<"Bye Bye!";
				return 0;
			default:
				cout<<"Lua chon khong hop le."<<endl;
		}
		cout<<"Ban co muon tiep tuc khong? (1/0)";
		bool is_continue;
		cin>>is_continue;
		
		if(!is_continue){
			cout<<"Bye Bye!";
			break;
		}
	}
	
	return 0;
}

//2.
//Cac chuc nang
int Show_Menu(){
	system("cls");//xoa tat ca ca du lieu dang hien thi tren man hinh console
	int chose;
	cout<<"====================MENU====================="<<endl;
	cout<<"1. Xem danh sach san pham"<<endl;
	cout<<"2. Them San Pham Moi"<<endl;
	cout<<"3. Xoa San Pham"<<endl;
	cout<<"0. Thoat Chuong Trinh"<<endl;
	
	cout<<"Lua chon cua ban la: ";
	cin>>chose;
	
	return chose;
}
//in ds sp
void print_products(Product *product, int size){
	if(!size)
		cout<<"Chua co san pham nao."<<endl;
	else{
		cout<<"Danh sach san pham: "<<endl;	
		for(int i = 0; i < size; i++)
			cout<<product[i]<<endl;
	}		
}
//Them sp
void add_product(Product* &products, int &size){
	Product new_product;
	cout<<"Nhap thong tin san pham moi: "<<endl;
	cin>> new_product;
	
	int new_size = size + 1;
	Product *tmp_products = new Product[new_size];
	for(int i = 0; i < size; i++)
		tmp_products[i] = products[i];
	tmp_products[new_size - 1] = new_product;
	
	delete[] products;
	products = tmp_products;
	size = new_size;
	cout<<"Them San Pham Thanh Cong!"<<endl;
}
//Xoa sp
void delete_product(Product* &products, int &size){
	cout<<"Nhap ten san pham can xoa: ";
	string delete_name;
	cin.ignore();
	getline(cin, delete_name);
	
	int delete_index = -1;
	for(int i = 0; i < size; i++)
		if(!delete_name.compare(products[i].name)){
			delete_index = i;
			break;	
		}
	
	if(delete_index == -1){
		cout<<"Khong tim thay san pham!"<<endl;	
		return;
	}
	
	for(int i = delete_index; i < size - 1; i++)
		products[i] = products[i + 1];
	size--;
	
	Product *tmp_products = new Product[size];
	for(int i = 0; i < size; i++)
		tmp_products[i] = products[i];
	
	delete[] products;
	products = tmp_products;
	
	cout<<"Xoa Thanh Cong!"<<endl;
}
