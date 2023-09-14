#include <iostream>
using namespace std;

class Example
{
int a,b;
public:
void getdata(int x, int y)    //arguments 
{
    a=x;
    b=y;
}
void display();

};
void Example::display()
{
    cout<<"Sum is :"<<a+b;
}

int main()
{
Example E;
E.getdata(10,20);   //Giving values to arguments
E.display();

return 0;
}