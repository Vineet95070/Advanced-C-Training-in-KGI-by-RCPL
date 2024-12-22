#include <iostream>
using namespace std;

class btech{
	
	public:
		int roll;
		int age;
		float cgpa;
		
		btech(){
			
			cout<<"Default constructor: \n";
		}
		
		btech( btech& obj){
			
			cout<<"Copy constructor: \n";
		}
};

int main(){
	
	btech abhay, chinki, riya;	// default constructor
	
	btech minki(chinki);	// copy constructor
	
	btech raksha = riya;	// copy constrcotr
	
	btech tanya{ riya };	// copy constructor
	
	return 0;
}
