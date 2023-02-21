//C++ Program for friend class
#include <iostream>
using namespace std;

class A 
{
    private:
        int a;
    
    public:
        A() { a = 10; }
        friend class B; // Friend Class
};
 
class B 
{
    private:
        int b=20;
    
    public:
        void show(A& x)
        {
            // Since B is friend of A, it can access
            // private members of A
            cout << "A::a=" << x.a << endl;
            cout << "b=" << b << endl;
        }
};
 
int main()
{
    A a;
    B b;
    b.show(a);
    return 0;
}