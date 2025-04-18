//hierarchical inheritance
#include<iostream>				//header file
using namespace std;

class vehicle{					//base class
	public:
		vehicle(){
			cout<<"\nthis is a vehicle."<<endl;
		}
};
class car : public vehicle{		//derived class-1
	public:
		car(){
			cout<<"this vehicle is car."<<endl;
		}
};
class bus : public vehicle{		//derived class-2

	public:
		bus(){
			cout<<"this vehicle is bus."<<endl;
		}
};
int main(){
	car obj1;		//object of car
	bus obj2;		//object of bus
	return 0;
}
