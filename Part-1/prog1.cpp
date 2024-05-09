//1. WAP to create simple calculator using class
#include<iostream>
using namespace std;
 class calculator{
 	public :
 	
 	void fun1()
{
	 	int a,b,sum=0,choice;
 	
 	cout<<"Enter Your choice : ";
 	cin>>choice;
 	cout<<"\n";
 	
 	
 	switch(choice)
	{
		case 1 :
			    cout<<"enter First number :\n";
				cin>>a;
				cout<<"enter Second number :\n";
				cin>>b;
			    sum=a+b;
                cout<<"addition of "<<a<<"+"<<b<<"="<<sum<<endl;	             
			    break;
				
		case 2 :
		        cout<<"enter First number :\n";
				cin>>a;
				cout<<"enter Second number :\n";
				cin>>b;
				sum=a-b;
                cout<<"Substraction of "<<a<<"-"<<b<<"="<<sum<<endl;	             
			    break;

		case 3 :
		        cout<<"enter First number :\n";
				cin>>a;
				cout<<"enter Second number :\n";
				cin>>b;
				sum=a*b;
                cout<<"Multiplication of "<<a<<"*"<<b<<"="<<sum<<endl;	             
			    break;

		case 4 :
			    cout<<"enter First number :\n";
				cin>>a;
				cout<<"enter Second number :\n";
				cin>>b;
				sum=a/b;
				cout<<"Division of "<<a<<"%"<<b<<"="<<sum<<endl;	             

			    break;

		default :cout<<"Invalid choice";
 		
 		
 		
	 }
}
 	
 	
 	
 	
 };
 int main()
 {
          calculator c1;
	while(1)
	{
	cout<<"\n---------MENU--------\n";
    cout<<"1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n";
    c1.fun1();
    
    }


  }
 
