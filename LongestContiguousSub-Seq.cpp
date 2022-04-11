

/*Given an array, find the length of the longest subsequence whose elements can be re-arranged in a strictly increasing contiguous order. The difference 
between 2 adjacent elements in the subsequence, after re-arrangement, should be exactly 1.
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int LongContiguousSubsequence(int arr[],int size)
{
    int res=1,temp=1;
    for(int i=0;i<size-1;i++)
    {
        if (arr[i]==arr[i+1])
        {
            continue;
        }
        if ((arr[i+1]-arr[i])==1)
        {
            temp+=1;
                       
        }
        else
        {
            temp=1;
        }
        res=max(temp,res); 
      
    }
    return res;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int T,N,val;
    cin>>T;
    for(int i=0;i<T;i++)
    {
        cin>>N;
        int arr[N];
        for(int j=0;j<N;j++)
        {
            cin>>val;
            arr[j]=val;
        }
        sort(arr,arr+N);
        int res=1;
        if(N>1)
        {
            res=LongContiguousSubsequence(arr,N);
        }
        
        cout<<res<<endl;
        
    }
    return 0;
}