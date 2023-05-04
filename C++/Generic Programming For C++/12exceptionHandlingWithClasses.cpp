#include <iostream>
using namespace std;
 class Test
 {
    public:
    Test()
    {
    cout<<"I am Constructor."<<endl;
    }
    ~Test()
    {
    cout<<"I am Destructor."<<endl;
    }
    
 };
 int main()
 {
try
{
    cout<<"Welcome \n";
    Test T; //object created-->Constructor works
    throw 10; //Destructor works automatically before throwing value
}
catch(...)
{
    cout<<"END"<<'\n';
}


 }