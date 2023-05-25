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
         Overload o1;
         o1.a=a++;
         return o1;
        }
            Overload operator ++()
        {
         Overload o2;
         o2.a=++a;
         return o2;
        }
    
};

int main()
{
Overload O1,O2,O3;
O1.getdata(20);
O1.display();
O2=O1++;
O1.display();
O2.display();
O3=++O1;
O3.display();
return 0;
}