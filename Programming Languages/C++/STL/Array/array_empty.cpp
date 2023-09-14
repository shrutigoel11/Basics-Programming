#include <iostream>
#include <array>
using namespace std;

//determines whether array is empty or not

int main()
{
array <int , 5> a={1,2,3,4,5};
array<int,5>:: iterator it;
cout << "The array a elements: ";
for (it=a.begin();it!=a.end();it++)
cout << *it << " ";
if(a.empty()==1)
cout<<"\nThe array is empty ";
else
cout<<"\nThe array is not empty ";

return 0;
}
