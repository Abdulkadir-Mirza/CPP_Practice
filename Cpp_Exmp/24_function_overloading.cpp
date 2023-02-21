//C++ program for Function Overloading
#include <iostream>
using namespace std;

int plusFunc(int x, int y) 
{
  return x + y;
}

double plusFunc(double x, double y) 
{
  return x + y;
}

//MAIN
int main() 
{
  int myNum1 = plusFunc(8, 5);
  double myNum2 = plusFunc(4.3, 6.26);
  cout << "Sum of Int: " << myNum1 << "\n";
  cout << "Sum of Double: " << myNum2;
  return 0;
}