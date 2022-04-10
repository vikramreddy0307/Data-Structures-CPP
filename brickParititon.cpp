#include<iostream>
#include<cmath>
#include<vector>
#include<string>

using namespace std;


void brickPartition(vector <string> vect_a,vector <int> vect_b,int idx_a,int idx_b,int k,int N,int M)
{
    if(idx_b==M)
    {
        for(int i=0;i<vect_a.size();i++)
        {
            cout<<vect_a[i];
        }
        cout<<endl;
        return;
    }

    if(idx_a==N)
    {
        return ;
    }

    for(int i=idx_a;i<N;i++)
    {
        for(int j=0;j<vect_b[idx_b];j++)
        {
            vect_a[i+j]=to_string(idx_b);
            // vect_a.insert(i+j,idx_b);
        }
        brickPartition(vect_a,vect_b,i+vect_b[idx_b]+k,idx_b+1,k,N,M);
        for(int k=0;k<vect_b[idx_b];k++)
        {
            vect_a[i+k]='_';
        }
    }
}

int main()
{
    int N=16,M=3,idx_a=0,idx_b=0;
    vector<string>vect_a;
    string str;
    vector<int>vect_b;
    vect_b={3,2,4};
    for(int i=0;i<N;i++)
    {
        str='_';
        vect_a.push_back(str);
    }
    brickPartition(vect_a,vect_b,idx_a,idx_b,2,N,M);


}