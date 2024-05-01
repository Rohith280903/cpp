#include<iostream> 
using namespace std; 
class figure 
{ 
int side,length,breadth,radius; 
double pi; 
public: 
	void area(int s)//pass by value 
	{ 
		side=s; 
		cout<<"\narea of square"<<side*side; 
	} 
	void area(int *l,int *b)//pass by ref 
	{ 
		length=*l; 
		breadth=*b; 
		cout<<"\nARea of rectangle"<<length*breadth; 
	} 
	void area(int &r,double &p)//pass by address 
	{ 
		radius=r; 
		pi=p; 
		cout<<"\narea of circle "<<pi*radius*radius; 
	} 
}; 
main() 
{ 
	figure f; 
	int s,l,b,r; 
	double p; 
	cin>>s>>l>>b>>r>>p; 
	f.area(s); 
	f.area(&l,&b); 
	f.area(r,p); 
}
