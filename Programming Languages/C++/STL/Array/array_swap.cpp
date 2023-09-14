#include <iostream>
#include <array>
using namespace std;

int main()
{
array <int , 5> a1={1,2,3,4,5};
array <int , 5> a2={10,20,30,40,50};
array<int,5>:: iterator it;
cout << "\nThe array a1 elements before swapping : ";
for (it=a1.begin();it!=a1.end();it++)
cout << *it << " " ;
cout << "\nThe array a2 elements before swapping : ";
for (it=a2.begin();it!=a2.end();it++)
cout << *it << " ";

a1.swap(a2);//swap array elements

cout << "\nThe array a1 elements after swapping : ";
for (it=a1.begin();it!=a1.end();it++)
cout << *it <<" ";
cout << "\nThe array a2 elements after swapping: ";
for (it=a2.begin();it!=a2.end();it++)
cout << *it << " ";
return 0;
}