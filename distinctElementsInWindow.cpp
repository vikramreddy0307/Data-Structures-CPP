#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int T,N,k,dist_cnt;
    cin>>T;
    for(int i=0;i<T;i++)
    {
        cin>>N;
        cin>>k;
        int arr[N];
        for(int j=0;j<N;j++)
        {
            cin>>arr[j];
        }  
        map<int,int> mp;
       
        vector<int> res;
        
        dist_cnt=0;
        for(int j=0;j<k;j++)
        {
            if(mp.find(arr[j]) == mp.end())
            {
                dist_cnt+=1;
                mp[arr[j]]=1;
            }
            else
            {
                mp[arr[j]]+=1;
            }
            
        }
        res.push_back(dist_cnt);
        for(int j=k;j<N;j++)
        {
            
            if(mp[arr[j-k]] ==1)
            {
                dist_cnt-=1;
            }
            mp[arr[j-k]]-=1;
            
            if(mp.find(arr[j]) == mp.end())
            {
                dist_cnt+=1;
                mp[arr[j]]=1;
            }
            else
            {
                mp[arr[j]]+=1;
            }
            res.push_back(dist_cnt);
        }
        for (auto j: res)
        {
            cout<<j<<'\t';
        }
        cout<<'\n';
            
    }
    return 0;
}
