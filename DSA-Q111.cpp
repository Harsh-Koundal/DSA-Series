//  Reverse Bits

#include<iostream>
using namespace std;

int reverseBits(int n){
    unsigned int x = (unsigned int)n;
    unsigned int res = 0;

    for(int i=0;i<32;i++){
        res = (res << 1) | (x & 1);
        x >>= 1;
    }

    return (int)res;
}

int main(){
    int n = 43261596;
    cout << reverseBits(n);
    return 0;
}
