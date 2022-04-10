#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    const int size=10;
    int temp;
    int arr[size]={9,8,7,6,5,4,3,2,1,0};
    int key,j;
    for(int i=1;i<size;i++)
    {
        key=arr[i];
        j=i-1;
        while (j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j-=1;
        }
        arr[j+1]=key;
    }

    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<endl;
    }
}