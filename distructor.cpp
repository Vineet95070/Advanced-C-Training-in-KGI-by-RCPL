#include <iostream>
using namespace std;

class btech{
	
	public:
		int roll;
		int room;
		float cgpa;
		
		btech(){
			
			cout<<"Default constructor: \n";
		}
		
		btech(char ch, int num){
			
			cout<<"Parameterised constructor, num: "<< num <<endl;
		}
		
		btech(int num){
			
			cout<<"Constructor with single parameter: \n";
		}
		
		~btech(){
			
			cout<<"Distructor: \n";
		}
};

int main(){
	
	btech s1, s2(78);
	
	btech *s3 = new btech('B', 78);
	
	delete s3;
	
	return 0;
}
