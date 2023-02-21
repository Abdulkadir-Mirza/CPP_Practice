#include <iostream>
#include <thread>
#include <mutex>
using namespace std;

void func(int &count, mutex &mut_lock) // count and mut_lock are passed as arguments
{
    for(int i=0;i<1E6;i++)
        {
            mut_lock.lock();
            ++count; // Critical section
            mut_lock.unlock();
        }
}

int main()
{
    mutex mut_lock;
    int count=0; // This count variable is shared by two threads simultaneously
    thread t1(func, ref(count),ref(mut_lock));
    thread t2(func, ref(count),ref(mut_lock));
    t1.join();
    t2.join();
    cout << count << endl;
}