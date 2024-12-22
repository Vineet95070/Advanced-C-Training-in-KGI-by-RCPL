#include <iostream>
using namespace std;

class btech{
	
	public:
		int roll = 12;
		float cgpa = 8.5;
		
		btech( int roll, float cgpa ){
			
			cout<< roll <<endl;			// 15
			cout<< cgpa <<endl;			// 7.5
			
			cout<< this->roll <<endl;	// 15
			cout<< this->cgpa <<endl;	// 7.5
			
			cout<< btech::roll <<endl;	// 12
			cout<< btech::cgpa <<endl; 	// 8.5
		}
};

int main(){
	
	btech s1(15, 7.5);
	
	return 0;
}
