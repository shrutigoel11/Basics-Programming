#include <iostream>
#include <vector>
using namespace std;

 int main()
 {
vector<int>v={1,2,3,4,5,6,7,8};
vector<int>::iterator it;
cout<<"Before removing even numbers:";
for(it=v.begin();it<v.end();it++)
{
    cout<<" "<<*it;
}
for(it=v.begin();it<v.end();it++)
{
if(*it%2==0)
{
    v.erase(it);
}
}
cout<<"\nAfter removing even numbers:";
for(it=v.begin();it<v.end();it++)
{
    cout<<" "<<*it;
}

    return 0;
 }