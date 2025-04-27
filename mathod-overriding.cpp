//virtual function or mathod overriding
#include <iostream>
using namespace std;

class shape{			//base class
	public:
		virtual void area(){
			cout<<"area of shape\n";
		}
	};

class circle : public shape{		
	public:
		void area(){
			cout<<"area of the circle\n";
		}
    };
    
class rectangle : public shape{
	public:
		void area(){
			cout<<"area of the rectangle\n";
		}
	};
	
int main(){
	shape* ptr;
	
	circle c;
	rectangle r;
	
	ptr=&c;
	ptr->area();
	
	ptr=&r;
	ptr->area();
	
	return 0;
	
}
