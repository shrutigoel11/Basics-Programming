#include <iostream>
#include <vector>
using namespace std;

int main()

{

vector<int> v;
vector<int>::iterator it;
v.assign(9, 1);
cout << "The content are: " << endl;
for(it=v.begin();it<v.end();it++)

cout<<*it<<" ";

return 0;
}

/*
vectorname.assign(int size, int value)

Parameters: 
size - number of values to be assigned
value - value to be assigned to the vectorname
*/