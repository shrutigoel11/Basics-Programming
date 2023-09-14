#include <iostream>
using namespace std;

struct office
{
int id;
char name[19];
void getdata()
{
cout<<" Enter id: ";
cin>>id;
cout<<" "<<"Enter name: ";
cin>>name;
}
void display()
{
    cout<<" "<<"ID and Name is: "<<id<<" "<<name;
}
}s;

int main()
{
s.getdata();
s.display();
return 0;
}