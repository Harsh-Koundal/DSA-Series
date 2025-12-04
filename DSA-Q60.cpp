// Problem: Range Sum Query using Prefix Sum

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr = {2, 4, 1, 3, 5};
    int newArr = 0;
    vector<int> sa(arr.size());

    for(int i=0;i<arr.size();i++){
        newArr +=arr[i];
        sa[i] = newArr;

    }
    for(int x : sa){
        cout <<" "<< x;
    }
    return 0;
}