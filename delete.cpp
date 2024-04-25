#include <iostream>
using namespace std;

void deletearray(int arr[],int size,int position){
	for(int i = position - 1; i < size - 1; i++){
		arr[i] = arr[i + 1];
	}
}

int main() {
	
	int size = 3;
	int arr[size] = {1,2,3};
	
	int position;
	cout<<"Enter the position of the array: ";
	cin >> position;
	
	deletearray(arr,size,position);
	
	
	cout<< arr[0];
	cout<< arr[1];
	cout<< arr[2];
	

		
	
	
	
	
	
	return 0;
}