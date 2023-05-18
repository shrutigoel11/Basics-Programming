#include <iostream>
using namespace std;

class Test
{
int a,b;
public:
void putdata()
    {
    cout<<"Enter a and b:";
    cin>>a>>b;
    }
void display()
{
    cout<<"Multiplication is: "<<a<<" "<<b;
}
Test product(Test);
};
  
Test Test::product(Test mul)  
{
    Test c;
    c.a=a * mul.a;
    c.b=b * mul.b;
    return c;
}

int main()
{
Test T1,T2,T3;
T1.putdata();
T2.putdata();
T3=T1.product(T2);
T3.display();
return 0;
}