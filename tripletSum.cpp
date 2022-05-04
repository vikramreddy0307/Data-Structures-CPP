#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool twoPointer(int arr[],int start,int end,int K)
{
    while(start<end)
    {
        int res=arr[start]+arr[end];
        if (res==K)
        {
            return true;
        }
        else if(res<K)
        {
            start+=1;
        }
        else
        {
            end-=1;
        }
        
    }
    return false;
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
        bool res=false;;
        for(int j=0;j<N;j++)
        {
            res=twoPointer(arr,j+1,N-1,K-arr[j]);
            if (res)
            {
                break;
            }
        }
        if(res)
        {
            cout<<"true"<<endl;
        }
        else
        {
            cout<<"false"<<endl;
        }
        
    }
    return 0;
}
