#include <iostream>
using namespace std;

class Over
{
    int a,b;
    public:
    Over();
    Over(int x,int y)
    {
        a=x;
        b=y;
    }
    void display()
    {
        cout<<a<<" "<<b<<endl;
    }

};

    Over::Over()
    {
        cout<<"Enter a and b: ";
        cin>>a>>b;
    }

int main()
{
Over O1;
O1.display();
Over O2(20,60);
O2.display();

return 0;
}