#include <iostream>
using namespace std;

template <class T1, class T2>
class Test
{
    T1 a;
    T2 b;
    public:
    void get(T1 x, T2 y)
    {
        a=x;
        b=y;
    }
    void display()
    {
        cout<<a<<" " <<b;
    }
};
int main()
{
    Test <int,int> t;
    t.get(10,40);
    t.display();
    return 0;
}