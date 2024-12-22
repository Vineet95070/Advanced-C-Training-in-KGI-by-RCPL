#include <iostream>
#include <stack>
using namespace std;

int main(){
	
	stack <int> s;
	
	s.push( 12 );
	s.push( 15 );
	s.push( 16 );
	s.push( 11 );
	s.push( 10 );
	s.push( 19 );
	
	while( ! s.empty() ){
		
		cout<< s.top() <<" ";
		s.pop();
	}
	
	
	return 0;
}
