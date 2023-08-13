#include <iostream>

using namespace std;

//Tham so: parameters
//Doi so : argument

//Tham so a, b
int sum(int a, int b){
	
	return a + b;
}
//mang 1 chieu
//float avg(int arr[], int n){
//	int sum = 0;
//	for(int i = 0; i < n; i++){
//		sum += arr[i];
//	}
//	return (float)sum / n;
//}

//Mang 2 chieu, bat buot phai co so cot
float avg(int arr[][3], int n, int m){
	int sum = 0;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			sum += arr[i][j];
		}
	}
	return (float)sum / (n * m);
}

int main(){
	
//	int x = 4;
//	int y = 5;
	
	//Doi so x, y
//	cout<<sum(x, y)<<endl;
	
//----------------------------//

//	int arr[10] = {1, 2, 3, 4};
//	cout<<avg(arr, 4)<<endl;
	
	int numbers[2][3]={
		{1, 2, 3},
		{4, 5, 6}
	};
	
	cout<< avg(numbers, 2, 3);
	
	return 0;
}
