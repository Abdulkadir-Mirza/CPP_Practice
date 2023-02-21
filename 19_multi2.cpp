//Passing arguments to thread function
#include <iostream>
#include <thread>
using namespace std;

void threadCallback(int const & x)
{
    int & y = const_cast<int &>(x);
    y++;
    cout<<"Inside Thread x = "<<x<<endl;
}

int main()
{
    int x = 9;
    cout<<"In Main Thread : Before Thread Start x = "<<x<<endl;
    thread threadObj(threadCallback,ref(x)); 
    // Here we are passing using ref() so that the changes in the argument passed as reference is also affected in the main
    threadObj.join();
    cout<<"In Main Thread : After Thread Joins x = "<<x<<endl;
    return 0;
}