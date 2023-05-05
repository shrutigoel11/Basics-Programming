#include <iostream>
#include <array>
using namespace std;
int main()
{
array<string, 2> a = {"a","b"};
array<string,2>:: iterator it;
cout << "Size of array "<< a.size();
cout << "\nThe array elements : ";
for (it=a.begin();it!=a.end();it++)
cout << *it << " ";
return 0;
}