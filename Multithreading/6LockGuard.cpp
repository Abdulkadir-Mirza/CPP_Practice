#include <iostream>
#include <thread>
#include <mutex>
using namespace std;

void func(int &count, mutex &mut_lock)
{
    for(int i=0;i<1E6;i++)
        {
            lock_guard<mutex> guard(mut_lock);
            ++count; // Critical section
        }
}

int main()
{
    mutex mut_lock;
    int count=0;
    thread t1(func, ref(count),ref(mut_lock));
    thread t2(func, ref(count),ref(mut_lock));
    t1.join();
    t2.join();
    cout << count << endl;
}