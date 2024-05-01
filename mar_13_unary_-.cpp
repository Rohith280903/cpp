//WAP to overload - operator
#include<iostream>
#include<conio.h>
using namespace std;
class demo
{
	int x,y;
	public:
	demo()
	{
		x=10;
		y=20;
	}
	void operator -()
	{
		x=-x;
		y=-y;
	}
	void show()
	{
		cout<<x<<y<<"\n";
	}
	
};
main()
{
	demo d1,d2;
	-d1;
	d1.show();
}
