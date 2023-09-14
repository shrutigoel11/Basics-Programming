
//default of base and parameterized of derived ; access parameterized constructor of base?? DERIVED (int x,int y): BASE(x,y)

#include <iostream>
using namespace std;

class Base
{
    int a,b;
    public:
    Base()
    {
        cout<<"Constructor of base class"<<endl;
    }
    Base(int x,int y)
    {
        cout<<"Parameterized constructor of base class"<<endl;
        a=x;
        b=y;
        cout<<a<<" "<<b<<endl;
    }
};
class Derived:public Base
{
    int p,q;
    public:
    Derived()
    {
        cout<<"Constructor of derived class"<<endl;
    }
     Derived(int x,int y):Base (x,y)
    {
        cout<<"Parameterized constructor of derived class"<<endl;
        p=x;
        q=y;
        cout<<p<<" "<<q;
    }
};


int main()
{
Derived d(10,20);

return 0;
}