#include <iostream>
using namespace std;

template <typename T, typename U>
class btech{
	
	public:
		T name;
		U roll;
		
		btech(T n, U r){
			
			name = n;
			roll = r;
		} 
		
		void print(){
			
			cout<<"Detail-1: "<< name <<endl;
			cout<<"Detail-2: "<< roll <<endl;
		}
};

int main(){
	
	btech <string, int> obj1("Vishnu", 890);
	obj1.print();
	
	btech <int, string> obj2(9879, "Rajan");
	obj2.print();
	
	btech <float, int> obj3(9.4f, 899);
	obj3.print();
	
	return 0;
}
