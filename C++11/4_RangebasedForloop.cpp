// Demonstraion of range-for loop
#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() 
{
    // Iterating over whole array
    vector<int> v = {0, 1, 2, 3, 4, 5};
    for (auto i : v)
        cout << i << ' ';
      
    cout << '\n';
      
    // the initializer may be a braced-init-list
    for (int n : {10, 11, 12, 13, 14, 15})
        cout << n << ' ';
      
    cout << '\n';
   
    // Iterating over array
    int a[] = {1, 2, 3, 4, 5};     
    for (auto n : a)
        cout << n << ' ';
      
    cout << '\n';   

    //Updating values of every element of vector using range-based for loop and reference of vector iterator
    //that will be determined using the type of v i.e. here it is vector
    for (auto& i : v)
    {
        i=i+5;
    }
 
    for (auto i : v)
        cout << i << ' ';
      
    cout << '\n';   

    // Just running a loop for every array element
    for (int n : a)  
        cout << "In loop" << ' ';
      
    cout << '\n';
      
    // Printing string characters
    string str = "Geeks";
    for (char c : str) 
        cout << c << ' ';
          
    cout << '\n';
  
    // Printing keys and values of a map
    map <int, int> MAP({{1, 1}, {2, 2}, {3, 3}});
    for (auto i : MAP)
        cout << '{' << i.first << ", " 
                  << i.second << "}\n";

    return 0;
}