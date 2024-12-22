#include <iostream>
using namespace std;

int main(){
	
	int x = 9;
	
	// capture by value
	auto val = [=] () -> int {
		
		cout<<"Ener Number: "<< x<<endl;
		return x * x;
		
	} ();
	
	cout<<"Squareis: "<< val <<endl;
	
	return 0;
}
