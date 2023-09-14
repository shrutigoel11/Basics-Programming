#include <iostream>
#include <map>
using namespace std;

//Multimap have sorted key property that allows to sort values automatically according to key

int main()
{
multimap<int,int>m;
multimap<int,int>::iterator itr;;
m.insert(pair<int,int>(1,10));
m.insert(pair<int,int>(3,30));
m.insert(pair<int,int>(2,20));
m.insert(pair<int,int>(5,20));
m.insert(pair<int,int>(5,50));
cout<<"\tKEY\tVALUE";
for(itr=m.begin();itr!=m.end();itr++)
{
    cout<<"\n\t"<<(*itr).first<<"\t"<<(*itr).second<<'\n';
}
//REMOVE UPTO SPECIFIC KEY

m.erase(m.begin(), m.find(3));
cout << "\nThe M after removal of elements less than key=3 is : \n";
cout << "\tKEY\tELEMENT\n";
for (itr = m.begin(); itr != m.end(); ++itr)
{
cout << "\t" << itr->first;
cout << "\t" << itr->second << '\n';
}
//REMOVE WITH KEY==5
cout << "\nThe M after removal of elements key=5 is : \n";
cout << "\tKEY\tELEMENT\n";
m.erase(5);
for (itr = m.begin(); itr != m.end(); ++itr)
{
cout << "\t" << itr->first;
cout << "\t" << itr->second << '\n';
}


return 0;
}