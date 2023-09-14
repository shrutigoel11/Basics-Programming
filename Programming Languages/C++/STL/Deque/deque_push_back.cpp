#include <iostream>
#include <deque>
using namespace std;

//adds elements to end 

int main()
{
deque<int>d1;
deque<int>::iterator i;
d1.push_back(10);
d1.push_back(20);
d1.push_back(30);
for(i=d1.begin();i!=d1.end();i++)
{
    cout<<*i<<" ";
}

return 0;
}