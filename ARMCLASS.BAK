#include<iostream.h>
#include<conio.h>
class arm
{
private:
	int n,rev,rem,temp;
public:
	void get ();
	void cal();
	void put();

};
void arm::get()
{
cout<<"\nEnter the number:";
cin>>n;
}
void arm::cal()
{
	rev=0;
	temp=n;
	while(n!=0)
	{
	rem=n%10;
	rev=rev+rem*rem*rem;
	n=n/10;
	}
	}
void arm::put()
{
	if(temp==rev)
	{
	cout<<"The num is armstrong";
	}
	else
	{
	cout<<"The num is not armstrong";
	}
	}
void main()
{
clrscr();
arm a1;
a1.get();
a1.cal();
a1.put();
getch();
}

