/*

Abstract class is a class having atleast one pure virtual function(i.e. a virtual function having no definition)
Syntax: virtual void func_name() = 0;

Abstract classes act as base class hence objects of abstract class can not be made, 
A pure virtual virtual function must be defined inside the derived otherwise the derived class beomes abstrac too. 

*/

#include <iostream>
using namespace std;

class A
{
    public:
    virtual void display()=0;  //Abstract class having one pure virtual function 
};

class B:public A
{
    public:
    void display()
    {                            
    cout<<"Derived class"<<endl;    // if the pure virtual function is not defined B also becomes abstract class.
    }
};

int main()
{
// A a1;
// a1.display();   --> shows error as object of abstract class is not possible

B b1;
b1.display();

//Abstract classes can not be instantiated but pointers can be created;
A *P;
P=&b1;
P->display();
return 0;
}