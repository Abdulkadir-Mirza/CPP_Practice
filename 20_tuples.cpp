#include<iostream>
#include<tuple> // for tuple
using namespace std;

int main()
{
    // Declaring tuple
    tuple <char, int, float, string> geek;
  
    // Assigning values to tuple using make_tuple()
    geek = make_tuple('a', 10, 15.5, "Tuples");
  
    // Printing initial tuple values using get()
    cout << "The initial values of tuple are : ";
    cout << get<0>(geek) << " " << get<1>(geek);
    cout << " " << get<2>(geek) << " " << get<3>(geek) << endl;
  
    // Use of get() to change values of tuple
    get<0>(geek) = 'b';
    get<2>(geek) =  20.5;
  
     // Printing modified tuple values
    cout << "The modified values of tuple are : ";
    cout << get<0>(geek) << " " << get<1>(geek);
    cout << " " << get<2>(geek) << " " << get<3>(geek) << endl;

    // Use of size to find tuple_size of tuple
    cout << "The size of tuple is : ";
    cout << tuple_size<decltype(geek)>::value << endl << endl;

    // Initializing 1st tuple
    tuple <int,char,float> tup1(20,'g',17.5);
      
    // Initializing 2nd tuple
    tuple <int,char,float> tup2(10,'f',15.5);
      
    // Printing 1st and 2nd tuple before swapping
    cout << "The first tuple elements before swapping are : ";
    cout <<  get<0>(tup1) << " " << get<1>(tup1) << " " << get<2>(tup1) << endl;
    cout << "The second tuple elements before swapping are : ";
    cout <<  get<0>(tup2) << " " << get<1>(tup2) << " " << get<2>(tup2) << endl;
      
    // Swapping tup1 values with tup2
    tup1.swap(tup2);
      
    // Printing 1st and 2nd tuple after swapping
    cout << "The first tuple elements after swapping are : ";
    cout <<  get<0>(tup1) << " " << get<1>(tup1) << " " << get<2>(tup1) << endl;
    cout << "The second tuple elements after swapping are : ";
    cout <<  get<0>(tup2) << " " << get<1>(tup2) << " " << get<2>(tup2) << endl;

    // Concatenating 2 tuples to return a new tuple
    auto tup3 = tuple_cat(tup1,tup2);
      
    // Displaying new tuple elements
    cout << "\nThe new tuple elements in order are : ";
    cout << get<0>(tup3) << " " << get<1>(tup3) << " ";
    cout << get<2>(tup3) << " " << get<3>(tup3) << " ";
    cout << get<4>(tup3) << " " << get<5>(tup3) << endl;
  
    return 0;
}