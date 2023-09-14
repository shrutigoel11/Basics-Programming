#include <iostream>
using namespace std;

template <class t>
t sum(t a[] , int size)
{
    t s=0;
    for(int i =0;i<size; i++)
    {
        s=s+a[i];
    }
    return s;
}

int main()
{
    int x[]={10,20,30,40,50};
  cout<<"int sum: "<<sum(x,5)<<endl;
}