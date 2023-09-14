#include <iostream>
#include <deque>
using namespace std;

//empty()-->deletes all elements

int main()
{
deque<int> D1;
deque<int>::iterator it;
D1.push_back(10);
D1.push_back(20);
D1.push_back(30);
cout << "The elements of the Deque: \n";
for (it = D1.begin(); it != D1.end(); it++)
{
cout << *it << endl;
}
cout << "The deque is empty: " << D1.empty();

return 0;
}