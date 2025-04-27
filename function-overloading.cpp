//function overloading
#include <iostream>			//header file
using namespace std;

int add(int a,int b){		//this all function have same function name but have different data type
	return a+b;
}

double add(double a, double b){
	return a+b;
}

double add(int a, double b){
	return a+b;
}

int main(){
	cout<<"sum of 3 and 5 is: "<<add(3,5)<<endl;
	cout<<"sum of 3.3 and 3.3 is: "<<add(3.3,3.3)<<endl;
	cout<<"sum of 3 and 3.3 is: "<<add(3,3.3)<<endl;
	return 0;
	
}

