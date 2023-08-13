#include<iostream>
#include<fstream> 

using namespace std;

int main(){
	ofstream ofs;
	
	//Tao file nhi phan .bin .dat
	ofs.open("test.bin", ios::binary);
	if(!ofs.is_open()){
		cout<<"Mo file that bai.";
		return 1;
	}
	
//ghi file	
//	int n = 6;
//	ofs.write((char*)&n, sizeof(int));//lay dung luong cua bien n
//	
//	ofs.close();
//	
//	//mo file 
//	ifstream ifs;
//	ifs.open("test.bin", ios::binary);
//	
//	int read_n;
//	ifs.read((char*)&read_n, sizeof(int));
//	
//	cout<<read_n;
//-------------------------------------------------//

//luu mot mang so thuc
	int n = 3;
	float numbers[n] = {1.2, 1.3, 1.4};
	
	ofs.write((char*)&n, sizeof(int));
	ofs.write((char*)&numbers, sizeof(float)*n);
	
	ofs.close();
	
	//doc file
	ifstream ifs;
	ifs.open("test.bin", ios::binary);
	
	int read_n;
	ifs.read((char*)&read_n, sizeof(int));
	float read_number[read_n];
	ifs.read((char*)&read_number, sizeof(float)*read_n);
	
	//in ra console
	for(int i = 0; i < read_n; i++)
		cout<<read_number[i]<<" ";
	
	return 0; 
} 
