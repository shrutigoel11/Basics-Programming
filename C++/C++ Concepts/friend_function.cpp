#include <iostream>
using namespace std;

class Friends

{
int a,b;
public: 
friend void print(Friends);
};

void print(Friends f)
{
    f.a=10;
    f.b=20;
    cout<<f.a<<" " <<f.b;
}

int main()
{
Friends F;
print(F);


return 0;
}