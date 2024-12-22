#include "myspace.h"
using namespace std;
using namespace KGI;

int main(){
	
	btech s3;
	
	btech* s1 = new btech(24, 6.9, 'C');
	
	btech* s2 = new btech;
//	btech* s2 = (btech *) malloc ( sizeof( class btech ) );
	
	s1->print();
	s2->print();
	s3.print();
	
	
	return 0;
}
