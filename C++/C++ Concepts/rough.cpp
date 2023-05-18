#include <iostream>
using namespace std;

class rough
{
int a,b;
public:
void getdata()
{
    a=10;
    b=20;
    cout<<a<<b;
}

};


int main()
{
rough r;
r.getdata();

return 0;
}