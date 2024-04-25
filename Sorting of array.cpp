#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	
	int s;
	cout<<"Enter the number of elements in the array: ";
	cin>> s;
	
	int arr[s];
	cout<<"Enter the element to be sorted: ";
	for(int i = 0; i < s; i++){
		cin >> arr[i];
	}
	
	sort(arr,arr + s);
	cout<<"Sorted elements are: ";
	for(int i = 0; i < s; i++){
		cout<< arr[i] <<" ";
	}
	
	return 0;
}