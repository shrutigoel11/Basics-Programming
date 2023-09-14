/*
USER DEFINED EXCEPTIONS: has two segments:
1/ inherit exception class;
2/override what() function in exception class;
NOTE: Header File: <exception>
*/

#include <iostream>
#include <exception>
using namespace std;

class MyException : public exception
{
    virtual const char * what() const throw()
    {
        return "Exception Handling";
    }
};

int main()
{
MyException E;
try
{
throw E;
}
catch(exception & except)
{
    cout<<except.what();
}

return 0;
}