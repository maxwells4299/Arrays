#include <iostream>
using namespace std;

int binarysearch(int arr[],int size,int target){
	int low = 0;
	int high = size - 1;
	
	while(low <=  high){
		int mid = (low + high)/2;
		
		if(arr[mid] == target){
			return mid;
		}
		else if(arr[mid] < target){
			low = mid + 1;
		}
		else{
			high = mid - 1;
		}
	}
	return -1;
}


int main(){
	int size = 11;
	int arr[size] = {1,2,3,4,5,6,7,8,9,10,11};
	
	int target;
	cout<<"Enter the targeted element: ";
	cin>> target;
	
	int index = binarysearch(arr,size,target);
	
	if(index != -1){
		cout<<"Element found at index: "<< index <<endl;
	}
	else{
		cout<<"Element not found in the list"<<endl;
	}
	
	
	
	return 0;
}