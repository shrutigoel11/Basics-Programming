#include <array>

#include <iostream>
using namespace std;
int main()
{
array<int, 5> a = {1, 2, 3, 4, 5};
array<int,5>:: iterator it;
cout << "Sizes of array "<< a.size();
cout << "\nThe array elements : ";
for (it=a.begin();it!=a.end();it++)
cout << *it << " ";
return 0;
}