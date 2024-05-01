/*Define a class named Movie.
Include private fields for
the title, year, and name of the director.
Include three public non inline functions with
setTitle,setYear,SetDirector
display all the information .*/
#include<iostream>
using namespace std;
class Movie
{
	char title[30],director[30];
	int year;
	public:	
	void setTitle();
	void setYear();
	void setDirector();
	void display()
	{
		cout<<"\nEnter movie details";
		cout<<"\n"<<title;
		cout<<"\n"<<director;
		cout<<"\n"<<year;
	}
}m1;
void Movie::setTitle()
{
	cout<<"\nEnter title";
	cin>>title;
}
void Movie::setYear()
{
	cout<<"\nEnter year";
	cin>>year;
}
void Movie::setDirector()
{
	cout<<"\nEnter director";
	cin>>director;
	
}
main()
{
	m1.setTitle();
	m1.setYear();
	m1.setDirector();
	m1.display();
}

