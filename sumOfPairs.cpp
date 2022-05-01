#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

string two_pointer(int arr[],int N,int K)
{
    int i=0,j=N-1;
    while(i<j)
    {
        if ((arr[i]+arr[j])==K)
        {
            return "True";
        }
        if ((arr[i]+arr[j])>K)
        {
            j=j-1;
        }
        else
        {
            i=i+1;
        }
    }
    return "False";
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int T,N,K;
    cin>>T;
    for(int i=0;i<T;i++)
    {
        cin>>N;
        cin>>K;
        int arr[N];
        for(int j=0;j<N;j++)
        {
            cin>>arr[j];
        }
        sort(arr,arr+N);
        string res= two_pointer(arr,N,K);
        cout<<res<<endl;
        
        
    }
    return 0;
}