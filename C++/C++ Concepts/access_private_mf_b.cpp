#include <iostream>
using namespace std;

class user
{
    int age;
    char name[20];
    void display();
    public:
        void getdata()
    {
        cout<<"Enter age and name:";
        cin>>age>>name;
        display();
    }

};
void user::display()
{
    
        cout<<"Age and Name is: "<<age<<" "<<name;
    
}
int main()
{
user u;
u.getdata();

return 0;
}