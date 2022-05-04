#include<iostream>
#include<cmath>
#include<algorithm>
/*
find max(arr[i]<=q) for every value of q
*/
using namespace std;

int BSFloor(int arr[],int N,int q)
{
    int low=0,high=N-1,ans=INT16_MIN;
    while(low<=high)
    {
        int mid=low+(high-low)/2;
        if(arr[mid]<=q)
        {
            ans=arr[mid];
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    return ans;
}

int main()
{
    int arr[11]={24,10,-9,17,7,3,21,9,13,37,-8};
    sort(arr,arr+11);

    int Q[5]={17,3,-8,23,9};
    for(int i=0;i<5;i++)
    {
        cout<<BSFloor(arr,11,Q[i])<<endl;
    }

}