#include <iostream>
using namespace std;

class ForArms{		// ForArms is a parent class
	
	public:
		int hand = 4;
		
		ForArms(){
			cout<<"I am four Arms: \n";
		}
};

class Ben10: public ForArms{	// Ben10 is a child class
	
	public:
		Ben10(){
			
			cout<< "I am Ben: I have total "<< hand <<" hand: \n";
		}
};

int main(){
	
	Ben10 s;
	
	return 0;
}
