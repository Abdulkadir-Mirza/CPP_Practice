#include <iostream>
using namespace std;

class Base
{
    int x{},y{};
    public:
    Base(int i)
    {
        x=i;
        cout << "Base Constructor, value of x is: " << x << endl;
    }
    Base(int i,int j):Base{i}
    {
        y=j;
        cout << "Value of y is: " << y << endl;
    }
};



class Derived : public Base
{
    int i{};
    public:
    Derived(int x,int y): Base{x}, i{y}
    {
        cout << "Derived Class Constructor. Value y is: " << i << endl;
        cout << endl;
    }
};

int main()
{
    Base b(15);
    Base b1(10,20);
    Derived d(11,12);
    return 0;
}