//Using virtual base class in inheritance to avoid ambiguity.
#include<iostream>
using namespace std;

class A
{
    public:
        int i;
};

//Inheriting class virtually
class B: virtual public A
{
    public:
        int j;
};

//Inheriting class virtually
class C: virtual public A
{
    public:
        int k;
};

class D: public B,public C
{
    public:
        int sum;
};

int main()
{
    D ob;
    ob.i=10;
    ob.j=20;
    ob.k=30;
    ob.sum=ob.i+ob.j+ob.k;
    cout << ob.sum << endl;
    return 0;
}