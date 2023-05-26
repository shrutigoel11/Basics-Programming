//Abstract classes can have normal functions and variables along with pure virtual function.

#include <iostream>
using namespace std;

class Shape
{
    protected:
    int a,b;
    public:
    virtual void area()=0;
    void getdim(int x,int y)
    {
     a=x;
     b=y;
    }
};

class Rectangle:public Shape
{
public:
void area()
{
    int t=a*b;
    cout<<"Area of rectangle: "<<t;
}
};



int main()
{
Rectangle r;
r.getdim(20,60);
r.area();

return 0;
}