#include <stdio.h>

int main(){
	
	const int num = 10;
	
	int* ptr = &num;
	
	*ptr = 98;
//	num++;
	
	printf("%d ", num);
	
	
	return 0;
}
