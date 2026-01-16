// Find N Unique Integers Sum up to Zero

/*
Given an integer n, return any array containing n unique integers such that they add up to 0.
*/

#include<iostream>
#include<vector>
using namespace std;

vector<int> sumZero(int n){
    vector<int> res;
    for(int i=1;i<=n/2;i++){
        res.push_back(i);
        res.push_back(-i);
    }
    if(n%2==1) res.push_back(0);
    return res;
}

int main(){
    int n=5;
    for(int x : sumZero(n)){
        cout << x << " ";
    }
    return 0;
}