#include <iostream>
using namespace std;

class Bank
{
int id;;
public:
void getdata( )
{
    cout<<"Enter id: ";
cin>>id;
}
void display()
{
    cout<<"ID:"<<id<<endl;
}
};

int main()
{
int n;
cout<<"Enter no. of account holders:";
cin>>n;
Bank B[n];
for(int i=0;i<n;i++)
{
    B[i].getdata();
}
for(int i=0;i<n;i++)
{
    B[i].display();
}


return 0;
}