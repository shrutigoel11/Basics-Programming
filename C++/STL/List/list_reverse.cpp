#include <iostream>
#include <list>
using namespace std;

int main()
{
list<int>l1={1,3,5,7};
list<int>::iterator i;
cout<<"List: ";
for(i=l1.begin();i!=l1.end();i++)
{
    cout<<*i<<" ";
}
cout<<endl;
cout<<"Reversed list: ";
l1.reverse();
for(i=l1.begin();i!=l1.end();i++)
{
    cout<<*i<<" ";
}

return 0;
}
