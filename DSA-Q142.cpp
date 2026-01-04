// Contains Duplicate

/*
Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.
*/

#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

bool containsDuplicate(vector<int>& nums){
    unordered_set<int> seen;
    for(int x : nums){
        if(!seen.insert(x).second) return true;
    }
    return false;
}

int main(){
    vector<int> nums = {1,2,3,1};
    if(containsDuplicate(nums)){
        cout << "true";
    }else{
        cout << "false";
    }
    return 0;
}