#include <iostream>
#include <array>
using namespace std;

int main()
{
array <int,4>arr;
cout<<"Array size: "<<arr.size()<<endl;
cout<<"Array elements: ";
for(auto i:arr)
{
    cout<<i<<" ";
}

return 0;
}