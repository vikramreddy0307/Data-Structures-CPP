#include<vector>
#include<iostream>
#include<string>

using namespace std;
string getPermutation(int A, int B) {
    int fact=1;
    vector<int> numbers;
    for(int i=1;i<A;i++)
    {
        fact*=i;
        numbers.push_back(i);
    }
    numbers.push_back(A);

    string ans="";
    B-=1;
    while(true)
    {
        ans+=to_string(numbers[B/fact]);
        numbers.erase(numbers.begin()+B/fact);
        if(numbers.size()==0)
        {
            break;
        }
        
        B=B%fact;
        fact=fact/numbers.size();
    }
    return ans;
}

int main()
{
    int A=10,B=5;
    cout<<getPermutation(A,B)<<endl;
}