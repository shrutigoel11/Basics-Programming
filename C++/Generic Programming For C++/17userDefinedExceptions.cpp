#include <iostream>
#include <exception>
using namespace std;

class MyException : public exception
{
    const char * what() const throw()
    {
        return "MARKS EXCEEDED";
    }
};

int main()
{
int internal,external;
cout<<"Enter internal and external marks: ";
cin>>internal>>external;
MyException E;
try
{
    if(internal > 30 && external > 70)
    throw E ;

}
catch(exception & e)
{
    cout << e.what() << '\n';
}


return 0;
}