#include <iostream>
using namespace std;

class Base
{
    int x,y;
    public:
    Base()
    {
        cout << "Base Constructor" << endl;
    }
    Base(int i)
    {
        x=i;
        cout << "Base Constructor, value of x is: " << x << endl;
    }
    Base(int i,int j)
    {
        x=i,y=j;
        cout << "Base Constructor, value of x is: " << x ;
        cout << " , Value of y is: " << y << endl;
    }
};



class Derived : public Base
{
    using Base::Base;
    public:
    Derived()
    {
        cout << "Derived Construtor" << endl;
    }
};

int main()
{
    Derived d; //Normal Implementation, first default constructor of Base class and then of Derived class will be called
    Derived d1(20); //Base class constrcutor matching given format will be called
    Derived d2(11,12); //Base class constrcutor matching given format will be called
    return 0;
}