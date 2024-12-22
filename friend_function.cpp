#include <iostream>
using namespace std;

class btech{
	
	private:
		float cgpa;
	
	protected:
		int roll;
	
	public:	
		btech(float c, int r){
			
			cgpa = c;
			roll = r;
		}
		
		friend void Vipin( btech obj );
};

void Vipin(btech obj){
	
	cout<<"Roll: "<< obj.roll <<endl;
	cout<<"CGPA: "<< obj.cgpa <<endl;
}

int main(){
	
	btech obj(4.5, 24);
	Vipin( obj );
	
	return 0;
}
