#include<iostream>
using namespace std;
class student{		//the class
	public:			//access specifier
		int rollNo;	
		string name;
		int age;
		
		void getData(int r_no,string s_name,int s_age){
			rollNo = r_no;
			name = s_name;
			age = s_age;
		}
		
		void display(){
			cout<<"Student's Roll No:"<<rollNo<<endl;
			cout<<"Student's Name: "<<name<<endl;
			cout<<"Student's Age: "<<age<<endl;
		}
};
int main(){
	
	//for student1 we create an object 
	student obj;
	obj.getData(01,"Dhruvi",18);	//give values
	obj.display();					//display all values
	
	//for other student we create another object
	cout<<endl;
	student obj2;
	obj2.getData(2,"XYZ",20);
	obj2.display();
	return 0;
}

