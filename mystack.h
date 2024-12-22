#include <iostream>
using namespace std;

#define n 5
template <typename T>

class stack{
	
	public:
		T arr[n];
		int ptr = -1;
		
		void push(T val){
	
			if( ptr == n-1 ){
				
				cout<<"Stack Overflow: \n";
				return;
			}
			
			ptr++;
			arr[ptr] = val;
		}
		
		void pop(){
	
			if( ptr == -1 ){
				
				cout<<"Stack underflow: \n";
				return;
			}
			
			ptr--;
		}
		
		T top(){
	
			return arr[ptr];
		}
		
		bool empty(){
			
			if(ptr == -1 )
				return true;
			else
				return false;
		}
};
