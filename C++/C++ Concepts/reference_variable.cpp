//Reference is an additional datatype in c++
//Syntax: datatype &variable = variable ;

#include <iostream>
using namespace std;

int main()
{
int a=100, &b = a;  //b is reference variable whose value is equal to a ,any change in a changes b and vice versa; here & is not address it is reference
a=200;
cout<<a<<" "<< b<<endl;
b=300;
cout<<a<<" "<< b<<endl;
int &c=b;
cout<<a<<" "<< b<<" "<<c ;

return 0;
}