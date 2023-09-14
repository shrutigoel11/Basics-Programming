#include <iostream>
#include <map>
using namespace std;

int main()
{
map<int,int>m;
m.insert({1,2});
m[2]=3;
m.insert(pair<int,int>(3,4));
cout<<"KEY:VALUE=";
for(auto i:m)
{
    cout<<" "<<i.first<<":"<<i.second;
}

return 0;
}