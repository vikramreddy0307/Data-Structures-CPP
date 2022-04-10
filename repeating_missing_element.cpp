/* You are given an array with size n, which contains elements from range 1 to n. One
element is repeated and one element is missing. Find these two elements. */

#include<cmath>
#include<iostream>
#include<vector>
using namespace std;

int _xor(vector<int> v, int res){
    for (int i:v){
        res=res^i;
    }
    return res;

}

int main(){
    int N=7;
    vector<int> vect={1,2,3,3,4,5,6};
    vector<int> temp;

    for (int i=1;i<=N;i++){
        temp.push_back(i);

    }
    int res=_xor(vect,0);
    int bit_pos;
    res=_xor(temp,res);
    for (int i=0;i<32;i++){
        if ((res & (1<<i)) !=0){
            bit_pos=i;
            break;
        }

    }
   
    int a=0,b=0;
    for (int i=0;i<temp.size();i++){
        if ((temp[i] & (1<<bit_pos)) !=0){
            a=a^temp[i];
        }
        else{
            b=b^temp[i];
        }

        if ((vect[i] & (1<<bit_pos)) !=0){
            a=a^vect[i];
        }
        else{
            b=b^vect[i];
        }
    }
     cout<< a<<'\t'<<b<<'\t';


}

