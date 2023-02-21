#include <iostream>
using namespace std;

// Function that accepts no parameter
// It is to break the recursion chain of vardiac template function
void log()
{
}

// Variadic Template Function that accepts variable number of arguments of any type.
template<typename T, typename ... Args>
void log(T first, Args ... args) {
    // Print the First Element
    cout<<first<<" , ";

    // Forward the remaining arguments
    log(args ...);
}


int main() 
{
    log(2, 3.4, "aaa"); // Calling Variadic function that prints all the elements.
    return 0;
}