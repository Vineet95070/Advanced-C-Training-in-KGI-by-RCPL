#include <iostream>
using namespace std;

class A{
	
	public:
		A(){
			cout<<"I am 'A' class: \n";
		}
};

class B: public A{
	
	public:
		B(){
			cout<<"I am 'B' class: \n";
		}
};

class C: public B{
	
	public:
		C(){
			cout<<"I am 'C' class: \n";
		}
};

int main(){
	
	C obj;
	
	
	return 0;
}
