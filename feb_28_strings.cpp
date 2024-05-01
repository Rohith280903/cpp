#include<iostream>
using namespace std;
main()
{
	string s1="123456";
	string s2="abcdef";
	cout<<"\ns1="<<s1;
	cout<<"\ns2="<<s2;
	s1.insert(2,s2);
	cout<<"\n\nInsert "<<s1<<"\n"<<endl;
	s1.replace(2,3,s2);
	cout<<"\nReplace "<<s1<<"\n"<<endl;
	s1.erase(3,2);
	cout<<"\nErase "<<s1<<endl;
	cout<<"\n\nSize= "<<s1.size()<<endl;
	cout<<"Length= "<<s1.length()<<endl;
	cout<<"Capacity= "<<s1.capacity()<<endl;
	cout<<"Max size= "<<s1.max_size()<<endl;
	cout<<(s1.empty() ? "yes":"no")<<endl;
}
