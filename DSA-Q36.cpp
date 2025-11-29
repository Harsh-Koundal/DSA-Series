// Problem: Given an array and a target value, return the index where the target is found.If it's not found, return -1.

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr = {0, 20, 30, 40, 50};
    int target = 40;
    int idx = -1;

    for (int i = 0; i < arr.size(); i++){
        if(arr[i]==target){
            idx = i;
            break;
        }
    }
    cout << "Target index is :" << idx;

    return 0;
}