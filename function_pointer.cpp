#include <iostream>
using namespace std;

int add(int a, int b){
	
	return a+b;
}

int main(){
	
	int (*ptr)(int, int) = &add;
	
	int result = ptr(10, 20);
	
	cout<<"Sum is: "<< result <<endl;
	
	
	return 0;
}
