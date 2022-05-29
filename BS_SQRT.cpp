#include<iostream>
#include<cmath>

using namespace std;

int SQRT(int A)
{
    
    int low=0,high=A/2;
    int ans=0;
    while(low<=high)
    {
        long long int mid=low+(high-low)/2;
        cout<<mid<<endl;
        if((mid*mid)<=A)
        {
            ans=mid;
            low=mid+1;
        }
        else 
        // if((mid*mid)>A)
        {
            high=mid-1;
        }
        // else
        // {
        //     ans=mid;
        //     low=mid+1;
        // }
    }
    return ans;
    
}

int main()
{
    cout<<SQRT(930675566)<<endl;
}