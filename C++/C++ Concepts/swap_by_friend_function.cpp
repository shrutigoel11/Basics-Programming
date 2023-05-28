#include <iostream>
using namespace std;

class Example;
class Data
{
private:
   int a;
public:
   void get(int x)
   {
    a=x;
   }
   friend void swap(Example,Data);
};
class Example
{
private:
int b;
public:
void getdata(int y)
{
    b=y;
}
friend void swap(Example,Data);
};

void swap(Example e, Data d)
{
    int t;
    t=e.b;
    e.b=d.a;
    d.a=t;
    cout<<e.b<<" "<<d.a;
}


int main()
{
Example E;
E.getdata(10);
Data D;
D.get(20);
swap(E,D);
return 0;
}