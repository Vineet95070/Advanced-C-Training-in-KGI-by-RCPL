#include <iostream>
#include <vector>
using namespace std;

int main(){
	
	vector <int> v = {12, 45, 6, 7,34, 45};
	
	v.push_back( 33 );
	v.push_back( 78 );
	v.push_back( 90 ); 
	
	int i=0;
	while( i != v.size() ){
		
		cout<< v[i] <<" ";
		i++;
	}
	cout<<endl;
	
	// iterative way to print vector elements
	for(auto i: v)
		cout<<i<<" ";
	
	
	return 0;
}
