/*Define a class named GroceryItem.
Include private fields that hold an item’s
stocknumber, price, quantity in stock,and total value.
Write a public function named
dataEntry()that calls four private functions.
Three of the private functions prompt
the user for keyboard input for a value for
one of the data fields stock number, price,
and quantity in stock.
Include a fourth private function that calculates
the GroceryItem’s total value field
(price times quantity in stock).
Write a public function that displays a GroceryItem’s
values.
Finally, write a main()function that declares a GroceryItem object, assigns
values to its fields, and uses the display function. Save the file as Grocery.cpp*/
#include<iostream>
using namespace std;
class GroceryItem
{
	int stocknumber,price,quantity,totalvalue;
	public:
	void set_stocknumber()
	{
		cout<<"\n Enter stock number";
		cin>>stocknumber;
	}
	void set_price()
	{
		cout<<"\nEnter price";
		cin>>price;
	}
	void set_quantity()
	{
		cout<<"\nEnter quantity";
		cin>>quantity;
	}
	void total_value()
	{
		totalvalue=(price*quantity);
	}
	public:
		void dataentry()
		{
			set_stocknumber();
			set_price();
			set_quantity();
			total_value();
		}
	void display()
	{
		cout<<"\nItem details";
		cout<<"\t"<<stocknumber<<"\t"<<price<<"\t"<<quantity<<"\t"<<totalvalue;
	}
}g1;
main()
{
	g1.dataentry();
	g1.display();	
}
