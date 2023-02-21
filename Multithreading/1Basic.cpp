#include <iostream>
#include <thread>
#include <chrono>
using namespace std;

void func()
{
    for(int i=0;i<10;i++)
    {
        this_thread::sleep_for(chrono::milliseconds(500)); // Sleep for 500 milliseconds
        cout << "Loop " << i << endl;
    }
}

int main()
{
    cout << "Hello" << endl;
    thread t1(func);
    thread t2(func);
    t1.join(); // Wait for t1 to complete execution
    t2.join(); // Wait for t2 to complete execution
}