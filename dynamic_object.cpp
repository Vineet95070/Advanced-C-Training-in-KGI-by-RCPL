#include <iostream>
using namespace std;

class btech{
	public:
		int roll;
		float cgpa;
		char section;

		btech(){
			roll = 10;
			cgpa = 8.9;
			section = 'B';
		}
		
		btech(int r, float c, char s){
			roll = r;
			cgpa = c;
			section = s;
		}
		
		void print(){
			cout<<"Section: "<< section<<endl;
			cout<<"Roll: "<< roll <<endl;
			cout<<"CGPA: "<< cgpa <<endl<<endl;
		}
};

int main(){
	
	btech s3;
	
	btech* s1 = new btech(24, 6.9, 'C');
	
	btech* s2 = new btech;
//	btech* s2 = (btech *) malloc ( sizeof( class btech ) );
	
	s1->print();
	s2->print();
	s3.print();
	
	
	return 0;
}
