
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
Given a sorted array A and a target value B, return the index if the target is found. 
If not, return the index where it would be if it were inserted in order.

You may assume no duplicates in the array.
*/
int searchInsert(vector<int> &A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int low=0,high=A.size()-1;
    if(A[0]>B)
    {
        return 0;
    }
    if(A[high]<B)
    {
        return high+1;
    }
    int ans=0;
    while(low<=high)
    {
        int mid=low+(high-low)/2;
        if(A[mid]==B)
        {
            return mid;
        }
        else if(A[mid]>B)
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;
            ans=mid+1;

        }
    }
    return ans;
}
int main()
{
    vector<int> A={1, 3, 5, 6};
    int B=100;
    searchInsert(A,B);
}
