#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int BSLeft(const vector<int> arr,int N,int k)
{
    int low=0,high=N-1,ans=-1;
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
            ans=mid;
            high=mid-1;
            
        }
        
    }
    return ans;
}

int BSRight(const vector<int> arr,int N,int k)
{
    int low=0,high=N-1,ans=-1;
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
            ans=mid;
            low=mid+1;
            
        }
        
    }
    return ans;
}

void searchRange( vector<int> A, int B)
{
    int left=BSLeft(A,A.size(),B);
    
    if(left==-1)
    {
        cout<<-1<<'\t'<<-1<<endl;
    }
    int right=BSRight(A,A.size(),B);
    cout<<left<<'\t'<<right<<endl;
}
int main()
{
    vector<int> A={5, 7, 7, 8, 8, 10};
    int B=8;

    searchRange(A,B);
    
}
