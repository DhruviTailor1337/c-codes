//consept of constructor
#include <iostream>		//header file
using namespace std;
class myClass{			//class created
	public:
		myClass(){		//constructor of the class
			
			cout<<"constructor is called from myClass ";
		}
};
int main(){
	myClass object;		//object of the class
	return 0;
}
