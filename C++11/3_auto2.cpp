// C++ program to demonstrate use of decltype in functions
#include <iostream>
using namespace std;
 
// A generic function which finds minimum of two values
// return type is type of variable which is minimum
template <class A, class B>
auto findMin(A a, B b) -> decltype(a < b ? a : b)
{
    return (a < b) ? a : b;
}
 

int main()
{
    // This call returns 3.44 of double type
    cout << findMin(4, 3.44) << endl;
 
    // This call returns 97(value of a in ASCII) of double type
    cout << findMin(195.4, 'a') << endl;
 
    return 0;
}