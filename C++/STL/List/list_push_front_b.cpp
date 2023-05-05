/*rand() function is an inbuilt function in C++ STL, which is defined in header file <cstdlib>.
rand() is used to generate a series of random numbers. 
*/

#include <iostream>
#include <cstdlib>
#include <list>
using namespace std;

void display(list<int>l)
{
    list<int>::iterator i;
    for(i=l.begin();i!=l.end();i++)
    {
        cout<<*i<<" ";
    }
}
int main()
{
list<int> list1; // Empty list of zero length
list<int> list2(3); // Empty list of size 5
for(int i=0;i<3;i++)
{
list1.push_back(rand()/100);
}
list<int>::iterator i;
for(i=list2.begin();i!=list2.end();i++)
{
*i = rand()/100;
}
cout<<"List 1: ";
display(list1);
cout<<endl;
cout<<"List 2: ";
display(list2);
return 0;
}