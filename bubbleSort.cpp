#include<iostream>
#include<cmath>

using namespace std;

int main()

{
    const int size=10;
    int temp;
    int arr[size]={9,8,7,6,5,4,3,2,1,0};
    for(int i=0;i<size-1;i++)
    {
        for(int j=0;j<size-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }

    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<endl;
    }

}