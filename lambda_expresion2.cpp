#include <iostream>
using namespace std;

int main(){
	
	
	auto val = [] () -> int {
		
		cout<<"Ener Number: ";
		int x;
		cin>>x;
		return x;
		
	} ();
	
	cout<<"Value is: "<< val <<endl;
	
	return 0;
}
