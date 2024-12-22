#include "swapval.h"

int main(){
	
	int a=10, b=40;
	cout<<a <<"\t"<< b<<endl;
	btech <int> obj1(a, b);
	obj1.print();
	
	float c=10.4, d=4.3;
	cout<<c <<"\t"<< d<<endl;
	btech <float> obj2(c, d);
	obj2.print();
	
	string e="suman", f = "sumant";
	cout<<e <<"\t"<< f<<endl;
	btech <string> obj3(e, f);
	obj3.print();
	
	return 0;
}
