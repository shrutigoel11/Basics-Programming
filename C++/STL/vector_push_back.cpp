#include <iostream>
#include <vector>
using namespace std;

 int main()
 {
  vector<int>v;
  for (int i = 0; i < 7; i++)
  {
    v.push_back(i);
  }
  for (int i:v)                /*for ( range_declaration : range_expression )*/
  {
    cout<<" "<<i<<endl;
  }

  cout << "Output of begin and end Function: "<<endl;

  for (auto i = v.begin(); i < v.end(); i++)
  {
  cout << *i << " "<<endl;
  }

    return 0;
 }