#include <iostream>
using namespace std;
#define ops 4

float add(float a, float b){ return a+b; }
float sub(float a, float b){ return a-b; }
float mul(float a, float b){ return a*b; }
float div(float a, float b){ return a/b; }

int main(){
	
	float (*ptr[ops])(float, float) = {add, sub, mul, div};
	
	int choice;
	float a, b;
	
	while(1){
		
		cout<<"Enter two number: ";
		cin>> a>> b;
		
		cout<<"Enter your choice: 0 for sum, 1 for sub, 2 for mult and 3 for div: ";
		cin>> choice;
		
		cout<<"Output is: "<< ptr[choice](a, b)<<endl<<endl;
	}
	
	return 0;
	
}








