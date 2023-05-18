#include <iostream>
using namespace std;

class Copy
{
    int a,b;
    public:
    Copy(int ,int);

    void display()
    {
        cout<<a<<" "<<b<<endl;
    }

};
 Copy::Copy(int x ,int y=200)
 {
    a=x;
    b=y;
 }

int main()
{
Copy C1(20);
C1.display();

return 0;
}