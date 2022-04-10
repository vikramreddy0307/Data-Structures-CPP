#include<iostream>
#include<cmath>

using namespace std;

int fib(int N)
{
    if ((N==1) || (N==0))
    {
        return 1;
    }
    return fib(N-1)+fib(N-2);
}
int main()
{
    int N=10;
    cout<<fib(4)<<endl;
}