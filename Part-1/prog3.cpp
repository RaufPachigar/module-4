//Write a C++ program to implement a class called Circle that has private member variables for radius.
// Include member functions to calculate the circle's area and circumference.

#include<iostream>
using namespace std;

class circle{
	private :
		int r;
		float area;
		float circumference;
		
		public :
			void fun(){
			
			cout<<"Enter Radius of cicle:";
			cin>>r;
			area=3.14*r*r;
			circumference=2*3.14*r;
			cout<<endl;
			cout<<"area:"<<area<<endl;
			cout<<"circumference:"<<circumference;
            }
			
	
};
int main()
{
	circle c1;
	c1.fun();
	
}
