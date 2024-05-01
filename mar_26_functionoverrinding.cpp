/*Imagine a publishing company that markets both book and audiocassette versions of its
works. Create a class publication that stores the title (a string) and price (type float)
of a publication. From this class derive two classes: book, which adds a page count (type
int), and tape, which adds a playing time in minutes (type float). Each of these three
classes should have a getdata() function to get its data from the user at the keyboard,
and a putdata() function to display its data.
Write a main() program to test the book and tape classes by creating instances of them,
asking the user to fill in data with getdata(), and then displaying the data with putdata().*/

/*Start with the publication, book, and tape classes of Exercise 1. Add a base class sales
that holds an array of three floats so that it can record the dollar sales of a particular
publication for the last three months. Include a getdata() function to get three sales
amounts from the user, and a putdata() function to display the sales figures. Alter the
book and tape classes so they are derived from both publication and sales. An object
of class book or tape should input and output sales data along with its other data. Write
a main() function to create a book object and a tape object and exercise their input/output
capabilities.*/
#include<iostream>
 using namespace std;
 class publication
 {
 	public:
 		string title;
 		float price;
 		public:
 			void enter_title()
 			{
 				cout<<"Set title to the book and price";
 				cin>>title>>price;
			 }
 			void display_title()
 			{
 				cout<<"\nTitle of the book : "<<title<<"\nPrice of the book : "<<price;
			 }
 			
 };
 class book:public publication
 {
 	public:
		int pagecount;
		void set_page()
		{
			cout<<"\nEnter no of pages in the book";
			cin>>pagecount;
		}
		void display_page()
		{
			cout<<"\nNo of pages in the book : "<<pagecount;
		}
 };
 class tape:public book
 {
 	public:
 		float time;
 			void set_time()
		{
			cout<<"\nEnter duration of the casatte :";
			cin>>time;
		}
		void display_time()
		{
			cout<<"\nduration of the casatte is : "<<time<<" minutes\n";
		}
  };
    class sales:public publication
  {
  	public:
    float sales_data[3];

    void enter_sales_data()
    {
        cout << "Enter sales data for the last 3 months:" << endl;
        for (int i = 0; i < 3; i++)
        {
            cout << "Month " << i + 1 << ": ";
            cin >> sales_data[i];
        }
    }
     void display_sales_data()
    {
        cout << "Sales data for the last 3 months:" << endl;
        for (int i = 0; i < 3; i++)
        {
            cout << "Month " << i + 1 << ": " << sales_data[i] << endl;
        }
    }
  };
  main()
  {
  
  tape t;
  t.enter_title();
  
  t.set_page();
	t.set_time();

 
   cout<<"\nSales of the book";
  sales x;
  x.enter_sales_data();
  
 
  cout<<"\nSales of the casate";
  sales y;
	y.enter_sales_data();
	

   t.display_title();
  t.display_page();
  cout<<"\nSales of the book";
  x.display_sales_data();
  t.display_time();
  cout<<"\nSales of the casate";
  y.display_sales_data();
  
}
  
