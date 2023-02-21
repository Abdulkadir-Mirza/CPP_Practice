#include <iostream>
using namespace std;

class Base
{
    private:
        int a=10;// a is private here so it cannot be accessed from anywhere outside this class.
    protected:
        int b=20;// b is protected and can be accessed from the inherited classes.
    public:
        int c=30;
    
};

class Derv1:protected Base
{
    private:
        //int d=a;
        int e=b;
    protected:
        void Display()
        {
            cout << " " << b << " " << c << endl;
        }
    public:/*
        void Display1()
        {
            cout << a << " " << b << " " << c << endl;
        }
        Gives Error:
        16_inheritance.cpp: In member function ‘void Derv1::Display1()’:
        16_inheritance.cpp:28:21: error: ‘int Base::a’ is private within this context
            28 |             cout << a << " " << b << " " << c << endl;

        */
        void DisplayAll()
        {
            cout << " " << b << " " << c << endl;
        }
};

class Derv2:private Base
{
    public:
        void DisplayAll()
        {
            cout << " " << b << " " << c << endl;
        }
};

class Derv3:public Base{
    public:
    /*
        void DisplayAll()
        {
            cout << a << " " << b << " " << c << endl;
        }
        a is not accesible in public inheritance also because private data type scope is within its class only.
        */
       void DisplayAll()
        {
            cout << " " << b << " " << c << endl;
        }
};


int main()
{
    Derv1 Obj;
    //cout << Obj.c << endl; Protected data members cannot be directly accessed from the main, we can access them via some methods.
    Obj.DisplayAll();
    Derv2 Obj2;
    //cout << Obj2.c; This is inaccessible because in Private inheritance all the data memebers and functions of the Parent class becomes private within its context.
    Obj2.DisplayAll();
    Derv3 Obj3;
    cout << Obj3.c << endl;
    Obj3.DisplayAll();
    return 0;
}