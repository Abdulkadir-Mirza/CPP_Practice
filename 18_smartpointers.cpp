#include <iostream>
using namespace std;

// A generic smart pointer class
template <class T>
class SmartPtr 
{
	T* ptr; // Actual pointer
public:
	// Constructor
	explicit SmartPtr(T* p = NULL) 
	{ 
		cout << "Creating a pointer" << endl;
		ptr = p; 
	}

	// Destructor
	~SmartPtr() 
	{ 
		cout << "Deleting the pointer" << endl;
		delete (ptr); 
	}

	// Overloading dereferencing operator
	T& operator*() { return *ptr; }

	// Overloading arrow operator so that members of T can be accessed like a pointer (useful if T represents a class or struct or union type)
	T* operator->() { return ptr; }
};

int main()
{
	SmartPtr<int> ptr(new int());
	*ptr = 20;
	cout << *ptr << endl;
	return 0;
}
