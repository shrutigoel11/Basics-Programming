#include <iostream>
using namespace std;

class Base
{
    public:
    int a;
};

class Derived: private Base
{
int b;
public:
void get(int x , int y)
{
    a=x;
    b=y;
}
int multiply();
};
int Derived ::multiply()
{
    int t=a*b;
    cout<<"Multiplication is: "<<t;
 
}

int main()
{
Derived D;
D.get(10,30);
D.multiply();
return 0;
}