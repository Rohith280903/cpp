#include<iostream>
#include<string.h>
using namespace std;
class person
{
	string name;
	int code;
public:

	void set_name_code()
	{
		cout<<"\nEnter name and code : ";
		cin>>name>>code;
		
	}
	void display_name_code()
	{
		cout<<"\nName : "<<name<<"\nCode : "<<code;
	}
};
class account:virtual public person
{
		int pay;
	public:
	
		void set_pay()
		{
			cout<<"\nEnter pay";
			cin>>pay;
		}
		void display()
		{
			cout<<"\nPay : "<<pay;
		}
};
class admin:virtual public person
{
		int exp;
	public:

		void set_exp()
		{
			cout<<"\n Enter experiance";
			cin>>exp;
		}
		void display()
		{
			cout<<"\nExp : "<<exp;
			account:display();
		}
};
class master:public account,public admin
{
	
};
int main()
{
	master m;
	m.set_name_code();
	m.set_pay();
	m.set_exp();
	m.display_name_code();
	
	m.admin::display();
	return 0;
}

