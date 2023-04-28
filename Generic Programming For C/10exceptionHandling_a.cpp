#include <iostream>
using namespace std;

int main()
{
    try
    {
        int a,b;
        cout<<"Enter two numbers :";
        cin>>a>>b;
        if(b==0)
        throw 0;
        else
        cout<<a/b;
    }
    
    catch(int x)
    {
       cout<<"Division not possible";
    }
  return 0;  
}