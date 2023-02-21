//User-defined namespace that provides functionality of cin and cout 
#include <iostream>
#include <cstring>

namespace akm
{
    void out1(std::string s)
    {
        std::cout << s << std::endl;
    }
    std::string in()
    {
        std::string x;
        std::cin >> x;
        return x;
    }
    
};
using namespace akm;
int main()
{
    
    out1("Hello Guys\nWELCOME");
    out1("Enter Your Name:");
    std::string x=in();
    out1("Hii "+x);
    return 0;
}