#include <iostream>
#include <vector>
using namespace std;


int main()
{
vector <int> v={1,2,3,4,5,6};
vector<int>::iterator it;
for(it=v.begin();it<v.end();it++)
{
    cout<<*it<<" ";
}
cout<<"\nMax Size: \n"<<v.max_size();
cout<<"\nBefore resizing : "<<v.size();
v.resize(5);
cout<<"\nAfter resizing : "<<v.size();
return 0;
}