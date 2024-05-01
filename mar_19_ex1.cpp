/*Create a class called time that has separate int member data for hours, minutes, and seconds.
 One constructor should initialize this data to 0,  and another should initialize it to fixed values.
  Another member function should display it, in 11:59:59 format and the overloaded + operator 
to add two times should add two objects of type time passed as arguments.
A main() program should create two initialized time objects and one that isn’t initialized. 
Then it should add the two objects together, leaving the result in the third time object Finally it 
should display the value of this third object*/
#include<iostream>
using namespace std;
class time
{
	int hours,minutes,seconds;
	public:
		time(int x,int y,int z)
		{
			hours=x;
			minutes=y;
			seconds=z;
		}
		time()
		{
			hours=0;
			minutes=0;
			seconds=0;
		}
		time operator +(time tt2)
		{
			time temp;
			temp.hours=hours+tt2.hours;
			temp.minutes=minutes+tt2.minutes;
			temp.seconds=seconds+tt2.seconds;
			return temp;
		}
		void show()
		{
			cout<<hours<<":"<<minutes<<":"<<seconds;
		}
};
main()
{
time t1(0,0,0);
time t2(11,59,59);
time t3=t1+t2;
t3.show();
}

