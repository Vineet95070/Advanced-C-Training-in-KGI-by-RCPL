#include <iostream>
using namespace std;

class pcar{
	
	public:
		pcar(){
			cout<<"I am pcar: \n";
		}
};

class ecar{
	
	public:
		ecar(){
			cout<<"I am electric car: \n";
		}
};

class hcar: public pcar, public ecar{
	
	public:
		hcar(){
			cout<<"I am hybrid car: \n";
		}
};

int main(){
	
	hcar c1;
	
	return 0;
}
