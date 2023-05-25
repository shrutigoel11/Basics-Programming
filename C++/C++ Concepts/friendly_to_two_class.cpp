#include <iostream>
using namespace std;

class ABC;
class XYZ
{
int a;
public:
void get()
{
   cout<<"Enter a value :";
   cin>>a; 
}
friend void compare(XYZ,ABC);
};
class ABC
{
int b;
public:
void gets()
{
   cout<<"Enter a value :";
   cin>>b; 
}
friend void compare(XYZ,ABC);
};

void compare(XYZ p,ABC q)
{
    if(p.a>q.b)
    {
        cout<<p.a<<" is greater";
    }
    else{
        cout<<q.b<< " is greater";
    }
}

int main()
{
XYZ X;
X.get();
ABC A;
A.gets();
compare(X,A);

return 0;
}