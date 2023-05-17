#include <iostream>
using namespace std;

int sum(int x=1, int y =2, int z=3);
int main()
{
cout<<sum(10,20,30)<<endl;
cout<<sum(10,20);

return 0;
}

int sum(int x,int y, int z)
{
    return x+y+z;
}