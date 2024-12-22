#include <iostream>
using namespace std;

int main(int argc, char* argv[]){
	
	cout<<"Number of arguments: "<< argc-1 <<endl;
	
	for(int i=1; i<argc; i++){
		
		cout<<"Aggument "<< i <<" is: "<< argv[i]<<endl;
	}
	
	
	return 0;
}
