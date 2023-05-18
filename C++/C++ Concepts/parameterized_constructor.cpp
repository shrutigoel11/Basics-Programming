#include <iostream>
using namespace std;

class Sample
{
int a,b;
public:
Sample(int ,int);
void display();

};

Sample::Sample(int x, int y)
{
    a=x;
    b=y;
}
void Sample::display()
{
    cout<<"Values of a and b: "<<a<< " "<<b;
}

int main()
{
//Sample S= Sample(10,30); S.display(); //Explicitly calling constructor;
Sample P(30,60);
P.display();

return 0;
}