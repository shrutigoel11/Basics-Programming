#include <iostream>
using namespace std;

class Overloading
{
    int a,b;
    public:
    void sum();
    int sum(int , int);
};
void Overloading::sum()
{
    cout<<"Enter a and b: ";
    cin>>a>>b;
    cout<<"Sum is: "<<a+b<<endl;
}
int Overloading::sum(int x , int y)
{    
int s=x+y;
cout<<"Sum is:" <<s;
}


int main()
{
Overloading O1;
O1.sum();
Overloading O2;
O2.sum(10,39);

return 0;
}