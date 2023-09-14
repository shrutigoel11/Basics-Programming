//MULTILEVEL: one derived class from another derived class

#include <iostream>
using namespace std;

class Student
{
    protected:
    int r;
    public:
    void getroll(int x)
    {
        r=x;
    }
    void displayroll()
    {
        cout<<"Roll number: "<<r<<endl;
    }
};

class Test:public Student
{
protected:
int sub1,sub2;
public:
void getmarks(int s1,int s2)
{
    sub1=s1;
    sub2=s2;
}
void displaymarks()
{
    cout<<"Marks are: "<<sub1<<" "<<sub2<<endl; 
}
};

class Result:public Test
{
    int total;
    public:
    void sum()
    {
        total=sub1+sub2;
        cout<<"Total score: "<<total;
    }
};


int main()
{
Result R;
R.getroll(115);
R.displayroll();
R.getmarks(100,100);
R.displaymarks();
R.sum();

return 0;
}