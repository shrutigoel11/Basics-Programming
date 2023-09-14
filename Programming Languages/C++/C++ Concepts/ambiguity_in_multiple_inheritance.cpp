// Member of both bases class have member with same name;

#include <iostream>
using namespace std;

class A
{
public:
    void display()
    {
        cout << "Class A" << endl;
        ;
    }
};

class B
{
public:
    void display()
    {
        cout << "Class B" << endl;
    }
};

class C : public A, public B
{
public:
    void display()
    {
        A::display();
        B::display();
    }
};

int main()
{
    C c1;
    c1.display();

    return 0;
}