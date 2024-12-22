#include <iostream>
#include <vector>
using namespace std;

int main(){
	
	vector<int> v = {10, 20, 30, 40, 50};
	
	v.push_back(60);
	v.push_back(70);
//	v.pop_back();
	
	cout<< v.size() <<endl;
//	v.clear();
	cout<< v.at( 4 ) <<endl;
	
	cout<< v.front() <<endl;
	cout<< v.back() <<endl;
	cout<< "begin(): "<< *v.begin() <<endl;
	cout<< "end(): "<< *(v.end()-1) <<endl;
	
	if( v.empty() )
		cout<< "Vector have no element: \n";
	else
		cout<<"Vector have some element: \n";

	
	int i=0;
	while( i != v.size() ){
		
		cout<< v[i]<<" ";
		i++;
	}	
	
	return 0;
}
