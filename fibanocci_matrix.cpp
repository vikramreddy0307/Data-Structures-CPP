#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/* 
 * function to multiply two matrices
 */
void multiply(long long F[2][2], long long M[2][2])
{
    long long x =  F[0][0] * M[0][0] + F[0][1] * M[1][0];
    long long y =  F[0][0] * M[0][1] + F[0][1] * M[1][1];
    long long z =  F[1][0] * M[0][0] + F[1][1] * M[1][0];
    long long w =  F[1][0] * M[0][1] + F[1][1] * M[1][1];
    F[0][0] = x;
    F[0][1] = y;
    F[1][0] = z;
    F[1][1] = w;
}

void power(long long F[2][2],int pow)
{
    if (pow == 0 || pow == 1)
        return;
    long long M[2][2] = {{1,1},{1,0}};
    power(F,pow/2);
    multiply(F,F);
    if (pow%2)
    {
        multiply(F,M);
    }
 
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    
    long long F[2][2] = {{1,1},{1,0}};
    
        
    
    power(F,6);

    cout<<F[0][0]<<endl;
    
    
    return 0;
}
