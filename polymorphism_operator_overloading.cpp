#include <iostream>
using namespace std;

class dob{
	
	public:
		int age;
		
		dob(int val){
			age = val;
		}
		
		void operator++(){		//operator overload function
			
			age = age + 1;
		}
		
		void operator--(){
			
			age = age-1;
		}
		
		void operator++(int){	//operator overload function for post incrementer
			
			age = age + 1;
		}
		
		void operator--(int){	//operator overload function for post decrementer
			
			age = age-1;
		}
		
		void print(){
			
			cout<<"Age: "<< age <<endl;
		}
};

int main(){
	
	dob obj(20);
	
	obj();
	++obj;
	obj++;
	obj.print();
	
	--obj;
	obj--;
	obj.print();
	
	return 0;
}
