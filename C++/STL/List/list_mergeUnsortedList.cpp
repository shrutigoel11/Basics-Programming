#include <iostream>
#include <list>
using namespace std;

int main()
{
list<int>l1={1,3,5,7};
list<int>l2={2,4,8,6};
list<int>::iterator i;
cout<<"List 1 elements: ";
for(i=l1.begin();i!=l1.end();i++)
{
    cout<<*i<<" ";
}
cout<<endl;
cout<<"List 2 elements:";
for(i=l2.begin();i!=l2.end();i++)
{
    cout<<*i<<" ";
}

l1.merge(l2);
cout<<endl;
cout<<"Unsorted merged list:";
for(i=l1.begin();i!=l1.end();i++)
{
    cout<<*i<<" ";
}

return 0;
}