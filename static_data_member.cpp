#include <iostream>
using namespace std;

void func(){
	
	static int num = 10;
	cout<<num <<" ";
	num++;
	
}

int main(){
	
	func();
	func();
	func();
	func();
	func();
	func();
	
	return 0;
}
