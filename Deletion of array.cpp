#include <iostream>
using namespace std;


int main() {
	
	int size;
	cout<<"Enter the size of the array: ";
	cin >> size;
	
	int* arr = new int[size];
	cout<<"Enter " << size <<" elements into the array: ";
	 for(int i = 0;i < size;i++){
	 	 cin >> arr[i];
	 }
	 cout<<"Array elements before deletion: " <<endl;
	    for(int i = 0;i < size;i++){
	    	cout<< arr[i] <<" ";
		}
		cout<<endl;
		
		delete[] arr;
		
		cout<<"Array elements after deletion: "<<endl;
		   for(int i = 0;i < size;i++){
		   	cout<< arr[i]<< " ";
		   }
	   cout<<endl;
	   
	   
	return 0;
}