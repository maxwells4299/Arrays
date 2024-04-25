#include <iostream>
using namespace std;

int main() {
	
	int  n;
	cout << "Enter the number of elements to placed into array: ";
	cin >> n;
	
	int arr[n];
	
	cout<< "Enter the array: ";
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}
	cout<< "Reversal of ARRAY is: ";
	for(int i = n - 1; i >= 0; --i){
		cout << arr[i] << " ";
	}
	return 0;
}