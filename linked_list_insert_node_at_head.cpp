#include <iostream>
using namespace std;

class list{
	
	public:
		int data;
		list* next;		// Self referential
		
		list(int val){
			
			data = val;
			next = NULL;
		}
};

void print(list* head){
	
	list* temp = head;
	while( temp != NULL ){
		
		cout<<temp->data <<"\t"<< temp->next <<endl;
		temp = temp->next;
	}
}

void insertHead(list* &head, int val){
	
	list* newhead = new list(val);
	
	newhead->next = head;
	
	head = newhead;
}

int main(){
	
	list* n1 = new list(10);
	
	insertHead(n1, 11);	
	insertHead(n1, 12);	
	insertHead(n1, 13);	
	insertHead(n1, 14);	
	insertHead(n1, 15);	
	
	print( n1 );
	
	return 0;
}











