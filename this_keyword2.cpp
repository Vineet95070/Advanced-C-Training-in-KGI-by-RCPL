#include <iostream>
using namespace std;

class btech{
	
	public:
		int age;
		float cgpa;
		int roll;
		
		btech(int a, int r, float c){
			age = a;
			roll = r;
			cgpa = c;
		}
		
		void print(){
			cout<< "Roll: "<< roll <<endl;
			cout<<"CGPA: "<< cgpa <<endl;
			cout<< "Age: "<< age <<endl;
			cout<<"Address of obj: "<<this <<endl<<endl;
		}
};

int main(){
	
	btech s2(24, 87728, 9.8);
	cout<< "Address of obj: "<< &s2 <<endl;
	s2.print();
	
	btech *s3 = new btech(28, 34128, 6.8);
	cout<< "Address of obj: "<< s3 <<endl;
	s3->print();
	
	
	return 0;
}


