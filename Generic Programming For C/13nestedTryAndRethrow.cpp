#include <iostream>
using namespace std;
int main()
{
try
{
    cout<<"Outer try block"<<endl;
    try                         //NESTED TRY BLOCK
    {
       cout<<"Inner try block"<<endl;
       throw 10;
    }
    catch(int x)
    {
    cout<<"Inner catch block"<< '\n';
    throw x; //RETHROW
    }
    
}
catch(int  y)
{
   cout<<"Outer catch block";
}






    return 0;
}