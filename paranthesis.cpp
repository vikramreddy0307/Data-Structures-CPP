#include<iostream>
#include<cmath>

using namespace std;

void paranthesis(int N,string st,int idx,int oc,int cc)
{
    if (idx==N)
    {
        cout<<st<<endl;
        return ;
    }

    if (oc<N/2)
    {
        st[idx]='(';
        paranthesis(N,st,idx+1,oc+1,cc);
    }

    if(cc<oc)
    {
        st[idx]=')';
        paranthesis(N,st,idx+1,oc,cc+1);
    }
}

int main()
{
    int N=10;
    string st="..........";
    paranthesis(N,st,0,0,0);


}