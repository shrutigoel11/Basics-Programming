#include <iostream>
using namespace std;

class Overload
{
int a,b;
public:
void getdata(int x,int y)
{
    a=x;
    b=y;
}
void display()
{
    cout<<a<<" "<<b;
}
Overload operator =(Overload &o)
{
    a=o.a;
    b=o.b;
}
};

int main()
{
Overload O1,O2;
O1.getdata(10,20);
O1=O2;
O2.display();
return 0;
}