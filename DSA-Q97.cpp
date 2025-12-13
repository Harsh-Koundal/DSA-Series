// Problem : Add Digits 

#include<iostream>
#include<vector>
using namespace std;

int addDigits(int num){
    while(num>=10){
        int s=0;
        while(num>0){
            s +=num%10;
            num /=10;
        }
        num = s;
    }
    return num;
}

int main(){
    int num = 38;
    cout << addDigits(num);
    return 0;
}