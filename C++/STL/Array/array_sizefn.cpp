#include <iostream>
#include <array>
using namespace std;

int main()
{
array <int , 10> a;

cout<<a.size()<<endl;
// total num of indexes

cout<<a.max_size()<<endl;
// total num of indexes

cout<<sizeof(a);
// total size of array

return 0;
}