#include <iostream>
#include <list>
using namespace std;

int main()
{
list<int>l1;
list<int>::iterator i;
cout<<"Push front:";
//push_front adds elements to front

for(int i=1;i!=5;i++)
{
    l1.push_front(i);
}
for(i=l1.begin();i!=l1.end();i++)
{
    cout<<" "<<*i;
}

return 0;
}