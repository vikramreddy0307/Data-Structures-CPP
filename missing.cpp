#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int size=7,res=0;
    int inp[7]={3, 5, 8, 1, 4, 7, 2};
    
  
    for(int j=1;j<=size+1;j++){
        res=(res)^(j); 
    }
    cout<<res<<endl;
    for(int j=0;j<size;j++){
        res=(res)^(inp[j]); 
    }
    
    cout<<res<<endl;
    }
    

