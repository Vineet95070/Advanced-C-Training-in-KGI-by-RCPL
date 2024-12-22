#include <iostream>
#include <vector>
using namespace std;

int main(){
	
	vector<int> v1 = {10, 20, 30, 40, 50};
	vector <int> v2;
	
	cout<< v1.size() <<endl;	// 5
	cout<< v2.size() <<endl;	// 0
	cout<< sizeof(v1) <<endl;	// 
	cout<< sizeof(v2) <<endl;	//
	
	return 0;
}
