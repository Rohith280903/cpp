/*WAP to create a class student having dta members regno and cgpa initilise the value using parameterised constructor and create 3 objects
by taking values from the user third object must have same values of the second object*/
#include<iostream>
using namespace std;
class student
{
	int reg_no;
	float cgpa;
	public:
		student()
		{
			reg_no=12345;
			cgpa=7.8;
		}
		student(int a,float b)
		{
			reg_no=a;
			cgpa=b;
		}
		student(student &S)//copy constructor
		{
			cout<<"\ncopy";
			reg_no=S.reg_no;
			cgpa=S.cgpa;
		}
		void display()
		{
			cout<<"\nReg no is "<<reg_no<<"\n and CGP is "<<cgpa;
		}
};
main()
{
	student s1,s2(123456,908),s3(s2);
/*	student s2(12345,9.8);
	student s3(s2);*/
	s1.display();
	s2.display();
	s3.display();
	
}
