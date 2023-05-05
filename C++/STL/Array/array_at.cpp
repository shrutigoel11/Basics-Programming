#include <iostream>
#include <array>
using namespace std;


int main()
{
array <int , 5> a={1,2,3,4,5};
array<int,5>:: iterator it;
cout << "\nThe array a elements: ";
for (it=a.begin();it!=a.end();it++)
cout << *it << ' ';
cout<<"\nThe element a[2]: "<<a.at(2);

return 0;
}