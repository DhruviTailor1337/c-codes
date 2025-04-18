//multilevel inheritance
#include <iostream>			//header file
using namespace std;

class vehicle{				//base class
	public:
		vehicle(){
			cout<<"this is vehicle."<<endl;
		}
};
class fourWheeler : public vehicle{		//base class of car or derived class of vehicle
	public:
		fourWheeler(){
			cout<<"this vehicle is fourWheeler."<<endl;
		}
};
class car : public fourWheeler{			//derived class
	public:
		car(){
			cout<<"the vehicle fourWheeler is car.";
		}
};
int main(){
	car object;				//object of car that call all class
	return 0;
}
