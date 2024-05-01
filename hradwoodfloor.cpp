/*Write a C++ program that prompts the user to enter the number of hours required to
install a hardwood floor. Display the number of complete eight-hour work days required
for the job, as well as the remaining hours needed in the last day. Compute and display
the total cost of the job at $200 per day plus $40 per hour for any partial day.*/
#include<conio.h>
#include<iostream>
using namespace std;
int main()
{
	float days,dayrem,pay;
	int hours;
	cout<<"Enter no of hours needed to install the hardwood floor";
	cin>>hours;
	days = (hours / 8);
	dayrem = (hours % 8);
	if(dayrem==0)
	{
		pay=days*200;
		cout<<"Total pay for the"<<hours<<"hours work is $"<<pay;
	}
	else
	{
		pay=(days*200)+(dayrem*40);
		cout<<"Total pay for the"<<hours<<"hours work is $"<<pay;
	}
}
