#include <iostream>
using namespace std;

void print(){
	cout<<"I am print without parameter: \n";
}

void print(int num){
	cout<<"num: "<< num <<endl;
}

void print(char ch){
	cout<<"ch: "<< ch <<endl;
}

void print(string str){
	cout<<"str: "<< str <<endl;
}

int main(){
	
	print();
	
	print(12);
	
	print('A');
	
	print("Yogesh");
	
	
	return 0;
}

