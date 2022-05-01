#include<iostream>
#include<cmath>

using namespace std;

int merge(int arr[],int first,int last,int mid)
{
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
}

void merge_sort(int arr[],int i,int j)
{
    // cout<<i<<j<<endl;
    if (i<j)
    {
        
        int mid=(i +(j-i)/2);
        merge_sort(arr,i,mid);
        merge_sort(arr,mid+1,j);
        merge(arr,i,j,mid);
    }

}


int main()
{
    int arr[10]={0,-9,8,19,-20,-5,28,21,10,4};
    merge_sort(arr,0,9);
    for(int i=0;i<10;i++)
    {
        cout<<arr[i]<<'\t';
    }
    cout<<endl;

}
