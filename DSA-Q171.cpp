// Make Two Arrays Equal by Reversing Subarrays

/*
You are given two integer arrays of equal length target and arr. In one step, you can select any non-empty subarray of arr and reverse it. You are allowed to make any number of steps.

Return true if you can make arr equal to target or false otherwise.
*/

#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

bool canBeEqual(vector<int>& target,vector<int>& arr){
    unordered_map<int,int> freq;
    for(int x : target) freq[x]++;
    for(int x : arr) freq[x]--;
    for(auto p : freq) {
        if(p.second != 0) return false;
    }

    return true;
}

int main(){
    vector<int> target = {1,2,3,4} , arr = {2,4,1,3};
    cout << (canBeEqual(target,arr)?"true":"false");
    return 0;
}