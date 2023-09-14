//A constructor that copies one object values to other.
//syntax:
//classname obj2(obj1);
//or classname obj2=obj1;

#include <iostream>
using namespace std;

class Copy
{
    int a,b;
    public:
    Copy(int,int);
    void display()
    {
        cout<<a<<" "<<b<<endl;
    }
};

Copy::Copy(int x,int y)
{
        a=x,b=y;
}

int main()
{
Copy C1(10,20);
C1.display();
Copy C2=C1;
C2.display();

return 0;
}