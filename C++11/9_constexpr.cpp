// C++ program to demonstrate the use of constexpr 
#include<iostream> 
using namespace std; 
  
constexpr int fact(int n) 
{ 
    return n <= 1 ? 1 : (n * fact(n - 1));

} 
 
int main () 
{ 
    // value of res is computed at compile time. 
    constexpr int res = fact(6); 
    cout << "Factorial is:" << res << endl; 

    return 0; 
}