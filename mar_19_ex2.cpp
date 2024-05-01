#include<iostream>
using namespace std;
class atime
{
	int x,y;
	public:
		time(int hrs,int mins)
		{
			x=hrs;
			y=mins;
		}
		time()
		{
			x=0;
			y=0;
		}
		operator int()
		{
			int x;
			x=hrs*60+mins;
			return x;
		}
		time(int M)
		{
			hrs=M/60;
			min=M%60;
		}
		void display()
		{
			cout<<hrs<<":"<<mins;
		}
};
main()
{
	time t1(10,25);
	time t2;
	int m=90;
	int n;
	t2=m;
	n=t1;
	t2.show()
	cout<<n
}
