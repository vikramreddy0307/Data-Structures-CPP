/*Given a set of distinct integers S, print the size of a maximal subset of
  where the sum of any  numbers in  is not evenly divisible by k.*/
#include <iostream>
#include<vector>
#include<cmath>
#include <algorithm>

using namespace std;



/*
 * Complete the 'nonDivisibleSubset' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER k
 *  2. INTEGER_ARRAY s
 */

int nonDivisibleSubset(int k, vector<int> s) {
    if(k==1)
    {
        return 1;
    }
    int remainder[k]={0};
    for(int i=0;i<s.size();i++)
    {
        remainder[s[i]%k]+=1;
    }
    
    int max_num=min(remainder[0],1);
    
    for(int i=1;i<k/2;i++)
    {
        max_num+=max(remainder[i],remainder[k-i]);
        
    }
    if(k%2==0)
    {
        max_num+=min(remainder[k/2],1);
    }
    else
    {
        max_num+=max(remainder[k/2],remainder[k-(k/2)]);
    }
    
    
    return max_num;

}

int main()
{
    vector <int> s={1 ,7 ,2 ,4};
    const int k=3;
    int result = nonDivisibleSubset(k, s);

    cout << result << "\n";


    return 0;
}
