#include <iostream>
using namespace std;

// Deep copy

struct btech{
	
	public:
		int weight;
		int height;
		
		btech(){}	//Do nothing
		
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
