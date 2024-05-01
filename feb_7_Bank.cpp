/*define a class to represent a bank account.include the following members
data members:
name of the depositer
account number
type of account
balance amount in the account
member function:
to assign initial value
to deposit an amount
to withdraw an amount after checking the balance
to display the name and balance
*/
#include<conio.h>
#include<iostream>
using namespace std;
class bank_account
{
	char name[30];
	int acc_num;
	char type_acc[30];
	int balance;
	public:
		void initial_value()
		{
			cout<<"\n Enter the value name,balance,acctype,accnum";
			cin>>name>>balance>>type_acc>>acc_num;
		}
		int deposit(int x)
		{
			balance=balance+x;
			cout<<"\nNew Balance"<<balance;
		}
		int withdraw(int x)
		{
			if(balance>x)
			{
				balance=balance-x;
				cout<<"\nNew balance after withdraw "<<balance;
				return balance;
			}
			else
			{
				cout<<"\n You cannot withdraw";
			}
		}
		void display()
		{
			cout<<"\n"<<name<<"=="<<balance;
		}		
};
main()
{
	bank_account b;
	b.initial_value();
	b.deposit(10000);
	int c=b.withdraw(500);
	b.display();
}
