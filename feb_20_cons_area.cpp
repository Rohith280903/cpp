#include<iostream>
using namespace std;
class figure
{
	int length,breadth,side,radius;
	float pi;
	public:
		figure()//default constructor
		{
			length=5;
			breadth=10;
			radius=6;
			side=4;
			pi=3.14;
		}
		void  area()//default values taken from default constructor
		{
			int area_sqr=side*side;
			int area_rectangle=length*breadth;
			float area_circle=pi*radius*radius;
			cout<<"\nArea of square  "<<area_sqr;
			cout<<"\nArea of rectangle  "<<area_rectangle;
			cout<<"\nArea of circle  "<<area_circle;
		}
		void  user_area(int s,int l,int b,int r)//parameterised constructor
		{
			length=l;
			side=s;
			breadth=b;
			radius=r;
			int area_sqr=side*side;
			int area_rectangle=length*breadth;
			float area_circle=pi*radius*radius;
			cout<<"\nArea of square  "<<area_sqr;
			cout<<"\nArea of rectangle  "<<area_rectangle;
			cout<<"\nArea of circle  "<<area_circle;
		}		
};
main()
{
	figure f1,f2;
	cout<<"\nDefault constructor values\n";
	f1.area();
	cout<<"\n\nUser given decleration\n";
	f1.user_area(5,10,20,6);
}
