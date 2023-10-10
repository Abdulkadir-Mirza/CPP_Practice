#include <iostream>
using namespace std;

int fun1() { return 10; }
char fun2() { return 'g'; }


int main()
{
    // auto a; this line will give error
    // because 'a' is not initialized at
    // the time of declaration
    // a=33;
 
    // see here x ,y,ptr are
    // initialised at the time of
    // declaration hence there is
    // no error in them
    auto x = 4;
    auto y = 3.37;
    auto ptr = &x;
    cout << typeid(x).name() << endl; //This will print the type of x i.e i for int
    cout << typeid(y).name() << endl; // d for double
    cout << typeid(ptr).name() << endl;

    decltype(fun1()) a;
    decltype(fun2()) b;
    auto p=fun1();
    auto q=fun2();
    cout << typeid(a).name() << endl;
    cout << typeid(b).name() << endl;
    cout << typeid(p).name() << endl;
    cout << typeid(q).name() << endl;
    return 0;
}