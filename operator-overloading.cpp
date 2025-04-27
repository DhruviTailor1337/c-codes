//operator overloading
#include <iostream>
using namespace std;

class point{
	private:
		int x,y;
		
	public:
		point(int a=0,int b=0){
			x = a;
			y = b;
		}
		
	point operator +(point p){
		point res;
		res.x = x+p.x;
		res.y = y+p.y;
		return res;
	}
	void print(){
		cout<<"("<<x<<" +i"<<y<<")";
	}
};
int main(){
	point p(10,5),p1(2,4);
	point p3=p+p1;
	p3.print();
}

