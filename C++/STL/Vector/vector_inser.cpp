#include <iostream>
#include <vector>
using namespace std;

//syntax:vector_name(position,value);

int main()
{
vector<int>v={1,2,3,4,5};
vector<int>::iterator it;

cout<<"Before insertion:\n";
for(it=v.begin();it<v.end();it++)
{
    cout<<*it<<" ";
}
v.insert(v.begin(),0);
cout<<"\nAfter insertion:\n";
for(it=v.begin();it<v.end();it++)
{
    cout<<*it<<" ";
}
v.insert(v.end(),6);
cout<<"\nAfter insertion:\n";
for(it=v.begin();it<v.end();it++)
{
    cout<<*it<<" ";
}

    return 0;
}