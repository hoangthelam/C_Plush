#include <iostream>

using namespace std;

int main(){
	int n = 5;
	int arr[n]= {6, 2, 3, 9, 5};
	
	for(int i = n - 1; i > 0; i--){
		for(int j = 0; j < i; j++){
			if(arr[j] > arr[j + 1]){
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
	
	for(int i = 0; i < n; i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}


