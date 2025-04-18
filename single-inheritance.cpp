//single inheritance
#include <iostream>				//header file
using namespace std;
class vehicle{					//base class
	public:						//access mode
		vehicle(){				//constructor of vehicle 
			
			cout<<"this is a vehicle"<<endl;
		}
};
class car:public vehicle{		//derived class
	public:						//access mode
		car(){					//constructor of car
		
			cout<<"this vehicle is car";
		}
};
int main(){
	
	car obj;		//derived class object
	return  0;
}
