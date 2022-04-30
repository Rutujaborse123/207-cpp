#include<iostream.h>
#include<conio.h>
class demo
{
	 int x;
	 public:
	       demo()
	 {
	 cout<<"default constructer";
	 }

	 demo (int a)
	 {
	      x=a;
	      cout<<"constructer with one parameter"<<x<<endl;
	      cout<<"square of a:->"<<x*x<<endl;

	 }
	 demo (int a, int b)
	 {
	      cout<<"constucter with 2 paeameter"<<a<<"it"<<b<<endl;
	      cout<<"result of a+b:->"<<a+b<<endl;
	 }
	 demo (demo &d)
	 {
	 cout<<"copy constucter"<<endl;
	 x=d.x;
	 cout<<"copied value =>"<<x;
	 }
	 };

	 void main()
	 {
	 clrscr();
	 demo d1;
	 demo d2(10);
	 demo d3(20,30);

	 demo d4(d2);

	 getch();

}