/*imagine a publishing company that markets both book and audiocassette versions of its works.
Create a class publication that stores the title (a string) and price (type float) of a publication.
From this class derive classe: book, which adds a page count (type int),
Tape inherited from book, which adds a playing time in minutes (type float).
Each of these three classes should have a getdata() function to get its data 
from the user at the keyboard, and a putdata() function to display its data. 
Write a main() program to test the book and tape classes by creating instances of them,
 asking the user to fill in data with getdata(), and then displaying the data with putdata()*/
 #include<iostream>
 using namespace std;
 class publication
 {
 	public:
 		string title;
 		float price
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
		void set_page();
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
 		
  } 
