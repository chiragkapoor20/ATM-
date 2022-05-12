#include<iostream>
#include<string>
#include<conio.h>
using namespace std;


class atm
{
	 private:
	 	 long int account_No;
	 	 string name;
	 	 int PIN;
	 	 double balance;
	 	 string mobile_No;
	
	public:
		void setData(long int account_No_a,string name_a,int PIN_a, double balance_a,string mobile_No_a)
		{
		 account_No=account_No_a;
	 	 name=name_a;
	    PIN=PIN_a;
	 	 balance=balance_a;
	 	mobile_No=mobile_No_a;
	
		}
		long int getAccountNo()
		{
			return account_No;
		}
		
		string getName()
		{
			return name;
		}
		int getPIN()
		{
			return PIN;
		}
		string getmobile_No()
		{
			return mobile_No;
		}
		double getBalance()
		{
			return balance;
		}
		
		
		void setMobile(string mob_prev,string mob_new)
		{
			if(mob_prev ==mobile_No)
			{
				mobile_No=mob_new;
				cout<<"\n"<<"Successfully updated Mobile number ";
				_getch();
				
			}
		}
		
		void cashWithDraw(int account_a)
		{
			if(account_a> 0 && account_a<balance)
			{
				balance-=account_a;
				cout<<"\n"<<"please Collect Cash ";
				cout<<"\n"<<"Available balance: "<<balance;
				_getch();
			}
			else
			{
				cout<<"\n"<<"Invalid input or Insufficent balance ";
				_getch();
			}
			
		}
	
};

main()
{
	
	int choice =0,enterPIN;
	long int enterAccountNo;
	
	system("cls");
	
	
	atm user1;
	user1.setData(1234567,"Tim",111,45000,"9457812264");
	
	
	do
	{
		system("cls");
		
		cout<<"\n"<<"***********welcome to Atm **************"<<"\n";
		cout<<"\n"<<"Enter Your Account No ";
		cin>>enterAccountNo;
		
		
		
		cout<<"\n"<<"Enter PIN ";
		cin>>enterPIN;
		
		
		
		if((enterAccountNo== user1.getAccountNo() && enterPIN == user1.getPIN()))
        {
        	do
        	{
        		int amount=0;
        		string oldMobileNo,newMobileNo;
        		
        		system("cls");
        		
        		cout<<"\n"<<"*****welcome to ATM *************"<<"\n";
        		cout<<"\n"<<"Select Option";
        		cout<<"\n"<<"1. check balance";
        		cout<<"\n"<<"2. cash widraw";
        		cout<<"\n"<<"3. Show user detail";
        		cout<<"\n"<<"4. update mobile no";
        		cout<<"\n"<<"5. exit"<<"\n";
        		cin>>choice;
        		
        		
        		switch(choice)
        		{
        			case 1:
        				cout<<"\n"<<"your bank balance :"<<user1.getBalance();
        				
        				_getch();
        				break;
        				
        			case 2:
        				cout<<"\n"<<"enter the ammount";
        				cin>>amount;
        				user1.cashWithDraw(amount);
        				
        				break;
        				
        			case 3:
        				cout<<"\n"<<" **** user details are: ";
        				cout<<"\n"<<"->Account no "<<user1.getAccountNo();
        				cout<<"\n"<<"->Name       "<<user1.getName();
        				cout<<"\n"<<"->Balance    "<<user1.getBalance();
        				cout<<"\n"<<"-> Mobile No."<<user1.getmobile_No();
        				
        				_getch();
        				break;
        				
        			case 4:
        			   cout<<"\n"<<"enter old mobile no";
					   cin>>oldMobileNo;
					   cout<<"\n"<<"enter new Mobile no ";
					   cin>>newMobileNo;
					   
					   user1.setMobile(oldMobileNo,newMobileNo);
					   break; 
        				
        				break;
        				
        			case 5:
        				exit(0);
        				
        				break;
        			default:
        				cout<<"\n"<<"enter valid data ";			
				}
				
		}while(1);
		
	}
	else
	{
		cout<<"\n"<<"user detail are invalid";
		_getch();
	}
			
	}while(1);
	
	
	
	
	
}

