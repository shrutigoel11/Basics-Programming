#include <iostream>
using namespace std;

template <class t>
class Test
{
    t a, b;

public:
    void get()
    {
        cin >> a >> b;
    }
    t sum()
    {
        return a+b;
    }
};
// template <class t>
// t Test<t>::sum(t a, t b)
// {
//     return a + b;
// }

int main()
{
    Test<int> T1;
    cout << "Enter two nos: ";
    T1.get();
    cout << "Sum: " << T1.sum();
    return 0;
}
