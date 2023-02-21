//Defining New exception by extending the standard exception class
#include <iostream>
#include <exception>
using namespace std;

//Defining new exception
struct MyException : public exception 
{
   const char * what () const throw () 
   {
      return "C++ Exception";
   }
};
 
//MAIN
int main() 
{
   try 
   {
        throw MyException();
   } 
   catch(MyException& e) 
   {
        std::cout << "MyException caught" << std::endl;
        std::cout << e.what() << std::endl;
   } 
   catch(std::exception& e) 
   {
      //Other errors
   }
}