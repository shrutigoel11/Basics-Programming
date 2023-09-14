//Same as pre increment but we write classname operator op (int)
#include <iostream>
using namespace std;

class Overload
{
    int a;
    public:
    void getdata(int x)
    {
        a=x;
    }
    void display()
    {
        cout<<a<<endl;
    }
    Overload operator ++(int)
        {
         Overload o;
         o.a=a++;
         return o;
        }
    
};

int main()
{
Overload O1,O2;
O1.getdata(20);
O1.display();
O2=O1++;
O1.display();
O2.display();
return 0;
}