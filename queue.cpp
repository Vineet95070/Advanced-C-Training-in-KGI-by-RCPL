#include <iostream>
#include <queue>
using namespace std;

int main(){
		
	queue  <int> q;
	
	q.push(10);		// complexity for push() is O(1)
	q.push(20);
	q.push(30);
	q.push(40);
	q.push(50);
	
	cout<< q.front() <<endl;
	cout<< q.back() <<endl;
	cout<< q.size() <<endl;
	
	while( !q.empty() ){
		
		cout<< q.front() <<" ";
		q.pop();
	}
	
	return 0;
}
