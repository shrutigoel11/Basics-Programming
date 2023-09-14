#include <iostream>
using namespace std;

int main()
{
try
{
   cout<<"Exception Handling\n";
   throw 8.3; 
    
}
catch(...)  //Catches any value of any datatype
{
    cout<<"Catched thrown value " << '\n';
}

return 0;
}