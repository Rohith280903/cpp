/*Imagine a publishing company that markets both book and
audiocassette versions of its
works. Create a class publication that stores the title
(a string) and price (type float)
of a publication.
From this class derive two classes: book, which adds a page count (type
int), and tape, which adds a playing time in minutes (type float).
Each of these three
classes should have a getdata() function to get its
data from the user at the keyboard,
and a putdata() function to display its data.
getdata()and putdata must be pure virtual function in base class.
Write a main() program to test the book and tape classes by creating instances of them,
asking the user to fill in data with getdata(), and then displaying the data with putdata().*/
#include<iostream>
using namespace std;
class publications
{
	public:
		string title;
		float price;
		virtual void get_data()=0;
		virtual void put_data()=0;
};
class book:public publications
{
	public:
		int count;
		void get_data()
		{
			cout<<"\nEnter title of the book and price";
			cin>>title>>price;
			cout<<"\nEnter no of pages in the book";
			cin>>count;		
		}
		void put_data()
		{
			cout<<"\nTitle : "<<title<<"\nPrice : "<<price<<"\nPage count : "<<count;
		}
};
class tape:public publications
{
	public:
		int time;
		void get_data()
		{
			cout<<"\nEnter title of the tape and price";
			cin>>title>>price;
			cout<<"\nEnter  total run time in minutes";
			cin>>time;		
		}
		void put_data()
		{
			cout<<"\nTitle : "<<title<<"\nPrice : "<<price<<"\nTime in min : "<<time;
		}
};
main()
{
	publications *ptr;
	book b;
	tape t;
	ptr=&b;
	ptr->get_data();
	cout<<"\nDetails of the book:";
	ptr->put_data();
	ptr=&t;
	ptr->get_data();
	cout<<"\nDetails of the tape:";
	ptr->put_data();	
}

