#include <iostream>
using namespace std;

template <typename T>
void swapVal(T& x, T& y){
	
	T temp = x;
	x = y;
	y = temp;
}

int main(){
	
	int a=10, b= 20;
	cout<<a<<"\t"<<b<<endl; 
	swapVal(a, b);
	cout<<a<<"\t"<<b<<endl<<endl;
	
	float c=10.6, d= 20.3;
	cout<<c<<"\t"<<d<<endl;
	swapVal(c, d);
	cout<<c<<"\t"<<d<<endl<<endl;
	
	char e='A', f= 'B';
	cout<<e<<"\t"<<f<<endl;
	swapVal(e, f);
	cout<<e<<"\t"<<f<<endl;
	
	
	return 0;
}
