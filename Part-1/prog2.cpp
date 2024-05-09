#include<iostream>
#include<string>


using namespace std;

class accountHolder{
	public :
	
	const string name="Rauf";
    const int acc_no=200457;
    const string typeOfAccount="Savings Account";
    double balance=54300.00;
    int amount;
    int choice;
    
    
    void details(){
	 
	 switch(choice){
	 	case 1:
	 		cout<<"Account Holder Name :"<<name<<endl;
	 		cout<<"Account Number :"<<acc_no<<endl;
	 		cout<<"Available Balance :"<<balance<<endl;

			break;
	 		
	 	case 2:	
	 	    cout<<"Enter the Amount You Want To Deposit :"<<endl;
	 	    cin>>amount;
	 	    balance=balance+amount;
	 		cout<<"Amount Has Been Deposited Succesfully"<<endl;
			cout<<"Available Balance :"<<balance<<endl;
	 	    break;
	 	    
	 	 case 3:
	 	 	cout<<"Enter the Amount You Want To Withdraw :"<<endl;
	 	 	cin>>amount;
	 	 	balance=balance-amount;
	 	 	cout<<"Amount Has Been Withdrawen Succesfully"<<endl;
			cout<<"Available Balance :"<<balance<<endl;
			
			default :
				cout<<"wrong input";
	 	 }
    }
};

int main()
{
	accountHolder b1;
	cout<<"*****Bank Management System*****\n\n";
	cout<<"1.Check Account Details\n2.Deposit Amount\n3.Withdraw Amount\n";
	cout<<"enter:";
	cin>>b1.choice;
	b1.details();
    
}
