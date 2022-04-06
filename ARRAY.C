#include<iostream.h>
#include<conio.h>
class emp
{
char[20],dept[40],add[40],gen[7];
int sal,age;

public:
	void get();
	void put();
	};
	void emp::get()
	{
	cout<<"name of employes \n";
	cin>>name;
	cout<<"name of department \n";
	cin>>dept;
	cout<<"enter the address of employes";
	cin>>add;
	cout<<"salary of employes \n";
	cin>>sal;
	cout<<"age of employes \n";
	cin>>age;
	cout<<"enter the gender of employes \n";
	cin>>gen;
	cout<<"\n\n";
	}
	void emp::put()
	{
	cout<< "\n name \t"<<name<<"\n department \t"<<dept<<"\n age\t"<<"\n address \t"<<add<<"\n salary \t"<<sal<<"\n gender\t"<<gen;
	}
	void main()
	{
	clrscr();
	int i,no;
	//cout<<"enter the number of employes";
	//cin>>no;
	//emp e[no]
	cout<<"rnter the detail of three employes\n";
	emp e[3];
	for(i=0;i<3;i++)
	{
	e[i].get();
	clrscr();
	}
	cout<<"\n\t detals of employes \n\n";
	for(i=0;i<3;i++)
	{
	c[i].put();
	cout<<"\n";
	}
	getch();
	}