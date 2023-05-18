/*Destructor is an entity that destroys the objects data cretaed by constructor
syntax: ~class_name(); no return type no return values;decalared in public*. Destructor destructs  the memory,Constructor constructs memory*/





#include <iostream>
using namespace std;

int count =0;

class Alpha
{
    public:
    Alpha()
    {
        count++;
        cout<<"\nObject Created : "<<count;
    }
    ~Alpha()
    {
        cout<<"\nObject Destroyed : "<<count;
        count--;
    }
};

int main()
{
Alpha A1,A2,A3;


return 0;
}