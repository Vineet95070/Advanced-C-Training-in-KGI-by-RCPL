#include <iostream>
using namespace std;

template <typename T>
class btech{
	
	T val1;
	T val2;
	
	public:
		
		btech(T a, T b){
			
			T temp = a;
			a = b;
			b = temp;
			
			val1 = a;
			val2 = b;
		}
		
		void print(){
			cout<<val1 <<"\t"<< val2 <<endl<<endl;
		}
};
