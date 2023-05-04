#include <iostream>
using namespace std;

template <class t>

class Swap
{
    t a,b;
    public:
    void getdata(t x , t y)
    {
        a=x;
        b=y;
        cout<<"Before swapping : "<<a <<" "<<b;
    }
    void swap()
    {
        t d =a;
        a=b;
        b=d;
        cout<<"After swapping: "<<a<<" "<<b;
    }
};
int main()
{
    Swap <int> S1;
    S1.getdata(10,20);
    S1.swap();

    return 0;


}
