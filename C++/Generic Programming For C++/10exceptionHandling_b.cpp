#include <iostream>
using namespace std;

int main()
{
    try
    {
        cout<<"Before throw\n";
        throw 4;
        cout<<"After throw\n";
    }
    catch(int x)
    {
      cout<<x<<" is printed. "<<endl;
    }
    cout<<"Try Catch Executed.";

    return 0; 
}
