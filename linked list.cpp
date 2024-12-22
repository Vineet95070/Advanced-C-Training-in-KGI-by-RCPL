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

int main(){
	
	list* n1 = new list(10);
	
	list* n2 = new list(20);
	n1->next = n2;
	
	list* n3 = new list(30);
	n2->next = n3;
	
	list* n4 = new list(40);
	n3->next = n4;
	
	print( n1 );
	
	return 0;
}











