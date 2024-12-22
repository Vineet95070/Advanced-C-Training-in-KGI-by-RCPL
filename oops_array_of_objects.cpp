#include <iostream>
using namespace std;

class btech{
	
	public:
		int roll;
		float cgpa;
		char section;
		
} s[3];

void getData(int i){
	
	cout<<"Enter roll: ";
	cin>>s[i].roll;
	
	cout<<"Enter cgpa: ";
	cin>>s[i].cgpa;
	
	cout<<"Enter Section: ";
	cin>>s[i].section;
}

void putData(int i){
	
	cout<<"ROll: "<< s[i].roll<<endl;
	cout<<"CGPA: "<< s[i].cgpa<<endl;
	cout<<"Section: "<< s[i].section<<endl<<endl;
}

int main(){
	
	int i=0;
	while( i != 3){
		
		getData(i);
		i++;
	}	
	
	i=0;
	while( i != 3){
		
		putData(i);
		i++;
	}	
	
	return 0;
}
