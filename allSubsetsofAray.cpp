#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void allSubsets(int arr[],vector<int>vect,int idx,int N,int size)
{
    // cout<<1<<endl;
    if (idx==N)
    {
        for(int i=0;i<size;i++)
        {
            cout<<vect[i]<<'\t';
        }
        cout<<endl;
        return;
    }
    
    // vector<int>sample=vect; 
    
    allSubsets(arr,vect,idx+1,N,size);
    vect.push_back(arr[idx]);
    allSubsets(arr,vect,idx+1,N,size+1);
    
    
    
}

int main()
{
    int arr[]={3,5,15};
    vector<int>vect;
    int idx=0,N=3,size=0;
    allSubsets(arr,vect, idx, N, size);

}