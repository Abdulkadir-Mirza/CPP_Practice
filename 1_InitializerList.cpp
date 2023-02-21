#include <iostream>
#include <algorithm>
using namespace std;

class Base
{
    int x;
    public:
    Base(int i):x{i} // Initializing non-static member x
    {
        cout << "Base Constrcutor, value is: " << x << endl;
    }
};

class Base2
{
    int &x;
    int* y;
    public:
    Base2(int& i): x{i}, y{&x} // Initializing reference variable x and pointer y.
    {
        cout << "Pointer of x is: " << y << endl;
    }
    void getI()
    {
        cout << "Value of x is: " << x << endl;
    }
};

class Base3 : public Base
{
    int i;
    int const val;
    int arr[5];
    public:
    Base3(int x):arr{1,2,3,4,5} , Base{x}, val{x}// Here array arr ,Base class and const int val is initalized using initializer list
    {
        cout << "Base3 Class Constructor. Value is: " << x << endl;
        //val=2000; we cannot initialize const non-static data members directly hence we have used initializer list above
        for(i=0;i<5;i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    Base b(15);
    int p=5;
    Base2 b2(p);
    b2.getI();
    p=50;
    b2.getI();
    Base3 b3(10);
    return 0;
}