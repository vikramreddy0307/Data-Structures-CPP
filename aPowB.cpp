#include<iostream>
#include<cmath>

using namespace std;

int main(){
    long a=19,b=134;
    long res=1,M=1e9+7;
    for (int i=0;i<32;i++){
        if (b&(1<<i)){
            res=(res*a)%M;

        }
        a=(a*a)%M;
    }
    cout<<res<<endl;
}