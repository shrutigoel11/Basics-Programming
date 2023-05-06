#include <iostream>
#include <map>
using namespace std;

int main()
{
map<int,int>m;
map<int,int>::iterator i;;
m.insert(pair<int,int>(1,2));
m.insert(pair<int,int>(2,3));
m.insert(pair<int,int>(3,4));
cout<<"\tKEY\tVALUE";
for(i=m.begin();i!=m.end();i++)
{
    cout<<"\n\t"<<(*i).first<<"\t"<<(*i).second;
}

return 0;
}