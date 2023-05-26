//functions declared with same name in base and derived class, access by base pointer pointing to objects;

#include <iostream>
using namespace std;

class A 
{
    public:
    void display()
    {
        cout<<"I am in base class"<<endl;
    }
    virtual void show()
    {
        cout<<"I am virtual in A"<<endl;
    }
};

class B:public A 
{
    public:
    void display()
    {
        cout<<"I am in derived class"<<endl;
    }
    void show()
    {
        cout<<"I am virtual in B"<<endl;
    }
};

int main()
{
A a1,*p;
p=&a1;
p->show();
p->display();
B b1;
p=&b1;
p->display();
p->show();

return 0;
}