#include <iostream>
using namespace std;

template <class t>
t sum( t a, t b)
{
    return a+b;
}

int main()
{
    cout<<"int sum: "<<sum(5,9)<<endl;
    cout<<"float sum: "<<sum(2.0,7.0)<<endl;
    cout<<"double sum: "<<sum(2.432,6.356)<<endl;
}