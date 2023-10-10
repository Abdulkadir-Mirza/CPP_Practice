// C++ program to demonstrate nullptr
#include <iostream>
using namespace std;
 
// function with integer argument
void fun(int N)   
{ 
    cout << "fun(int)" << endl; 
}
 
// Overloaded function with char pointer argument
void fun(char* s)  
{ 
    cout << "fun(char *)" << endl; 
}
 
int main()
{
    // Ideally, it should have called fun(char *), but it causes compiler error.
    // fun(NULL); NULL is typically defined as (void *)0 and conversion of NULL to integral types is allowed. 
    // So the function call fun(NULL) becomes ambiguous.

    // Instead we can use nullptr which is same as NULL except that it cannot be converted or comparable to integral types.
    fun(nullptr);  // Valid as it is convertible and comparable to any pointer type

    // int x = nullptr;  Invalid

    int *ptr = nullptr;
    if (ptr) // nullptr is convertible to bool
    { 
        cout << "true"; 
    }   
    else 
    { 
        cout << "false"; 
    } 
    return 0;
}