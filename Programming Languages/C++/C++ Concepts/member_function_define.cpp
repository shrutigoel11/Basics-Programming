// member functions can be defined in two ways: inside and outside the class

#include <iostream>
using namespace std;

class car
{
char model[10];
char color[10];
public:
void getdata()    //------>INSIDE DEFINITION OF MF
{
    cout<<"Enter model name:";
    cin>>model;
    cout<<"Enter color: ";
    cin>>color;
}
void display();       
};
void car::display()        //------>OUTSIDE DEFINITION OF MF
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