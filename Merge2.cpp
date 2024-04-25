#include <iostream>
#include <algorithm>
using namespace std;

void mergearray(int arr1[],int size1,int arr2[],int size2,int mergeArr[])
{
	int k = 0;
	int i = 0;
	int j = 0;
	
	while( i < size1 &&  j < size2){
		if(arr1[i] < arr2[j]){
			mergeArr[k++] = arr1[i++];
		}
		else{
			mergeArr[k++] = arr2[j++];
		}
	}
	
	while(i < size1){
		mergeArr[k++] = arr1[i++];
	}
	while(j < size2){
		mergeArr[k++] = arr2[j++];
	}
}

int main() {
	
      int size1 = 4;
      int arr1[] = {1,3,5,7};
	  
	  int size2 = 4;
	  int arr2[] = {2,4,6,8};
	    
	int mergeArr[size1 + size2];
	
	mergearray(arr1,size1,arr2,size2,mergeArr);
	
	
	cout<< "Merged array is: ";
	 for(int i = 0;i < size1 + size2;i++){
	 	cout<< mergeArr[i] << " ";
	 }
	

	
	return 0;
}