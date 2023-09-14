#include <iostream>
using namespace std;

class Base
{
public:
void getdata()
{
    cout<<"This is a base class"<<endl;
}
};

class Derived : public Base
{

//public of base class becomes public of derived
public:
void display()
{
    cout<<"This is a derived class"<<endl;
}
};

int main()
{
Derived D;
D.getdata();
D.display();

return 0;
}