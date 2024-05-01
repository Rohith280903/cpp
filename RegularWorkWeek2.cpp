#include<conio.h>
#include<iostream>
using namespace std;
main()
{
	float hourlywage,hoursworked,withholdingpercentage;
	float totalwage,withholdingwage,netweeklywage;
	cout<<"Enter hourly wage and hours worked";
	cin>>hourlywage>>hoursworked;
	totalwage=hourlywage*hoursworked;
	cout<<"\nEnter withholding percentage";
	cin>>withholdingpercentage;
	cout<<"\nTotal week wage "<<totalwage;
	withholdingwage=totalwage*withholdingpercentage;
	netweeklywage=totalwage-withholdingwage;
	cout<<"\nGross weekly pay is"<<netweeklywage;
}
