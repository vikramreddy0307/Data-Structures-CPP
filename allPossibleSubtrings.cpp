#include<iostream>
#include<cmath>

using namespace std;

void allPossibleSubstrings(string main_string,string sub_str,int idx,int N)
{
    if (idx==N)
    {
        cout<<sub_str<<endl;
        return ;
    }
    allPossibleSubstrings(main_string,sub_str,idx+1,N);
    allPossibleSubstrings(main_string,sub_str+main_string[idx],idx+1,N);
}

int main()
{
    allPossibleSubstrings("vikram","",0,6);
}