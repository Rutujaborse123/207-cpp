#include <iostream.h>
#include<conio.h>
void swap (int,int);
void main()
{
	int a,b;
	clrscr();

	cout<<"Enter the value of A:-";
	cin>>a;
	cout<<"Enter the value of B:-";
	cin>>b;

	cout<<"Before swapping:-";
	cout<<a<<"\t"<<b<<endl;

	swap(a,b);
	cout<<"After swapping"<<endl;
	cout<<a<<"\t"<<b<<endl;
	getch();
	}
	 void swap(int x, int y)
	 {
	 int temp;
	 temp=x;
	 x=y;
	 y=temp;
	 }
© 2022 GitHub, Inc.
Terms
Privacy
Se
