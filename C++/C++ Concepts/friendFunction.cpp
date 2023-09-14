//A non member function that can access private members of a class, declared in class defined outside like normal function and invoked also;
//TAKES OBJECTS AS ARGUMENTS AND WHEN WE ACCESS PRIVATE MEMBERS THROUGH FRIEND FN WE USE obj.memeber;


#include <iostream>
using namespace std;

class Bank

{
int id , salary;
public: 
friend void print(Bank);
};

void print(Bank b)
{
    b.id=10;
    b.salary=200000;
    cout<<b.id<<" " <<b.salary;
}

int main()
{
Bank B;
print(B);


return 0;
}