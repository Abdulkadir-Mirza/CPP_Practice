//C++ program to Function Arguments Passing
#include<iostream>
using namespace std;

//Function : Call by Value
int Min(int x, int y)
{
    if(x<y)
    return (x);
    else
    return (y);
}

//Function : Call by Pointer
void Swap(int *a,int *b)
{
    int t;
    t=*a;
    *a=*b;
    *b=t;
}

//Function : Call by Reference
int& Max(int &x, int &y)
{
    if(x>y)
    return (x);
    else
    return (y);
}

//MAIN
int main()
{
    int x,y;
    cout << "Enter Two Integer Numbers:" << endl;
    cin >> x >> y;
    cout << "x and y are : " << x <<  " , " <<y;
    Swap(&x,&y);
    cout << "\nx and y are : " << x <<  " , " <<y;
    cout << "\nMax of x and y is:" << Max(x,y);
    cout << "\nMin of x and y is:" << Min(x,y);
    return 0;
}