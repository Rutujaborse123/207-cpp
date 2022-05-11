//program to demostrate class and array
#include<iostream.h>
#include<conio.h>
class student
{
private:
	int rollno;
	char sname[20];
	char sclass[20];
public:
	void get();
	void put();
};
void student ::get()
{
	cout<<"Enter roll no:-";
	cin>>rollno;
	cout<<"Enter Student Name:-";
	cin>>sname;
	cout<<"Enter Student class:-";
	cin>>sclass;
}
void student::put()
{
	cout<<rollno<<"\t\t"<<sname<<"\t\t"<<sclass<<endl;
}
void main()
{       int i;
	clrscr();
	student s[2];
	for(i=0;i<2;i++)
	{
	  s[i].get();
	}

	cout<<"*****************************************\n";
	cout<<"Rollno\t\tName\t\tClass"<<endl;
	cout<<"******************************************\n";
	for(i=0;i<2;i++)
	{
	  s[i].put();
	}
