#include <iostream>
using namespace std;

template <class T1,class T2>
float sum(T1 a, T2 b)
{
    return a+b;
}

int main()
{
    cout<<"int sum: "<<sum(5,9)<<endl;
    cout<<"float sum: "<<sum(2.0,7.0)<<endl;
    cout<<"int,float sum: "<<sum(5,9.2)<<endl;
    cout<<"float,int sum: "<<sum(2.9,7)<<endl;
    return 0;
}