#include <iostream>
using namespace std;

int num = 20;

int main(){
	
	int num = 90;
	{
		int num = 80;
		cout<< num <<endl;	// 80
	}
	
	cout<< num <<endl;	// 90
	cout<< ::num <<endl;
	
	return 0;
}
