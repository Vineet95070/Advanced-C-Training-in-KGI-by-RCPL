#include <iostream>
using namespace std;

//	Abstract class
class shape{
	
	public:
		// area and parameter are pure virtual function
		virtual void area(int, int) = 0;
		virtual void parameter(int, int) = 0; 
		virtual void parameter(int, int, int) = 0;
};

class rect: public shape{
	
	public:
		
		void area(int l, int b){
			cout<<"I am Rectangle: \n";
			cout<<"Area: "<< l * b <<endl;
		}
		
		void parameter(int l, int b){
			
			cout<<"Parameter: "<< 2*(l+b) <<endl<<endl;
		}
		
		// do nothing type function
		void parameter(int, int, int){}		
};

class tri: public shape{
	
	public:
		
		void area(int h, int b){
			
			cout<<"Triangle: \n";
			cout<<"Area: "<< 0.5 * h * b <<endl; 
		}
		
		// do nothing type function
		void parameter(int, int){}
		
		void parameter(int a, int b, int c){
			
			cout<<"Parameter: "<< a+b+c <<endl;
		}
};

int main(){
	
	rect obj;
	obj.area(12, 13);
	obj.parameter(12, 13);
	
	tri obj2;
	obj2.area(12, 10);
	obj2.parameter(12, 11, 10);
	
	return 0;
}
