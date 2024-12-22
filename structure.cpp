#include <iostream>
using namespace std;

struct list{
	
	public:
		int data;
		list* link;		// self referintial structure
		
		list(int val){
			data = val;
			link = NULL;
		}
};

void print(list* head){
	
	list* temp = head;
	while( temp != NULL ){
		
		cout<<temp->link<<"\t"<<temp->data<<endl;
		temp = temp->link;
	}
}

int main(){
	
	list* n1 = new list(10);

	list* n2 = new list(20);
	n1->link = n2;
	
	list* n3 = new list(30);
	n2->link = n3;
		
	print(n1);
		
		
	return 0;
}
