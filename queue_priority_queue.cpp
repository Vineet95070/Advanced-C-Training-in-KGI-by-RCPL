#include <iostream>
#include <queue>
using namespace std;

int main(){
		
	priority_queue  <int> q;
	
	q.push(10);		// complexity of push() is O(n)
	q.push(20);
	q.push(30);
	q.push(40);
	q.push(50);
	
	cout<< q.top() <<endl;

	while( !q.empty() ){
		
		cout<< q.top() <<" ";
		q.pop();
	}
	
	return 0;
}
