#include <iostream>
using namespace std;

int main(){
	
	pair <string, int> p[5];
	
	p[0].first = "Riya";
	p[0].second = 82;
	p[1].first = "Raksha";
	p[1].second = 70;
	p[2].first = "Ritesh";
	p[2].second = 13;
	p[3].first = "Vipin";
	p[3].second = 18;
	p[4].first = "Sona";
	p[4].second = 99;	
	
	int i=0;
	while( i != 5 ){
		
		cout<< p[i].first<<"\t"<< p[i].second <<endl;
		i++;
	}
	
	return 0;
}
