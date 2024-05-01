#include<iostream>
using namespace std;
class Shape
{
	public:
		virtual void draw()=0;
};
class Circle:public Shape
{
	public:
		void draw()
		{
			cout<<"\nDrawing a circle";
		}
};
class Rectangle:public Shape
{
	public:
		void draw()
		{
			cout<<"\nDrawing a rectangle";
		}
};
main()
{
	Shape *sh;
	Circle cir;
	Rectangle rec;
	sh=&cir;
	sh->draw();
	sh=&rec;
	sh->draw();	
}
