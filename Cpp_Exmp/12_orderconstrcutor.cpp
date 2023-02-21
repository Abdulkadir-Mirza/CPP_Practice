#include <iostream>
using namespace std;

class A
{
public:
    A()
    {
        cout << "Class A" << endl;
    }
    ~A()
    {
        cout << "Destroying object of A" << endl;
    }
};

class B
{
public:
    B()
    {
        cout << "Class B" << endl;
    }
    ~B()
    {
        cout << "Destroying object of B" << endl;
    }
};

class C:public A,public B
{
public:
    C()
    {
        cout << "Class C" << endl;
    }
    ~C()
    {
        cout << "Destroying object of C" << endl;
    }
};


int main()
{
    C objC;
    return 0;
}