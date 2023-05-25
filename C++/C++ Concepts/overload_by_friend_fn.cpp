#include <iostream>
using namespace std;

class Example
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
    friend Example operator +(Example  ,Example  );
};
Example operator +(Example e1,Example e2)
{
    Example e3;
    e3.a=e1.a+e2.a;
    e3.b=e1.b+e2.b;
    return e3;
}

int main()
{
Example P,Q,R;
P.getdata(10,20);
Q.getdata(20,50);
R=P+Q;
R.display();

return 0;
}