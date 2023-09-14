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
    cout<<"Sum: " <<a<<" "<<b;
}
Test sum(Test);
};

Test Test::sum(Test x)
{
    Test t3;
    t3.a=a+x.a;
    t3.b=b+x.b;
    return t3;
}

int main()
{
Test T1,T2,T3;
T1.putdata();
T2.putdata();
T3=T1.sum(T2);
T3.display();
return 0;
}