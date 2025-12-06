// Problem : Given two integers dividend and divisor, divide two integers without using multiplication, division, and mod operator.

#include<iostream>
using namespace std;

int divide(int dividend, int divisor){
    bool negative = false;
    if((dividend <0 && divisor >0) || (dividend > 0 && divisor <0)){
        negative = true;
    }
    long long a = dividend;
    long long b = divisor;

    a = abs(a);
    b = abs(b);

    int count =0;

    while(a >= b){
        a = a-b;
        count++;
    }
    if(negative) return -count;
    return count;
}

int main(){
    int dividend = 10;
    int divisor = 2;
    cout << divide(dividend,divisor);
    return 0;
}    