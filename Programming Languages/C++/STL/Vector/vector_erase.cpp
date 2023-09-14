//erase removes elements from specified position while clear deletes all the elements

#include <iostream>
#include <vector>
using namespace std;


int main()
{
vector <int> v={1,2,3,4,5};
vector<int>::iterator it1,it2;
it1=v.begin();
it2=v.end();
it2--;
v.erase(it1,it2);
for (auto it = v.begin(); it != v.end(); ++it)
{
cout << ' ' << *it;
}

return 0;
}


/*Note:
for (vector<int>::iterator it = s.begin(); it!=s.end(); it++) {
    cout << *it << endl;
}
It is same as

for (auto it = s.begin(); it != s.end(); it++) {
    cout << *it << endl;
}*/