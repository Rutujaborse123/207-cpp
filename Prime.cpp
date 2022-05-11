Bytes
//program to check whether number is prime or not
#include<iostream.h>
#include<conio.h>
void main()
{
	int no,i,result=0;
	clrscr();
	cout<<"Enter the Number";
	cin>>no;
	cout<<"**********OUTPUT************\n";

	for(i=1;i<=no;i++)
	{
		if(no%i==0)
		{
			result++;
		}
	}

	if(result==2)
	{
		cout<<"Number is a Prime";
	}
	else
	{
		cout<<"Number is not a Prime";
	}


	getch();
}
© 2022 GitHub, Inc.
