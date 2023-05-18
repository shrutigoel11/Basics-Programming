#include <iostream>
using namespace std;

class Example
{
    int a;
    public:
    void getdata()
    {
        cout<<"Enter value:";
        cin>>a;
    }
    int compare(Example,Example);
};
int Example::compare(Example e1,Example e2)
{
    int s;
if(e1.a>e2.a)
{
    s=e1.a;
}
else
{
s=e2.a;
}
return s;
}
int main()
{
Example E1,E2,E3;
E1.getdata();
E2.getdata();
int t=E3.compare(E1,E2);
cout<<t<<" is greater";

return 0;
}