//Static variable has a property i.e. it is default 0 and lifeline throughout the program.

#include <iostream>
using namespace std;

class Example
{
    static int count;
    int a;
    public:
    void getdata(int n)
    {
        a=n;
        count++;
    }
    void display()
    {
        cout<<count<<endl;
    }
};
int Example::count=10;

int main()
{
Example E;
E.display();
E.getdata(10);
E.display();
return 0;
}