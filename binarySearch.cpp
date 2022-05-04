#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;

int binSearch(int arr[],int start, int end,int val)
{
    while(start<=end)
    {
        int mid=start+(end-start)/2;
        if(arr[mid]==val)
        {
            return mid+1;
        }
        if(arr[mid]>val)
        {
            end=mid-1;
        }
        else
        {
            start=mid+1;
        }
    }

    return -1;
}

int main()
{
    int arr[10]={0,2,3,4,5,1,23,9,10,-2};
    sort(arr,arr+10);
    cout<<binSearch(arr,0,9,-2)<<endl;
}