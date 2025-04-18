//parameterized constructor
#include <iostream>				//header file
using namespace std;

class myClass{					//base class
	private:					//access mode
		int x;

	public:
		myClass(int value){		//construcor with parameter
			x = value;
			cout<<"constructor called with value x:"<<x<<endl;
		}
		
		void display(){
			cout<<"value of the x is:"<<x<<endl;
		}
}; 
int main(){
	myClass obj(10);			//insert value
	obj.display();				//display mathod called
}
