#include <iostream>
using namespace std;


int main() {
	
	int array[10] = {1,2,3,4,5,6,7,8,9,10};
	int max = array[0];
	int min = array[0];
	
	for(int i = 0; i < 10; i++){
		
		if(array[i] > max){
			max = array[i];
		}
		else if(array[i] < min){
			min = array[i];
		}
	
	}
		cout << "Min is: "<< min <<endl;
		cout << "Max is: "<< max <<endl;
	
	return 0;
}