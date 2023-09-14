#include <iostream>
using namespace std;

class Test
{
int id,marks[6];
char name[30];
public:
void getdata();
void display();

};

void Test::getdata()
{
    cout<<"Enter id and name:";
    cin>>id>>name;
    for(int i=0;i<6;i++)
    {
       cout<<"Enter marks:";
       cin>>marks[i];
    }
}
void Test::display()
{
    cout<<"\n";
    cout<<"ID:"<<id<<endl;
    cout<<"Name:"<<name<<endl;
for(int i=0;i<6;i++)
cout<<"\n" <<"Marks: "<<marks[i];
}

int main()
{
Test t;
t.getdata();
t.display();

return 0;
}