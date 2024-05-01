/*Assume that a bank maintains savings accounts for customers. The savings account provides an interest and
withdrawal facility.Create a class account that stores the customer name, and account number and
from this derive a savings account to make it more specific to its requirement.
Include necessary member functions to achieve the following task
a)accept the deposit from the customer and update the balance
b)display the balance
c)compute interest
d)deposit interest*/
#include<iostream>
 using namespace std;
 class account
 {
 	public:
 		string name;
 		int acc_num;
 		public:
 			void get_info()
 			{
 				cout<<"\nEnter the customer name and account number";
 				cin>>name>>acc_num;
			 }
			void display()
			{
				cout<<"\nCustomer name : "<<name;
				cout<<"\nAccount number : "<<acc_num;
			}
 };
 class saving:public account
 {
 	public:
 		int deposit,intrest,time,balance;
		float total;
 		public:
 			void amt_balance()
 			{
 				cout<<"\nEnter balnce in the account";
 				cin>>balance;
			 }
 			void amt_deposit()
 			{
 				cout<<"\nEnter amount to be deposited";
 				cin>>deposit;
			 }
			void intrest_rate()
			{
				cout<<"\nEnter intrest";
				cin>>intrest;
			}
			void amt_time()
 			{
 				cout<<"\nEnter time";
 				cin>>time;
			 }
			void gross()
			{
				cout<<"\nBalance before deposit : "<<balance;
				balance=balance+deposit;
				cout<<"\nBalance after deposit : "<<balance;
				total=balance+(balance*time*intrest)/100;
				cout<<"\nNew balance after adding intrest for the time period : "<<total;		
			}			
 };
 main()
 {
 	saving a;
 	a.get_info();
 	a.amt_balance();
 	a.amt_deposit();
 	a.amt_time();
 	a.intrest_rate();
 	a.display();
 	a.gross();
 }
