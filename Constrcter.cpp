//Constrcter
#include<iostream.h>
#include<conio.h>
class Demo
{
private:
	int count;
public:
       void init();
       void put();
       void inc();
};
void Demo::init()
{
    count=0;
}
void Demo::put()
{
    cout<<count<<endl;
}
void Demo::inc()
{
     count++;
}
void main()
{
clrscr();
    Demo FYBCAA,FYBCAB;
    FYBCAA.init();
    FYBCAA.inc();
    FYBCAA.inc();
    FYBCAA.put();

    FYBCAB.init();
    FYBCAB.inc();
    FYBCAB.inc();
    FYBCAB.put();
getch();
}
