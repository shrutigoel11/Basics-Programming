#include <iostream>
using namespace std;

class example
{
    int a, b;

public:
    void getdata(int x, int y)
    {
        a = x;
        b = y;
    }
    void putdata()
    {
        cout << a <<" "<< b;
    }
    int compare();
};

int example::compare()
{
    if (a > b)
        return a;
    else
        return b;
}

int main()
{
    example e;
    e.getdata(10, 30);
    e.putdata();
    int max = e.compare();
    cout << "\n"<<max;

    return 0;
}