// Problem : Number of 1 Bits
/* Given a positive integer n, write a function that returns the number of set bits in its binary representation (also known as the Hamming weight). */

#include<iostream>
#include<vector>
using namespace std;

int hammingWeight(int n){
    int ans=0;
    while(n>0){
        ans+=n%2;
        n/=2;
    }
    return ans;
}

int main(){
    int n = 10;
    cout << hammingWeight(n);
    return 0;
}