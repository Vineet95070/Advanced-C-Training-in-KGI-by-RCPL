#include <iostream>
using namespace std;
int main(){
	
	int num = 10;
	
	int* const ptr = &num;
	
	int num2 = 23;
	ptr++;
//	num++;
	
	cout<< ptr <<endl;
	cout<< *ptr <<endl;
	cout<< num <<endl;
	
	
	return 0;
}
