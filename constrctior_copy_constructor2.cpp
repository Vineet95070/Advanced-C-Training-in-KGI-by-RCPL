#include <iostream>
using namespace std;

// Shalow copy, parial copy:
//	When we define copy constructor then property of one object is copy partially.

class btech{
	
	public:
		int weight;
		int height;
		
		btech(){}	//Do nothing
		
		btech( btech& obj ){
			
			weight = 15;
			height = 5;
		}
		
		void print(){
			cout<<"Weight: "<< weight <<endl;
			cout<<"Height: "<< height <<endl <<endl;
		}
};

int main(){
	
	btech riya;
	riya.weight = 5;
	riya.height = 4;
	riya.print();
	
	btech raksha = riya;
	raksha.print();
	
	
	return 0;
}
