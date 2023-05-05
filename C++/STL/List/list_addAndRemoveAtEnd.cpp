#include <iostream>
#include <list>
using namespace std;



int main()
{
list<int> l1={1,2,3,4,5};
list<int>::iterator i;
cout<<"\nThe list elements ";
for(i=l1.begin();i!=l1.end();i++)
{
cout<<*i<<" ";
}
l1.push_back(100);
cout<<"\nAfter adding an element from the end ";
for(i=l1.begin();i!=l1.end();i++)
{
cout<<*i<<" ";
}
l1.pop_back();
cout<<"\nAfter removing element from the end ";
for(i=l1.begin();i!=l1.end();i++)
{
cout<<*i<<" ";
}



return 0;
}