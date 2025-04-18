//multiple inheritance
#include <iostream>			//header file
using namespace std;

class vehicle{				//base class-1
	public:
		vehicle(){
			cout<<"this is a vehicle."<<endl;
		}
};
class fourWheeler{			//base class-2
	public:
		fourWheeler(){
			cout<<"this vehicle is four wheeler."<<endl;
		}
};
class car : public vehicle , public fourWheeler{	//derived class
	public:
		car(){
			cout<<"the vehicle fourwheeler is car.";
		}
};
int main(){
	car object;		//object of the car 
	return 0;
}
