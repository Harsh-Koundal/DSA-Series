// Problem : Implement pow(x, n), which calculates x raised to the power n (i.e., xn).

#include<iostream>
using namespace std;

double myPow(double x ,int n){
    if(n==0) return 1.0;
    double half = myPow(x,n/2);
    if(n%2==0){
        return half * half;
    }else{
        if(n>0){
            return half * half * x;
        }else{
            return half * half /x;
        }
    }
    return 1.0;
}

int main(){
    double x = 2.00000;
    int n = -2;
    cout << myPow(x,n);
    return 0;
}