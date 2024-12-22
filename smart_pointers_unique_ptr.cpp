#include <iostream>
#include <memory>
using namespace std;

int main(){
	
	unique_ptr <int> ptr (new int(20) );
	
//	move function move the ownership of container
	unique_ptr <int> ptr2 = move(ptr);	
	
	ptr2.reset();	// it reset the pointer by NULL
	
//	cout<< *ptr <<endl;
//	cout<< *ptr2 <<endl;
	
	
	return 0;
}
