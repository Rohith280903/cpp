//WAP to overload NOT operator
#include<iostream>
#include<conio.h>
using namespace std;
class demo
{
	int x,y,z;
	public:
	demo(int a,int b,int c)
	{
		x=a;
		y=b;
		z=c;
	}
	void operator !()
	{
		x=!x;
		y=!y;
		z=!z;
	}
	void show()
	{
		cout<<x<<" "<<y<<" "<<z<<"\n";
	}
	
};
main()
{
	demo d1(0,1,0);
	!d1;
	d1.show();
}
