#include <iostream>
#include <map>
using namespace std;

int main()
{
map<int,int>m{{1,2},{3,4},{4,5}};
map<int,int>::iterator i;
cout<<"Key:Value = ";
for(i=m.begin();i!=m.end();i++)
{
    cout<<" "<<(*i).first<<":"<<(*i).second;
}


return 0;
}