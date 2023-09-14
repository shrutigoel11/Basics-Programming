//way to implement run time polymorphism ,function not overidden multiple times,not possible without inheritance.
//redefinition of base class in derived class with same return type nad parameters.
/*

SYNTAX: 

class Base
{
    access modifier:
    //overridden function
    return type fn_name();
}
class Derived:public Base
{
    access modifier:

ACCESS?? Base::fun_name();

    //overridden function
    return type fn_name();
}

int main()
{
ACCESS?? object.Base::func_name();
}

*/

#include <iostream>
using namespace std;

class Base
{
    public:
    void display()
    {
        cout<<"I am in base class"<<endl;
    }
};

class Derived:public Base
{
public: 
void display()
{
    cout<<"I am in derived class"<<endl;
}
};


int main()
{
Derived D;
D.Base::display();
D.display();

return 0;
}