#include<iostream>
#include<cmath>
#include<string>
#include<array>
#include<algorithm>
#include<vector>
using namespace std;

bool validate(vector <string>arr,string name,int idx)
{
    if (idx==name.length())
    {
        return true;
    }
    for(int i=idx;i<name.length();i++)
    {
        auto itr= find(arr.begin(), arr.end(), name.substr(idx,i-idx+1));
        if ((itr!= arr.end()) && validate(arr,name,i+1))
        {
            cout<<name.substr(idx,i-idx)<<endl;
            return true;
        }
    }
    return false;
}

int main()
{
    // vector <string> vect={"sm","ct","axy","rt","a","cr","view","int","s","z"};
    vector <string> vect={"smart ","interviews"};
    string name="smart interviews";
    // auto itr= find(vect.begin(), vect.end(), name.substr(6,15));
    // bool res=itr!=vect.end();
    // cout<<res<<endl;
    cout<<validate(vect,name,0);
    return 0;
}