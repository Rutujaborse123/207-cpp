#include<iostream.h>
#include<conio.h>
class value
{
	int sales,purchase;
    public:
	void readvalue()
	{
		cout<<"\n enter purchase value:";
		cin>>purchase;
		cout<<"\n enter the sales value:";
		cin>>sales;
	}
	void display()
	{
		cout<<"\n sales value is:"<<sales;
		cout<<"\n purchase is:"<<purchase;
	}
	friend class business;
};
class business
{
	int income;
	public:
	void profit(value v)
	{
		income=v.sales-v.purchase;
	}
	void show()
	{
		if(income<0)
		cout<<"\n loss is:\t"<<income;
		else
		cout<<"\n profit is:\t"<<income;
	}
};
void main()
{
	clrscr();
	value v1;
	business b1;
	v1.readvalue();
	v1.display();
	cout<<"\n business:";
	b1.profit(v1);
	b1.show();
	getch();
}

