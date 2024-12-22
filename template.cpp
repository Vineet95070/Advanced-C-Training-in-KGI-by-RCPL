#include <iostream>
using namespace std;

// Write a template function to add two numbers, two number may be integer or float

template <typename T>
void func(T x){
	
	cout<<"Detail: "<< x<<endl;
}

int main(){
	
	int roll = 34;
	string name = "Vishnu";
	double cgpa = 8.6;
	
	func(roll);
	func(name);
	func(cgpa);
	
	
	return 0;
}
