/*You are given a base class Shape which has two integer data members: width and height. You need to create 
two derived classes: Rectangle and Triangle, such that: 
 
Rectangle class should inherit from Shape. 
Triangle class should inherit from Rectangle. 
You need to implement appropriate constructors for each class and override the area() method in both
 Rectangle and Triangle classes to calculate the area of a rectangle and a triangle respectively. 
 
Input Format 
The input consists of two integers separated by space representing the width and height of the shape. 
 
Output Format 
Print the area of the corresponding shape. 
 
Sample Input 
 
4 5 
Sample Output 
 
20 
Explanation 
For the given input, a rectangle with width 4 and height 5 is formed. The area of this rectangle is 4 * 5 = 20. 
 
Constraints 
1 
= 
width 
, 
height 
= 
1000 
1=width,height=1000 
This problem assesses the understanding of multilevel inheritance, constructors, and method overriding in C++.*/
#include<iostream>
using namespace std;
class shape
{
	public:
		int width,height;
		void get_data()
		{
			cout<<"\nEnter width and height";
			cin>>width>>height;
		}
		virtual void area()=0;
};
class rectangle:public shape
{
 	public:
	 void area(int w,int h)
	{
	 	width=w;
	 	height=h;
		 cout<<"\narea of rectangle "<<width*height;
	}	
};
class triangle:public rectangle
{
	public:
	void area()
	{
	 	cout<<"\nArea of triangle"<<0.5*width*height;
	}		
};

main()
{
	rectangle r;
	r.get_data();
	r.area(5,4);
	
	triangle t;
	t.get_data();
	t.area();
}
