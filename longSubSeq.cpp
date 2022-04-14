#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
/*Given an array of integers, find the longest subarray
 where the absolute difference between any two elements is less than or equal to .
 */
int main() {
   int n,k,max = 0;
    cin>>n;
    int a[100]={0};
    for(int i = 0;i<n;i++){
        cin>>k;
        a[k]++;
    }
    for(int i = 0;i<n-1;i++){
        if(a[i]+a[i+1]> max) max = a[i]+a[i+1];
    }
    cout<<max;
    return 0;
}