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

class C: public A{
	public:
		C(){
			cout<<"I am 'C' class: \n";
		}
};

class D:  public B, public C{

	public:
		D(){
			cout<<"I am 'D' class: \n";
		}
};

int main(){

	class D obj;

	return 0;
}
