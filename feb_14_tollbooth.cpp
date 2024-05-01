/*Imagine a tollbooth at a bridge. Cars passing by the booth are expected to pay a 100/-
toll. Mostly they do, but sometimes a car goes by without paying. The tollbooth keeps
track of the number of cars that have gone by, and of the total amount of money collected.
Model this tollbooth with a class called tollBooth. The two data items are a type
int to hold the total number of cars, and a type double to hold the total amount
of money collected. A constructor initializes both of these to 0. A member function called
payingCar() increments the car total and adds 100/- to the cash total. Another function,
called nopayCar(), increments the car total but adds nothing to the cash total. Finally, a
member function called display() displays the two totals. Make appropriate member
functions const.*/
#include<iostream>
#include<conio.h>
using namespace std;
class tollbooth
{
	int totalcar;
	double caramount;
	public:
		tollbooth()
			{
				totalcar=0;
				caramount=0;
			}
		void payingcar()
		{
			caramount+100;
		}
		void nopaycar()
		{
			caramount+0;
		}
		void display()
		{
			cout<<"\n total cash"<<caramount;
		}
};
main()
{
	tollbooth t1,t2,t3;
	t1.payingcar();
	t2.payingcar();
	t3.nopaycar();
	t1.display();
	t2.display();
	t3.display();
}
