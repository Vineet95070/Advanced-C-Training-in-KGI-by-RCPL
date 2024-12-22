#include <iostream>
using namespace std;

namespace KGI{
	
	class btech{
		public:
			int roll;
			float cgpa;
			char section;
			
			// initlalizer list 
			btech(): roll(10), cgpa(8.9), section('B'){}
			
			btech(int r, float c, char s): roll(r), cgpa(c), section(s){}
			
			void print(){
				cout<<"Section: "<< section<<endl;
				cout<<"Roll: "<< roll <<endl;
				cout<<"CGPA: "<< cgpa <<endl<<endl;
			}
	};
}
