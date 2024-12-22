#include <iostream>
using namespace std;

int main(){
	
	pair <int, char> p[256];
	
	for(int i=0; i<256; i++){
		
		char temp = i;
		
		p[i].first = i;
		p[i].second = temp;
	}
	
	for(int i=0; i<256; i++){
		
		cout<< p[i].first<<"\t" <<p[i].second <<endl;
	}
	
	
	return 0;
}
