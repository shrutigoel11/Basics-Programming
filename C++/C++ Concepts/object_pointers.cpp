//Creating objects to pointer is used in run time polymorphism
//late binding as function linked to class much later and dynamic binding as selection of appropriate function is done dynamically at run time

#include <iostream>
using namespace std;

class A
{
    public:
    void display()
    {
        cout<<"I am a function"<<endl;
    }
};

int main()
{
A a1,*p;
p = &a1;
p->display();
(*p).display();

return 0;
}