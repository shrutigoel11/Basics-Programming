#include <iostream>
using namespace std;

class user
{
    int age;
    char name[20];
    void getdata()
    {
        cout<<"Enter age and name:";
        cin>>age>>name;
    }
    public:
    void display()
    {
        getdata();
        cout<<"Age and Name is: "<<age<<" "<<name;
    }
};

int main()
{
user u;
u.display();

return 0;
}