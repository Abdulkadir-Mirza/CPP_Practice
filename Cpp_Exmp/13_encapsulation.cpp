//Encapsulation
#include <iostream>
using namespace std;

class Employee 
{
    private:
        // Private attribute
        int salary;

    protected:
        int z=30;
        
    public:
        // Setter
        void setSalary(int s) 
        {
            salary = s;
        }
        // Getter
        int getSalary() 
        {
            return salary;
        }
        //Setter
        void setZ(int x)
        {
            z=x;
        }
        //Getter
        int getZ()
        {
            return z;
        }

};

//MAIN
int main() 
{
    Employee myObj;
    myObj.setSalary(50000);
    cout << "Salary is " << myObj.getSalary();
    cout << "\nZ is : " << myObj.getZ() << endl;
    return 0;
}