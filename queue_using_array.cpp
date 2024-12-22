#include <iostream>
using namespace std;
#define n 5

class queue{
	
	public:
		int arr[n];
		int front = -1;
		int rear = -1;
		
		void push(int);
		void pop();
		int getFront();
		int getRear();
		bool empty();
};

void queue::push(int val){
	
	if( rear == n-1 ){
		cout<<"Queue overflow: \n";
		return;
	}
	
	if( front == -1 )
		front = 0;
	
	rear++;
	arr[rear] = val;
}

void queue::pop(){
	
	if( rear == -1 || front > rear ){
		cout<<"Queue underflow: \n";
		return;
	}
	front++;
}

bool queue::empty(){
	
	if( rear == -1 || front > rear )
		return true;
	else
		return false;
}

int queue::getFront(){
	
	return arr[front];
}

int queue::getRear(){
	
	return arr[rear];
}

int main(){
	
	queue q;
	
//	q.pop();
	
	q.push(10);
	q.push(20);
	q.pop();
	
	cout<<q.getFront()<<endl;
	cout<<q.getRear() <<endl;
	
	q.pop();
	q.pop();
	
	if( q.empty() )
		cout<<"Queue is empty: \n";
	else
		cout<<"Queue is not empty: \n";
		
	
	return 0;
}
