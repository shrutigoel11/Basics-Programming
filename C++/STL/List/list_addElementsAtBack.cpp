#include <iostream>
#include <list>
using namespace std;

int main()
{
list <int>l1={1,2,3};
{
    l1.push_back(100);
}
for(auto i=l1.begin();i!=l1.end();i++)
{
    cout<<*i<<" ";
}


return 0;
}