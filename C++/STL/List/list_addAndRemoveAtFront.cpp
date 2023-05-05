#include <iostream>
#include <list>
using namespace std;

int main()
{
list <int>l1={1,2,3};
list <int>::iterator i;
cout<<"Before adding: ";
for(i=l1.begin();i!=l1.end();i++)
{
    cout<<*i<<" ";
}
cout<<endl;
cout<<"After adding : ";
{
    l1.push_front(100);
}
for(i=l1.begin();i!=l1.end();i++)
{
    cout<<*i<<" ";
}
cout<<endl;
cout<<"After removing: ";
l1.pop_front();
for(i=l1.begin();i!=l1.end();i++)
{
    cout<<*i<<" ";
}

return 0;
}