//WAP to overload prefix and postfix decrement operator
#include<iostream>
#include<conio.h>
using namespace std;
class demo
{
	int val;
	public:
	demo()
	{
		val=10;
	}
	void operator --()
	{
		--val;
	}
	void operator --(int)
	{
		val--;
	}
	void show()
	{
		cout<<val<<"\n";
	}
};
main()
{
	demo d1,d2;
	--d1;
	d1.show();
	d2--;
	d2.show();
	
}
