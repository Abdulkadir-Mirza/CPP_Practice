// C++ program with declaring the
// Demo constructor
#include <iostream>
#include <vector>
using namespace std;

// Demo Class
class Demo {
private:
	// Declare the raw pointer as the data member of class
	int* data;

public:

	// Constructor
	Demo(int d)
	{
		// Declare object in the heap
		data = new int;
		*data = d;
		cout << "Constructor is called for " << d << endl;
	};

	// Copy Constructor
	Demo(const Demo& source) : Demo{ *source.data }
	{
		// Copying the data by making deep copy
		cout << "Copy Constructor is called -" << "Deep copy for " << *source.data << endl;
	}

	// Demo Constructor
	Demo(Demo&& source) : data{ source.data }
	{
		cout << "Move Constructor for " << *source.data << endl;
		source.data = nullptr;
	}

	// Destructor
	~Demo()
	{
		if (data != nullptr)
			// If pointer is not pointing to nullptr
			cout << "Destructor is called for "	<< *data << endl;
		else
			// If pointer is pointing to nullptr
			cout << "Destructor is called"	<< " for nullptr " << endl;

		// Free up the memory assigned to the data member of the object
		delete data;
	}
};


int main()
{
	// Vector of Demo Class
	vector<Demo> vec;

	// Inserting Object of Demo Class
	vec.push_back(Demo{ 10 });
	//vec.push_back(Demo{ 20 });
	return 0;
}
