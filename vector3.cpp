#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	
	vector<int> v1 = {10, 20, 30, 40, 50};
	vector <int> v2 = {12, 56, 34, 17, 10};
	
//	swap(v1, v2);	
	sort( v2.begin(), v2.end() );
	
	int i=0;
	while( i != v2.size() ){
		
		cout<< v2[i]<<" ";
		i++;
	}
	
	
	return 0;
}
