#include <iostream>
using namespace std;

int main(){
	
	int arr[5] = {10, 20, 30, 40, 50};
	
	cout<< arr <<endl;	// address of base index
	cout<< *arr <<endl;	// value at base address
	cout<< arr+1 <<endl;	// address of 1st index
	cout<< *(arr+1) <<endl;	// value at 1st index
	cout<< *(arr+3) <<endl;	// value at 3rd index
	
	int i=0;
	while( i != 5 ){
		
//		cout<< arr[i]<<" ";
		cout<< *(arr + i)<<endl;
//		printf("%d ", arr+i);

		i++;		
	}
	
	
	return 0;
}
