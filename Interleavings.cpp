/* Given 2 strings A and B, print all the interleavings of the 2 strings. 
An interleaved string of given two strings preserves the order of characters in individual 
strings and uses all the characters of both the strings. For simplicity, you can assume that the strings have unique characters.

Input Format

First line of input contains T - number of test cases. 
Its followed by T lines, each contains 2 space separated strings A and B.
Output Format

For each test case, print the test case number,
 followed by the interleavings of the 2 strings in a sorted order, separated by newline.
*/


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void Interleavings(string str1,string str2,int idx1,int idx2,int len1,int len2,string res)
{
    if (idx1==len1 && idx2==len2)
    {
        // all_results.push_back(res);
        cout<<res<<endl;
        return ;
    }
    
    if (idx1==len1 )
    {
        res+=str2.substr(idx2,len2);
        cout<<res<<endl;
        return ;
    }
    if (idx2==len2 )
    {
        res+=str1.substr(idx1,len1);
        cout<<res<<endl;
        return ;
    }
    
    if((res+str2[idx2])<(res+str1[idx1]))
    {
        Interleavings( str1, str2, idx1, idx2+1,len1,len2,res+str2[idx2]);    
        Interleavings( str1, str2, idx1+1, idx2,len1,len2,res+str1[idx1]); 
    } 
    
    else
    {
        Interleavings( str1, str2, idx1+1, idx2,len1,len2,res+str1[idx1]); 

        Interleavings( str1, str2, idx1, idx2+1,len1,len2,res+str2[idx2]);    
    }
        
      

    
    // return all_results;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int T;
    string str1,str2;
    cin>>T;
    for(int i=0;i<T;i++)
    {
        cin>>str1;
        cin>>str2;
        
        int len1,len2;
        len1=str1.length();
        len2=str2.length();
        cout<<"Case #"<<i+1<<':'<<endl;
        vector<string> vect;
        Interleavings(str1,str2,0,0,len1,len2,"");
        // sort(all_results.begin(),all_results.end());
//         for (string element: all_results)
//         {
//             cout<<element<<endl;
//         }
        
        
    }
    
    return 0;
}
