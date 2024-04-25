#include <iostream>
using namespace std;

void traversearray( int arr[], int size){
	for(int i = 0; i < size ; i++){
		    //cout<< arr[i]<<" ";
		    cout << "Element at index " << i << " : " << arr[i] <<endl;
		}
		
	cout<< endl;
}

int main(){
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(arr) / sizeof(arr[10]);

	   
	cout << "Accessing each element of the array: "<<endl;
	cout <<"\n\n";
	traversearray(arr, size);
	       
	return 0;
}
