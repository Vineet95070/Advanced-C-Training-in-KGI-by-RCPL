#include <iostream>
using namespace std;

int main(){
	
	int x = 9;
	
	// capture by capture by reference
	auto val = [&] () -> int {
		
		cout<<"Ener Number: "<< x<<endl;
		return x * x;
		
	} ();
	
	cout<<"Square is: "<< x <<endl;
	
	return 0;
}
