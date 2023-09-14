#include <iostream>
using namespace std;

class Overload
{
    int a,b;

    public:
    void getdata(int x,int y)
    {
        a=x;
        b=y;
    }
    void display()
    {
        cout<<a<<" "<<b<<endl; 
    }
    Overload operator +(Overload e)
    {
        Overload e1;
        e1.a=a+e.a;
        e1.b=b+e.b;
        return e1;
    }
};


int main()
{
Overload P,Q,R;
P.getdata(20,40);
Q.getdata(30,40);
P.display();
Q.display();
R=P+Q;
R.display();
return 0;
}