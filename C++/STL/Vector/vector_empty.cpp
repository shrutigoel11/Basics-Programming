#include <iostream>
#include <vector>
using namespace std;

int main()
{
vector <int> v;  // if v={1,2,3} o/p 1,2,3 vector is not empty
vector<int>::iterator it;
for(it=v.begin();it<v.end();it++)
{
cout<<*it<<" ";
}
if(v.empty()==1)
cout<<"\nVector is empty";
else
cout<<"\nVector is not empty";


return 0;
}