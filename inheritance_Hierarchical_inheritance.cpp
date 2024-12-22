#include <iostream>
using namespace std;

class A{
	
	public:
		A(){
			cout<<"I am class-A\n";
		}
};

class B: public A{
	
	public:
		B(){
			cout<<"I am class-B\n";
		}
};

class C: public A{
	
	public:
		C(){
			cout<<"I am class-C\n";
		}
};

int main(){
	
	C obj1;
	B obj2;
	
	return 0;
}
