#include <iostream>
using namespace std;

// Write a template function to add two numbers, two number may be integer or float

template <typename T, typename U>
auto Sum(T a, U b){
	
	return a+b;
}

int main(){
	
	cout<< Sum(12, 12) <<endl;
	cout<< Sum(12.5, 12) <<endl;
	cout<< Sum(12, 12.5) <<endl;
	cout<< Sum(12.5, 12.5) <<endl;
	
	return 0;
}
