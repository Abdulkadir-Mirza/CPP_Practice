#include <iostream>
#include <type_traits>
using namespace std;

struct A { double x; };
const A* a;
 
decltype(a->x) y;       // type of y is double (declared type)
decltype((a->x)) z = y; // type of z is const double& (lvalue expression)
 
template<typename T, typename U>
auto add(T t, U u) -> decltype(t + u) // return type depends on template parameters
{
    return t + u;
}

int main()
{
    int i = 33;
    decltype(i) j = i * 2;
 
    cout << "i and j are the same type? " << boolalpha << endl;
 
    cout << "i = " << i << ", "
              << "j = " << j << endl;
 
    auto f = [](int a, int b) -> int
    {
        return a * b;
    };
 
    decltype(f) g = f; // the type of a lambda function is unique and unnamed
    i = f(2, 2);
    j = g(3, 3);
 
    cout << "i = " << i << ", " << "j = " << j << endl;

    auto z=add(3,4.5);
    cout << "Addition is: " << z << endl;

    return 0;
}