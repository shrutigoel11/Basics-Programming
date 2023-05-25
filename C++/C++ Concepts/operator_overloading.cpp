#include <iostream>
using namespace std;

class User
{
private:
    long salary;
    string name;

public:
    string getName()
    {
        return this->name;
    }
    long getSalary()
    {
        return this->salary;
    }
    void setName(string name)
    {
        this->name = name;
    }
    void setSalary(long salary)
    {
        this->salary = salary;
        cout << this;
    }
};

int main()
{
    User usr;
    usr.setName("Shruti");
    usr.setSalary(100000);
    cout << "\nUser Name : " << usr.getName() << endl;
    cout << "User Salary : " << usr.getSalary() << endl;

    return 0;
}