#include <iostream>
#include <stack>
using namespace std;

//used to add elements to a stack (at the top)

int main()
{
stack <int> s;
s.push(1);
s.push(2);
cout<<"Size of stack: "<<s.size()<<endl; //size()-->gives size of stack
cout<<"Top element: "<<s.top()<<endl;  //top()-->determines top element
s.pop();
cout<<"After Pop: " <<s.top()<<endl;    //pop()--->removes top element
if(s.empty()==1)                       //empty()-->determines whether stack is empty or not (1-->empty && 0-->not empty)
{
    cout<<" Stack is empty";
}
else
{
    cout<<"Stack is not empty";
}


return 0;
}