// Problem : Decimal to Binary

#include<iostream>
#include<vector>
using namespace std;

string decimalToBinary(int n){
    if (n == 0) return "0";
    string ans="";
    while(n>0){
        char bit = (n%2)+'0';
        ans+=bit;
        n/=2;
    }

    return ans;
}

int main(){
    int n = 2;
    cout << decimalToBinary(n);
    return 0;
}