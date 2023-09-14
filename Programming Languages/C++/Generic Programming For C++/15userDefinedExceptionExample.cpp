#include <iostream>
#include <exception>
using namespace std;

class MyException : public exception
{
    virtual const char * what() const throw()
    {
        return "Marks exceeded";
    }
};

int main()
{
int a;
cout<<"Enter marks: "<<endl;
cin>>a;
MyException E;
try
{
    {
        if(a>75)
        throw E;
    }   
}
catch(exception & e)
{
    cout<< e.what() << '\n';
}

return 0;
}