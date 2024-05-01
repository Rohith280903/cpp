/*Create a structure called employee that contains two members: an employee number
(type int) and the employee’s compensation (in dollars; type float). Ask the user to fill
in this data for three employees, store it in three variables of type struct employee, and
then display the information for each employee.*/
#include<iostream>
using namespace std;
struct employee
{
	int e_num;
	float ecomp;
}e1,e2,e3;//e[3] array of strcut variables
main()
{
	cout<<"\nEnter the employee 1 number and compensation";
	cin>>e1.e_num>>e1.ecomp;
	cout<<"\nEnter the employee 2 number and compensation";
	cin>>e2.e_num>>e2.ecomp;
	cout<<"\nEnter the employee 3 number and compensation";
	cin>>e3.e_num>>e3.ecomp;
	cout<<"\n Employee 1-- number = "<<e1.e_num<<"\tcompensation = "<<e1.ecomp;
	cout<<"\n Employee 2-- number = "<<e2.e_num<<"\tcompensation = "<<e2.ecomp;
	cout<<"\n Employee 3-- number = "<<e3.e_num<<"\tcompensation = "<<e3.ecomp;
}
/*#include<iostream>
using namespace std;

struct employee{
int emp_num;
float emp_comp;
};

int main()
{
employee e[3];//array of structure variables
for(int i=1;i<=3;i++)
{
cout<<"\nenter the value of "<<i<<" student";
cin>>e[i].emp_comp>>e[i].emp_num;
}
for(int i=1;i<=3;i++)
{
cout<<"\ value of "<<i<<" student";
cout<<e[i].emp_comp<<"\n"<<e[i].emp_num;
}

}
*/
