//C++ implementation for Override and final 
#include <iostream>
using namespace std;

class Base {
public:
    // user wants to override this in the derived class
    virtual void func() 
    { 
        cout << "I am in base" << endl; 
    }

    // myfun is declared final so now in derived class we cannot have any redefinition of it
    virtual void myfun() final
    {
        cout << "myfun() in Base" << endl;
    }
};
 
class derived final: public Base // we have declared the class derived as final
{
public:
    // did a silly mistake by putting an argument "int a"
    // This will treat func as a new entity different from that in the base class
    /* 
    void func(int a)
    {
       cout << "I am in derived class" << endl;
    }
    */

    // did a silly mistake by putting an argument "int a"
    // Here the compiler will check for the function definition with the same signature in the base 
    // if it cannot find one; it will give compile error and programmer can know that we have made a mistake
    /*
    void func(int a) override
    {
       cout << "I am in derived class" << endl;
    }
    */

    void func() override
    {
        cout << "In Derived class, Override" << endl;
    }

    // This gives error as we have declared myfun() as final in the Base class
    /*
    void myfun()
    {
        cout << "trying to override base class virtual function " << endl;
    }
    */
};

// a 'final' class type cannot be used as a base class and we cant inherit from a class declared as final
/*
class derived2 : public derived
{

};
*/
 

int main()
{
    Base b;
    derived d;
    cout << "Compiled successfully" << endl;
    b.func();
    d.func();
    b.myfun();
    return 0;
}