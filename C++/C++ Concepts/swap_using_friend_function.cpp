#include <iostream>
using namespace std;

class Y;
class X
{
    int a;
    public:
    void get()
    {
        cout<<"Enter a value:";
        cin>>a;
    }
    friend int swap(X,Y);
};
class Y
{
    int b;
    public:
    void gets()
    {
        cout<<"Enter a value:";
        cin>>b;
    }
    friend int swap(X,Y);
};

int swap(X p ,Y q)
{
     cout<<"Before Swapping : "<<p.a<<" "<<q.b<<endl;
    int temp=p.a;
    p.a=q.b;
    q.b=temp;
    cout<<"After Swapping : "<<p.a<<" "<<q.b;
}

int main()
{
X x;
x.get();
Y y;
y.gets();
swap(x,y);

return 0;
}