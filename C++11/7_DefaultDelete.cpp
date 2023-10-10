// C++ code to demonstrate the use of defaulted functions
#include <iostream>
using namespace std;
 
class A {
public:
 
    // A user-defined
    // parameterized constructor
    A(int x)
    {
        cout << "This is a parameterized constructor" << endl;
    }
     
    // Using the default specifier to instruct the compiler to create the default implementation of the constructor.
    A() = default;
    
    // Error, func is not a special member function.
    //int func() = default;

    // Error, constructor B(int, int) is not a special member function.
    //A(int , int) = default;

    // Delete the copy constructor
    A(const A&) = delete;

    // Delete the copy assignment operator
    A& operator=(const A&) = delete;

};
 
int main()
{
    // executes using defaulted constructor
    A a1;
     
    // uses parameterized constructor
    A a2(1);

    //Error, the usage of the copy constructor is disabled
    //A a3(a2);

    //Error, the usage of the copy assignment operator is disabled
    //a3=a2;

    A a4(100.2); // Evene though we have not declared any constructor taking double as arguments, it is implicitly creating it
    //If we do not want this to happen; we can use explicit delete and specify we do not want to use this form.
    return 0;
}