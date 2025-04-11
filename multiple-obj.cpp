#include<iostream>
using namespace std;
class car{
	public:
		string brand;
		string model;
		int year;
};
int main(){
	car obj1;
	obj1.brand="BMW";
	obj1.model="M5";
	obj1.year=1999;
	
	car obj2;
	obj2.brand="FORD";
	obj2.model="Mustang";
	obj2.year=1969;
	
	cout<<obj1.brand<<" "<<obj1.model<<" "<<obj1.year<<endl;
	cout<<obj2.brand<<" "<<obj2.model<<" "<<obj2.year<<endl;
	return 0;
}
