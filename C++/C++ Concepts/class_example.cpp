#include <iostream>
using namespace std;

class car
{
char model[10];
char color[10];
public:
void getdata();
void display();
};


void car::getdata()
{
    cout<<"Enter model name:";
    cin>>model;
    cout<<"Enter color: ";
    cin>>color;
}
void car::display()
{
    cout<<"Your car model and color is: "<<endl;
    cout<<"Model: "<<model<<" "<<"Color: "<<color;
}

int main()
{
car c;
c.getdata();
c.display();

return 0;
}