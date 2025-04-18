//hybrid inheritance
#include <iostream>			//header file
using namespace std;

class vehicle{				//base class-1
	public:
		vehicle(){
			cout<<"\nthis is vehicle."<<endl;
		}
};
class fare{					//base class-2
	public:
		fare(){
			cout<<"fare of the vehicle."<<endl;
		}
};
class car : public vehicle{		//derived class-1
	public:
		car(){
		cout<<"this vehicle is car."<<endl;
	}
};
class bus : public vehicle, public fare{	//derived class-2
	public:
		bus(){
		cout<<"this vehicle is bus with fare.";
	}
};

int main(){
	car obj1;	//object of the car.
	bus obj2;	//object of the bus.
	return 0;
}
