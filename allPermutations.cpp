
#include<iostream>
#include<string>

using namespace std;
int cnt=0;
void permute_(string a, int l, int r,int B )  
{  
    string res;
    // Base case  
    if (l == r)  
    {
        cout<<a<<endl;
    
        

    }
       
    else
    {  
        // Permutations made  
        
        for (int i = l; i <= r; i++)  
        {  
            // cnt=cnt+1;
  
            // Swapping done  
            swap(a[l], a[i]);  
  
            // Recursion called  
            permute_(a, l+1, r,B);  
  
            //backtrack  
            swap(a[l], a[i]);  
        }  
    }  
}  
int main() {
    string val="";
    int A=5,B=1;
    for(int i=1;i<=A;i++)
    {
        val+=to_string(i);
    }
    permute_(val,0,A-1,B);
}