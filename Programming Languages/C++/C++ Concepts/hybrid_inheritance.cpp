//Combo of two or more inheritance
//example: multilevel add score of sports also 

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

class Sports
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