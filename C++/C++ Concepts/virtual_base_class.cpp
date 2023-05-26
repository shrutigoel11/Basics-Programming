/*
When in hybrid Class A is inherited by two derived classes B1,B2 and further inherited by D , D has A copies of A;
ambiguity arises and compiler gets confused and error is produced;

To resolve this we declare base class as virtual base class that act as indirect base class that provides single copy throughout;
no matter how many different paths are taken;

SYNTAX:  

class A
{
    ....
}
class B1 : virtual public A
{
    ....
}
class B2 : virtual public A
{
    ....
}
class D : public B1,public B2
{
    ....
}

NOTE: virtual keyword can be used before or after the public:
*/

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

class Test:virtual public Student
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

class Sports: virtual public Student
{
 protected:
 int score;
 public:
 void getscore(int y)
 {
    score=y;
 }
 void displayscore()
 {
    cout<<"Score is: "<<score<<endl;
 }
};

class Result:public Test,public Sports
{
    int total;
    public:
    void sum()
    {
        total=sub1+sub2+score;
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
R.getscore(100);
R.displayscore();
R.sum();

return 0;
}