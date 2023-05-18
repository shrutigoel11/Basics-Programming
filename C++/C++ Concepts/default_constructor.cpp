#include <iostream>
using namespace std;

class construct
{
    int a,b;
    public:
    construct() //default constructor
    {
        a=10;
        b=20;
    }
    void display();
};
void construct::display()
{
    cout<<"Constructor initialised values of a and b as :"<<a<<" "<<b<<endl;
}
int main()
{
construct c;
c.display();

return 0;
}