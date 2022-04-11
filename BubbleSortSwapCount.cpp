#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int BubbleSortSwapCounts(int arr[],int size)
{
    int swap=0,temp;
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size-1;j++)
        {
            if(arr[j+1]<arr[j])
            {
                swap+=1;
                temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }
 
    return swap;
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int N,T;
    cin>>T;
    for(int i=0;i<T;i++)
    {
        cin>>N;
        int arr[N],val;
        for(int j=0;j<N;j++)
        {
            cin>>val;
            arr[j]=val;
        }
        int counts=BubbleSortSwapCounts(arr,N);
        cout<<counts<<endl;
            
    }
        
    return 0;
}
