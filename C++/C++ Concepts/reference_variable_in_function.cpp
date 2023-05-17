#include <iostream>
using namespace std;

int swap(int &a ,int &b)
{
int temp=a;
a=b;
b=temp;
}
int main()
{
int a=10 ,b=20 ;
cout<<"Before swap: "<<a<<" "<<b<<endl; 
swap(a,b);
cout<<"After swap: "<< a<< " " <<b;

    return 0;
}