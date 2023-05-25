#include <iostream>
using namespace std;

class Overload
{
    int a;
    public:
    void getdata(int x)
    {
        a=x;
    }
    void display()
    {
        cout<<a;
    }
    Overload operator ++()
        {
         Overload o;
         o.a=++a;
         return o;
        }
    
};

int main()
{
Overload O1,O2;
O1.getdata(20);
O2=++O1;
O2.display();

return 0;
}