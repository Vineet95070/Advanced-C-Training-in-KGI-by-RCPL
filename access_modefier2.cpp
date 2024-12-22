#include <iostream>
using namespace std;

class parent{
	
	private:
		int x = 10;
	
	protected:
		int y = 20;
		
	public:
		int z = 30;
};

class child: public parent{
	
	public:
		void print(){
//			cout<<"X: "<< x <<endl;
			cout<<"Y: "<< y <<endl;
			cout<<"Z: "<< z <<endl;
		}
};

int main(){
	
	child c;
	c.print();
	
	return 0;
}
