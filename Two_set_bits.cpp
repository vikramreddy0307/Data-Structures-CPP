/*Look at the following sequence:
3, 5, 6, 9, 10, 12, 17, 18, 20....

All the numbers in the series has exactly 2 bits set in their binary representation. 
Your task is simple, you have to find the Nth number of this sequence.

Input Format

First line of input contains T - number of test cases. Its followed by T lines, 
each containing a single number N.

*/

#include <iostream>
using namespace std;

// Function to find the Nth number
// with exactly two bits set
void findNthNum(unsigned long long int N)
{

    long long int max= 1000000007;
    long long int bit_L = 1;
    unsigned long long int last_num = 0,val=0;

    
    val=bit_L * (bit_L + 1) / 2;
    while (val < N) {
        last_num = last_num + bit_L;
        bit_L+=1;
        val=bit_L * (bit_L + 1) / 2;
    }

    // set the rightmost bit
    // based on bit_R
    unsigned long long int bit_R = (N - last_num - 1);
    
    unsigned long long int  res=((1 << bit_L) + (1 << bit_R))%max;
    cout << res<< endl;
}

// Driver code
int main()
{
    int T;
    unsigned long long int N;
    cin>>T;
    for(int i=0;i<T;i++)
    {
        cin>>N;
        findNthNum(N);
    }

    

    return 0;
}
