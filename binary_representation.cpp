#include <cmath>
#include<iostream>
using namespace std;
// using for loop
int main(){
    int N=12;
    while (N>0){
        cout<<N%2 << endl;
        N=floor(N/2);
    }
}

// using recursion