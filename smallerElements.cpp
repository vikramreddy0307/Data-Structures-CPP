
/*

You are given an array of integers. For each element in the array, 
find the number of smaller elements on the right side and print the total count.
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long long int merge(int arr[],int first,int last,int mid)
{
    long long int cnt=0;
    int i=first;
    int j=mid+1;
    int temp[last-first+1];
    int idx=0;
    while(i<=mid && j<=last)
    {
        if (arr[i]<=arr[j])
        {
            temp[idx]=arr[i];
            i++;
        }
        else
        {
            temp[idx]=arr[j];
            cnt+=mid-i+1;
            j++;
        }
        idx++;
    }

    while(i<=mid)
    {
        temp[idx]=arr[i];
        i++;
        idx++;
    }
    while(j<=last)
    {
        temp[idx]=arr[j];
        j++;
        idx++;
    }

    for(int i=first;i<=last;i++)
    {
        arr[i]=temp[i-first];
    }
    return cnt;
}

long long int merge_sort(int arr[],int i,int j)
{
    // cout<<i<<j<<endl;
    long long int cnt=0;
    if (i<j)
    {
        
        int mid=(i +(j-i)/2);
        cnt+=merge_sort(arr,i,mid);
        cnt+=merge_sort(arr,mid+1,j);
        cnt+=merge(arr,i,j,mid);
    }
    return cnt;

}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int T,N;
    cin>>T;
    for(int i=0;i<T;i++)
    {
        cin>>N;
        int arr[N];
        for (int j=0;j<N;j++)
        {
            cin>>arr[j];
        }
        cout<<merge_sort(arr,0,N-1)<<endl;
    }
    return 0;
}
