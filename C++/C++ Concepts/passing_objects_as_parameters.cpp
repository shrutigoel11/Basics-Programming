#include <iostream>
using namespace std;

class Example
{
int a;
public:
void getdata(int x)
{
    a=x;
}
int sum(Example,Example);

};
int Example::sum(Example e1,Example e2)
{
    int s=e1.a+e2.a;
    return s;
}


int main()
{
Example E1,E2,E3;
E1.getdata(10);
E2.getdata(20);
int t=E3.sum(E1,E2);
cout<<t;

return 0;
}



//NOTE:Here objects are treated as variables that we use in arguments
/*
e.g. sum(int x, int y) //here variables hold value of int type 
    
     sum(Example x,Example y ) as here variables are class variables that are variables of example class
*/