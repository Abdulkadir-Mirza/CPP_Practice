#include <iostream>
using namespace std;

class X
{
    int i{};
    public:
    X()
    {

    }
    X(int a):i(a)
    {
    }
    void showI()
    {
        cout << "Value of I is: " << i << endl;
     }
};

int main()
{
    int j{10};
    cout << "Value of J is: " << j << endl;
    X x1{};
    x1.showI();
    X x2{20};
    x2.showI();
    X x3{x2};
    x3.showI();

    return 0;
}