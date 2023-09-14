// One derived class several base class; combination of existing classes as start for new class

#include <iostream>
using namespace std;

class A
{
protected:
    int a;

public:
    void geta(int x)
    {
        a = x;
    }
};

class B
{
protected:
    int b;

public:
    void getb(int y)
    {
        b = y;
    }
};

class C:public A, public B
{
public:
void product()
{
    cout<<"Product is: "<<a*b<<endl;
}
};

int main()
{
C c1;
c1.geta(20);
c1.getb(20);
c1.product();
    return 0;
}