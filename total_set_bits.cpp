#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int N=15,count=0;
    while (N>0){
        if (N%2 !=0){
            count++;
        }
        N=floor(N/2);
    }
    cout<<count<<'\t';
    
//  Method 2
    int bit_count=0;
    N=15;
    for (int i=0;i<32;i++){
        if ((N & (1<<i))!=0){
            bit_count++;
        }
    }
    cout<<bit_count<<'\t';

}