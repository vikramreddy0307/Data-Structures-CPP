#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'stepPerms' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER n as parameter.
 */

int totalWays(vector<int> steps,int total,int N,long long int cnt)
{
    if(total==N)
    {
        int max=1e+7;
        
        return (cnt+1)%max;
    }
    if((N-total)>=1)
    {
        steps.push_back(1);
        cnt=totalWays(steps,total+1,N,cnt);
        steps.pop_back();
    }
    if((N-total)>=2)
    {
        steps.push_back(2);
        cnt=totalWays(steps,total+2,N,cnt);
        steps.pop_back();
    }
    
    if((N-total)>=3)
    {
        steps.push_back(3);
        cnt=totalWays(steps,total+3,N,cnt);
        steps.pop_back();
    }
    
    return cnt;
}
int stepPerms(int n) {
    vector<int> steps;
    int total=0;
    long long int cnt=0;
    cnt=totalWays(steps,total,n,cnt);
    return cnt;

}

int main()
{
    cout<<stepPerms(10)<<endl;

      
}
/*
int stepPerms(int n) {
    // Dynamic programming
    if (n==1 ||n ==0){
        return 1;
    }
    if(n==2)
    {
        return 2;
    }
    long long int cnt[n+1];
    cnt[0]=1;
    long int max=10000000007;
    cnt[1]=1;
    cnt[2]=2;
    for(int i=3;i<=n;i++)
    {
        cnt[i]=(cnt[i-1]+cnt[i-2]+cnt[i-3])%max;
    }
    return cnt[n]%max;
    
    // Recursion
    // if(n==1 || n==0)
    // {
    //     return 1;
    // }
    // if(n==2){
    //     return 2;
    // }
    
    // return stepPerms(n-1)+stepPerms(n-2)+stepPerms(n-3);

}

*/