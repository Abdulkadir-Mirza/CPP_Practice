#include <iostream>
using namespace std;

int global{};
int& foo()
{
   return global;
}

int main()
{
    decltype(foo()) a = foo(); //a is an `int&`
    auto b = foo(); //b is an `int`
    b = 2;

    cout << "a: " << a << '\n'; //prints "a: 0"
    cout << "b: " << b << '\n'; //prints "b: 2"

    decltype(foo()) c = foo(); //c is an `int&`
    c = 10;

    cout << "a: " << a << '\n'; //prints "a: 10"
    cout << "b: " << b << '\n'; //prints "b: 2"
    cout << "c: " << c << '\n'; //prints "c: 10"
 }