// Solving the problem of race condition using locks on critical section of code
#include<iostream>
#include<thread>
#include<vector>
#include<mutex>
using namespace std;

class Wallet
{
    int mMoney;
    mutex Mutex; // declaring mutex lock
public:
    Wallet() :mMoney(0){}
    int getMoney()   {     return mMoney; }
    void addMoney(int money)
    {
        Mutex.lock(); // Locking
        for(int i = 0; i < money; ++i)
        {
            mMoney++;
        }
        Mutex.unlock(); // Unlocking
    }
};

int testMultithreadedWallet()
{
    Wallet walletObject;
    vector<thread> threads;
    for(int i = 0; i < 5; ++i){
        threads.push_back(thread(&Wallet::addMoney, &walletObject, 1000));
    }
    for(int i = 0; i < threads.size() ; i++)
    {
        threads.at(i).join();
    }
    return walletObject.getMoney();
}


int main()
{
    int val = 0;
    for(int k = 0; k < 1000; k++)
    {
        if((val = testMultithreadedWallet()) != 5000)
        {
            cout << "Error at count = "<< k <<"  Money in Wallet = "<<val << endl;
        }
    }
    cout << "Final Amount in Wallet: " << val <<endl;
    return 0;
}