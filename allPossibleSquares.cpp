#include<iostream>
#include<cmath>

using namespace std;

int allPossibleSquares(int arr[9],bool visited[9],int idx,int N,int cnt)
{
    if (idx==N)
    {
        cnt+=1;
        // for (int i=0;i<N;i++)
        // {
        //     cout<<arr[i];
        // }
        // cout<<endl;
        return cnt;
    }

    for(int i=0;i<N;i++)
    {
        if(!visited[i])
        {
            arr[idx]=i;
            visited[i]=true;
            cnt =allPossibleSquares(arr,visited,idx+1,N,cnt);
            visited[i]=false;
        }
    }

    return cnt;
}

int main()
{
    const int N=9;
    int arr[N]={0};
    bool visited[N]={false};
    int idx=0;
    int cnt=allPossibleSquares(arr,visited,idx,N,0);
    cout<<cnt<<endl;
}