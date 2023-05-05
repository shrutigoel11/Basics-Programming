#include <iostream>
#include <deque>
using namespace std;

//adds elements to front

int main()
{
deque<int>d1;
deque<int>::iterator i;
d1.push_back(10);
d1.push_back(20);
d1.push_back(30);
cout<<"Before push_front(): ";
for(i=d1.begin();i!=d1.end();i++)
{
    cout<<*i<<" ";
}
cout<<"\nAfter push_front(): ";
d1.push_front(40);
d1.push_front(50);
for(i=d1.begin();i!=d1.end();i++)
{
    cout<<*i<<" ";
}

return 0;
}