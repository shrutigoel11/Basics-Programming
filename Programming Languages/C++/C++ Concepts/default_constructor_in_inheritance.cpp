//Constructors are special member function with same name as of class they are used in inheritance,
/*
note: 
when object of derived class is created the default constructor of base class is invoked then derived class constructor

when base class has constructor with no arguments it is not neccessary for constructor in derived to have arguments
but if parameterized constructor in base then it is compulsory to have parameterized constructor in derived
*/

#include <iostream>
using namespace std;

class Base
{
    public:
    Base()
    {
        cout<<"Constructor of base class"<<endl;
    }
};
class Derived:public Base
{
    public:
    Derived()
    {
        cout<<"Constructor of derived class"<<endl;
    }
};


int main()
{
Derived d;

return 0;
}