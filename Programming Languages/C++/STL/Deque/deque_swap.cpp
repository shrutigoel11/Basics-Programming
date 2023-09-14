#include <iostream>
#include <deque>
using namespace std;

int main()
{
deque<int> D1 = {1, 2, 3, 4, 5};
deque<int> D2 = {10, 20, 30, 40, 50};
deque<int>::iterator it;

cout << "The elements of the Deque D1 before swapping: \n";
for (it = D1.begin(); it != D1.end(); it++)
{
    cout << *it << " ";
}

cout << "\nThe elements of the Deque D2 before swapping: \n";
for (it = D2.begin(); it != D2.end(); it++)
{
    cout << *it << " ";
}
D1.swap(D2);

cout << "\nThe elements of the Deque D1 after swapping: \n";
for (it = D1.begin(); it != D1.end(); it++)
{
    cout << *it << " ";
}

cout << "\nThe elements of the Deque D2 after swapping: \n";
for (it = D2.begin(); it != D2.end(); it++)
{
    cout << *it << " ";
}

return 0;
}