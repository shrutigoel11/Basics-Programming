#include <iostream>
#include <vector>
using namespace std;

int main()
{
vector <int> v={1,2,3,4,5};
vector<int>::iterator it;

cout<<"Before pop_back():\n";
for(it=v.begin();it<v.end();it++)
{
    cout<<*it<<" ";
}

v.pop_back();

cout<<"\nAfter pop_back():"<<endl;
for(it=v.begin();it<v.end();it++)
{
    cout<<*it<<" ";
}

return 0;
}