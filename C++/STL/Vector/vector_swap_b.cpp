#include <iostream>
#include <vector>
using namespace std;


int main()
{
vector<int> v1 = {1, 2, 3};
vector<int> v2 = {4, 5, 6};
vector<int>::iterator i;
cout << "\nvector 1 before swapping:\n";
for (i = v1.begin(); i < v1.end(); i++)
{
cout << *i << " ";
}
cout << "\nvector 2 before swapping:\n";
for (i = v2.begin(); i < v2.end(); i++)
{
cout << *i << " ";
}

swap(v1, v2);

cout << "\nvector 1 after swapping:\n";
for (i = v1.begin(); i < v1.end(); i++)
{
cout << *i << " ";
}
cout << "\nvector 2 after swapping:\n";
for (i = v2.begin(); i < v2.end(); i++)
{
cout << *i << " ";
}


return 0;
}