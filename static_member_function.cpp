#include <iostream>
using namespace std;

class btech{
	
	public:
		int roll = 31;
		static int rno;
		
		void print(){
			
			cout<<"Roll: "<< roll <<endl;
			cout<<"Room number: "<< rno <<endl;
		}
		
		static void event(){
			
//			cout<<"Roll: "<<roll <<endl;
			cout<<"Room number: "<< rno <<endl;
		}
};

int btech::rno = 102;

int main(){
	
	btech::event();
	
	return 0; 
}


