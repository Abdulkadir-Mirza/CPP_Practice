// C++ program to demonstrate lambda expression in C++ demonstarting various capturing ways
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v1 = {3, 1, 7, 9};
    vector<int> v2 = {10, 2, 7, 16, 9};
 
    //  access v1 and v2 by reference i.e. access all declared variables by refrence
    auto pushinto = [&] (int m)
    {
        v1.push_back(m);
        v2.push_back(m);
    };
 
    // it pushes 20 in both v1 and v2
    pushinto(20);
 
    // access v1 by copy
    [v1]()
    {
        for (auto p = v1.begin(); p != v1.end(); p++)
        {
            cout << *p << " ";
        }
    };
 
    int N = 5;
 
    // below snippet find first number greater than N
    // [N]  denotes,   can access only N by value
    auto p = find_if(v1.begin(), v1.end(), [N](int i)
    {
        return i > N;
    });
 
    cout << "First number greater than 5 is : " << *p << endl;
 
    // function to count numbers greater than or equal to N
    // [=] denotes,   can access all variable
    int count_N = count_if(v1.begin(), v1.end(), [=](int a)
    {
        return (a >= N);
    });
 
    cout << "The number of elements greater than or equal to 5 is : "
         << count_N << endl;

    return 0;
}