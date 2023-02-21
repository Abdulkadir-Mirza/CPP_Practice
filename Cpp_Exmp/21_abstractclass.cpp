//C++ Abstract Classes
#include <iostream> 
using namespace std;
 
// Base class
class Shape 
{
    public:
        // pure virtual function providing interface framework.
        virtual int getArea() = 0;
        void setWidth(int w) 
        {
            width = w;
        }

        void setHeight(int h) 
        {
            height = h;
        }

    protected:
        int width;
        int height;
};

//Protected Inheritance
class Rectangle: protected Shape 
{
    public:
        int getArea() 
        { 
            return (width * height); 
        }
        /** Due to Inheriting the methods in portected; we can not now directly access setWidth and setHeight methods of base
        *   base class Rectangle using an Object of Derived Class Triangle(as inheriting makes all things as protected in the derived class);
        *   Hence we must make another function that can be used by main and that internally calls this protected methods */
        void setWidthInDerv(int w) 
        {
            setWidth(w);
        }

        void setHeightInDerv(int h) 
        {
            setHeight(h);
        }
};

//Public Inheritance
class Triangle: public Shape 
{
    public:
        int getArea() 
        { 
            return (width * height)/2; 
        }
        
};

//MAIN
int main(void) 
{
    Rectangle Rect;
    Triangle  Tri;

    Rect.setWidthInDerv(5);
    Rect.setHeightInDerv(7);

    // Print the area of the object.
    cout << "Total Rectangle area: " << Rect.getArea() << endl;

    Tri.setWidth(5);
    Tri.setHeight(7);

    // Print the area of the object.
    cout << "Total Triangle area: " << Tri.getArea() << endl; 

    return 0;
}