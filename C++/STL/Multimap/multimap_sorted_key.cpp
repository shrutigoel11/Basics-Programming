#include <iostream>
#include <map>
using namespace std;

//Multimap have sorted key property that allows to sort values automatically according to key

int main()
{
multimap<int,int>m;
multimap<int,int>::iterator i;;
m.insert(pair<int,int>(1,10));
m.insert(pair<int,int>(3,30));
m.insert(pair<int,int>(2,20));
cout<<"\tKEY\tVALUE";
for(i=m.begin();i!=m.end();i++)
{
    cout<<"\n\t"<<(*i).first<<"\t"<<(*i).second;
}

return 0;
}