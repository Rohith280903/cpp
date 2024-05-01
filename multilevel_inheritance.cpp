//MULTI LEVEL INHERITANCE
#include<iostream>
using namespace std;
class A
{
	protected:
		int a;
		public:
			void set_A()
			{
				cout<<"enter value of a";
				cin>>a;
			}
			void display_A()
			{
				cout<<"\nValue of A="<<a;
			}
};
class B:public A
{
	protected:
	int b;
	public:
		void set_B()
			{
				cout<<"enter value of b";
				cin>>b;
			}
			void display_B()
			{
				cout<<"\nValue of B="<<b;
			}
		
};
class C:public B
{
	protected:
		int c;
		public:
			void set_C()
			{
				cout<<"enter value of c";
				cin>>c;
			}
			void display_C()
			{
				cout<<"\nValue of A="<<c;
			}
};
main()
{
/*	B b;
	b.set_A();
	b.set_B();
	b.display_A();
	b.display_B();*/
	C c;
	c.set_A();
	c.set_B();
	c.set_C();
	c.display_A();
	c.display_B();
	c.display_C();
	
}
