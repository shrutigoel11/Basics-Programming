#include <iostream>
#include <vector>
using namespace std;

//push_back(Element) ----> v={1,2,3,4}

 int main()
 {
   vector <int> v;
   cout<<"Capacity of vector is: "<<v.capacity()<<endl; //o/p "Capacity of vector is: 0"
   cout<<"Size of vector is: "<<v.size()<<endl; //o/p "Size of vector is: 0"
   v.push_back(1);
   cout<<"Capacity of vector is: "<<v.capacity()<<endl; //o/p "Capacity of vector is: 1"
   cout<<"Size of vector is: "<<v.size()<<endl; //o/p "Size of vector is: 1"
   v.push_back(2);
   cout<<"Capacity of vector is: "<<v.capacity()<<endl; //o/p "Capacity of vector is: 2"
   cout<<"Size of vector is: "<<v.size()<<endl; //o/p "Size of vector is: 2"
   v.push_back(3);
   cout<<"Capacity of vector is: "<<v.capacity()<<endl; //o/p "Capacity of vector is: 3"
   cout<<"Size of vector is: "<<v.size()<<endl; //o/p "Size of vector is: 3"
   v.push_back(4);
   cout<<"Capacity of vector is: "<<v.capacity()<<endl; //o/p "Capacity of vector is: 4"
   cout<<"Size of vector is: "<<v.size()<<endl; //o/p "Size of vector is: 4"

    return 0;
 }