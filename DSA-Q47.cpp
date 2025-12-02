//  Decimal to Binary

#include<iostream>
using namespace std;

int decToBin(int n){
    int result=0,pow =1;
    while(n>0){
        int rem = n%2;
        n/=2;

        result += (rem * pow);
        pow *= 10; 
    }
    return result;
}

int main (){
    cout << decToBin(9);
}