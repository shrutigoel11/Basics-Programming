#include <iostream>
using namespace std;

template <class t>

class Example
{
    t a,b;
    public:
    Example(t x, t y)
    {
        a=x;
        b=y;
    }
    void display()
    {
        cout<<a << " "<< b;
    }
};

int main()
{
    Example <int> E1(10,20);
    E1.display();
    return 0;
}