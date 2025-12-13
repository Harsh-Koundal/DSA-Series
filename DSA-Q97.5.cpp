// Problem : Add Digits With Math trick

#include<iostream>
#include<vector>
using namespace std;

int addDigits(int num){
    if(num==0) return 0;
    return 1+(num-1)%9;
}

int main(){
    int num = 38;
    cout << addDigits(num);
    return 0;
}