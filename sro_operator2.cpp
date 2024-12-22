#include <iostream>

int num = 20;

int main(){
	
	int num = 90;
	
	std::cout<< num <<std::endl;	// 90
	std::cout<< ::num <<std::endl;	// 20
	
	return 0;
}
