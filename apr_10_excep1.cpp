/*WRITE A PROGRAM TO FIND IF A PERSON IS VALID TO VOTE OR NOT,IF LESS THEN 18 SHOULD ARISE 
AND EXCEPTION STATING NOT VALID*/
#include<iostream>
using namespace std;
main()
{
	int age;
	cout<<"\nEnter age of the person to vote";
	cin>>age;
	try
	{
		if(age<18)
		throw 'a';
		else
		{
			cout<<"\nYou are eligible to vote";
		}
	}
	catch(char)
	{
		cout<<"\you are not eligible to vote";
	}
}
