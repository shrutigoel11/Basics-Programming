//operator overloaded with multiple jobs;way to implement compile time polymorphism

#include <iostream>
using namespace std;

class Example
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
    cout<<a<<" "<<b<<endl;
}
Example sum(Example e)
{
    Example e1;
    e1.a=a+e.a;
    e1.b=b+e.b;

    return e1;
}

};

int main()
{
Example A,B,C;
A.getdata(10,30);
B.getdata(20,60);
A.display();
B.display();
C=A.sum(B);
C.display();

return 0;
}