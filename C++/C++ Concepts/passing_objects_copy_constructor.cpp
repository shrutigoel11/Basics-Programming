#include <iostream>
using namespace std;

class Copy
{
    int a,b;
    public:
    Copy(int ,int);
    Copy(Copy &m)
    {
        a=m.a;
        b=m.b;
    }
    void display()
    {
        cout<<a<<" "<<b<<endl;
    }

};
 Copy::Copy(int x ,int y)
 {
    a=x;
    b=y;
 }

int main()
{
Copy C1(10,20);
Copy C2(C1);
C1.display();
C2.display();

return 0;
}