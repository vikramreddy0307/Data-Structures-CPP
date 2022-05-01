#include<iostream>
#include<string>

using namespace std;
/*
Given a string A and integer B, 
what is maximal lexicographical string that can be made from A if you do atmost B swaps.
*/

string maximal(string a, int k,string ans)
{
    if(stoi(ans) < stoi(a))
        ans=a;
    if(k==0)
        return ans;
    for(int i=0; i<a.size()-1; i++)
    {
        for(int j=i+1; j<a.size(); j++)
        {
            swap(a[i],a[j]);
            ans=maximal(a,k-1,ans);
            swap(a[i],a[j]);
        }
    }
    return ans;        
}


int main()
{
    // numOfSwaps("245","254");
    string A="129814999";
    string ans="129814999";
    int B=4;
    ans=maximal(A,B,ans);
    cout<<ans<<endl;
}


