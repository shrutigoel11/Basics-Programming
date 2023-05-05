#include <iostream>
#include <array>
using namespace std;

//fill():used to initialise all indexes of array with similar value

int main()
{
array<int,5>arr;
array<int,5>::iterator i;
arr.fill(10);
cout<<"Array elements are:";

for(i=arr.begin();i!=arr.end();i++)
{
    cout<<*i<<" ";
}

return 0;
}