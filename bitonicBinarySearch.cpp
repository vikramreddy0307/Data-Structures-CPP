#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
Given a bitonic sequence A of N distinct elements, 
write a program to find a given element B in the bitonic sequence in O(logN) time.

NOTE:

A Bitonic Sequence is a sequence of numbers which is first strictly increasing then after a point strictly decreasing
*/
int BSLeft(vector<int> arr,int low,int high,int k)
{
    int ans=-1;
    while(low<=high)
    {
        int mid=low+(high-low)/2;
         if(arr[mid]>k)
         {
             high=mid-1;
         }
        else if(arr[mid]<k)
        {
            low=mid+1;
        }
        else
        {
            return mid;
            
        }
        
    }
    return ans;
}

int BSRight(vector<int> arr,int low,int high,int k)
{
    int ans=-1;
    while(low<=high)
    {
        int mid=low+(high-low)/2;
         if(arr[mid]>k)
         {
             low=mid+1;
         }
        else if(arr[mid]<k)
        {
            high=mid-1;
        }
        else
        {
            return mid;
            
        }
        
    }
    return ans;
}
int main()
{
    vector<int> A={5, 6, 7, 8, 9, 10, 3, 2, 1};
    int B=100;
    int low=0,high=A.size()-1,mid=INT_MAX;
    while(low<=high)
    {
        mid=low+(high-low)/2;
        // cout<<mid<<endl;
        if((A[mid]>A[mid+1]) && (A[mid-1]<A[mid]))
        {
            break;
        }
        else if(A[mid]<A[mid+1])
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    // cout<<mid<<endl;
    if(A[mid]==B)
    {
        return mid;
    }
    int left=BSLeft(A,0,mid-1,B);
    if(left!=-1)
    {
        return left;
    }
    int right=BSRight(A,mid+1,A.size()-1,B);
    if(right!=-1)
    {
        return right;
    }
    return -1;
}
