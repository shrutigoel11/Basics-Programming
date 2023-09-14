#include <iostream>
#include <deque>
using namespace std;


int main()
{
deque<int>d1;
deque<int>::iterator i;
d1.push_back(10);
d1.push_back(20);
d1.push_back(30);

cout<<"Deque elements are: ";
for(i=d1.begin();i!=d1.end();i++)
{
    cout<<*i<<" ";
}
cout<<endl;
cout<<"Max size of deque: "<<d1.max_size();

return 0;
}