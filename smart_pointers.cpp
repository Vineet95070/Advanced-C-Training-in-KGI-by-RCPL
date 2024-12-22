#include <iostream>
#include <memory>
using namespace std;

int func(){
	
	unique_ptr <int> ptr(new int);
	
	if( 1 )
		return 10;		
		
}


int main(){
	
	func();
	
	
	return 0;
}
