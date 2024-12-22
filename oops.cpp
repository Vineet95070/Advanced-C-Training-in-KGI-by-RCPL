#include <iostream>
using namespace std;
struct btech{
	
	public:
		int roll;
		int age;
		float cgpa;
};

int main(){
	
	btech raksha, anoop, abhay;
	
	raksha.roll = 231;
	raksha.age = 21;
	raksha.cgpa = 8.2;	
	
	cout<< "Roll: "<< raksha.roll<< endl;
	cout<<"AGE: "<< raksha.age<<endl;
	cout<<"CGPA: "<< raksha.cgpa <<endl;
	
	return 0;
}
