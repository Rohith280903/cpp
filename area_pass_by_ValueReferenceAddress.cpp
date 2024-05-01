#include<iostream>
using namespace std;

class figure
{
    int side, length, breadth, radius;
    double pi;
public:
    void area(int s) // pass by value
    {
        s++;
		side = s;
        cout << "\narea of square " << side * side;
    }
    
    void area(int& l, int& b) // pass by reference
    {
        l++;
	    length = l;
        breadth = b;
        cout << "\nArea of rectangle " << length * breadth;
    }
    
    void area(int *r, double* p) // pass by address
    {
        radius = *r;
        pi = *p;
        cout << "\nArea of circle " << pi * radius * radius;
    }
};

int main()
{
    figure f;
    int s, l, b, r;
    double p;
    cin >> s >> l >> b >> r >> p;
    f.area(s);
    cout<<"\nArea of square out of function"<<s*s;//value is not effected after functiion value is changed
    f.area(l, b);
    cout<<"\nArea of rectangle out of function"<<l*b;//value is changed after the function value inside and out of function remain same
    f.area(&r, &p); // pass the address of p
    return 0;
}

