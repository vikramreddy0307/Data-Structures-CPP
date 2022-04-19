#include <cmath>
#include<string>
#include <iostream>
using namespace std;

int digitSum(long long int n)
{
    if(n<=9)
    {
        return n;
    }
    long long int res=0;
    while(n>0)
    {
        res+=n%10;
        n=n/10;
    }
    return digitSum(res);
}
int superDigit(string n, int k) {
    long long int res=0;
    for(char x:n)
    {
        res+=(x-48);
    }
    res=res*k;
    
    res=digitSum(res);
    return res;

}
int main(){
    int res=superDigit("1000000000", 1089);
    cout<<res<<endl;
}

