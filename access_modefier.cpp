#include <iostream>
using namespace std;

class btech{
	
	private:
		int x = 10;
		
	protected:
		int y = 20;
	
	public:
		int z = 30;
		
		btech(){
			cout<<"X: "<< x <<endl;
			cout<<"Y: "<< y <<endl;
			cout<<"Z: "<< z <<endl;
		}
};

int main(){
	
	btech s;
	
//	cout<<"X: "<< s.x <<endl;	 not accessable due to private member
//	cout<<"Y: "<< s.y <<endl;	 not accessable due to protected member
	cout<<"Z: "<< s.z <<endl;
	
	return 0;
}
