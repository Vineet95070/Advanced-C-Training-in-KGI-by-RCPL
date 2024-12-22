#include <iostream>
using namespace std;

// Write a template function to add two numbers, two number may be integer or float

template <typename T, typename U>
void Sum(T a, U b){
	
	cout<<"Sum: "<< a+b <<endl;
}

int main(){
	
	Sum(12, 12);
	Sum(12.5, 12);
	Sum(12, 12.5);
	Sum(12.5, 12.5);
	
	
	return 0;
}
