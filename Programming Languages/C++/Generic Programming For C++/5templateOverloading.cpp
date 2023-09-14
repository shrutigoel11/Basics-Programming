#include <iostream>
using namespace std;

template <class t>
t sum(t a, t b)
{
    return a+b;
}

template <class t>
t sum(t a, t b, t c)
{
    return a+b+c;
}

int main()
{
    cout<<"int sum : "<<sum(4,5)<<endl;
    cout<<"int sum : "<<sum(3,5,6)<<endl;

    return 0;
}