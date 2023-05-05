#include <iostream>
#include <algorithm> //to sort we need to include this header file
#include <array>
using namespace std;

int main()
{
array <int,5> arr={1,5,2,4,3};
array <int,5>::iterator i;
cout<<"Array elements: ";
for(i=arr.begin();i!=arr.end();i++)
{
    cout<<*i<<" ";
}
cout<<endl;
sort(arr.begin(),arr.end());
cout<<"Array elements after sorting:";for(i=arr.begin();i!=arr.end();i++)
{
    cout<<*i<<" ";
}

return 0;
}