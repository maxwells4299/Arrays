#include <iostream>
using namespace std;

void Insertarray(int arr[],int size, int element,int position){
	for(int i = size - 1; i >= position -1; i--){
		arr[i] = arr[i + 1];
	}
	arr[position - 1] = element;
}

int main() {
	int size = 7;
	int element,position;
	int arr[] = {1,2,3,4,5,6,7}; 
	cout << "Enter the element to be inserted" <<endl;
	cin >> element;
	
	cout << "Enter the position of the element " << endl;
	cin >> position;
	
	 Insertarray(arr,size,element,position);

	 
	 
	      cout<< arr[0] << endl;
	      cout<< arr[1] << endl;
	      cout<< arr[2] << endl;
	      cout<< arr[3] << endl;
	      cout<< arr[4] << endl;
	      cout<< arr[5] << endl;
	      cout<< arr[6] << endl;

       
	return 0;
}