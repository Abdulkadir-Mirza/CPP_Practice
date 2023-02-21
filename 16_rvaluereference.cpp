// C++ program to illustrate the lvalue and rvalue
#include <iostream>
using namespace std;

void f(int x)
{
    std::cout << "lvalue reference overload f(" << x << ")\n";
}

void f(int& x)
{
    std::cout << "lvalue reference overload f(" << x << ")\n";
}
 
void f(const int& x)
{
    std::cout << "lvalue reference to const overload f(" << x << ")\n";
}
 
void f(int&& x)
{
    std::cout << "rvalue reference overload f(" << x << ")\n";
}

int main()
{
    int a = 10;
 
    // Declaring lvalue reference (i.e variable a)
    int& lref = a;
 
    // Declaring rvalue reference
    int&& rref = 20;
 
    // Print the values
    cout << "lref = " << lref << endl;
    cout << "rref = " << rref << endl;
 
    // Value of both a and lref is changed
    lref = 30;
 
    // Value of rref is changed
    rref = 40;
    cout << "lref = " << lref << endl;
    cout << "rref = " << rref << endl;
 
    // This line will generate an error as l-value cannot be assigned to the r-value references
    // int &&ref = a;

    int i = 1;
    const int ci = 2;
 
    f(i);  // calls f(int&)
    f(ci); // calls f(const int&)
    f(3);  // calls f(int&&)
           // would call f(const int&) if f(int&&) overload wasn't provided
    f(std::move(i)); // calls f(int&&)
 
    // rvalue reference variables are lvalues when used in expressions
    int&& x = 1;
    f(x); // calls f(int& x)
    f(std::move(x)); // calls f(int&& x)

    return 0;
}