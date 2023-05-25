//Ambiguity arises when the base class and derived class members have same name;
//firstly derived class member invoked , we can invoke base class by ::
/*

SYNTAX: obj.class_name::fun_name();

*/

#include <iostream>
using namespace std;

class A
{
    public:
    void display()
    {
        cout<<"I am in base class"<<endl;
    }
};

class B: public A
{
   public:
   void display()
   {
    cout<<"I am in derived class"<<endl;
   }
};

int main()
{
B B1;
B1.display(); //DERIVED CLASS INVOKED
B1.A::display();
B1.B::display();
return 0;
}