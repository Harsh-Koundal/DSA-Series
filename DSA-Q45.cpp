// Calculate sum of numbers from 1 to N 

#include<iostream>
using namespace std;

int sum(int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum +=i;
    }
    return sum;
}

int main(){
    cout<<"sum of 10 number is: " <<sum(10)<<endl;
}
