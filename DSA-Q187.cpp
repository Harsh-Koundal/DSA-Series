// Find Target Indices After Sorting Array

/*
You are given a 0-indexed integer array nums and a target element target.

A target index is an index i such that nums[i] == target.

Return a list of the target indices of nums after sorting nums in non-decreasing order. If there are no target indices, return an empty list. The returned list must be sorted in increasing order.
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> targetIndices(vector<int>& nums,int target){
    vector<int> res;
    sort(nums.begin(),nums.end());
    
    for(int i=0;i<nums.size();i++){
        if(nums[i]==target){
            res.push_back(i);
        }
    }
    return res;
}

int main(){
    vector<int> nums = {1,2,5,2,3};
    int target = 2;
    for(int x : targetIndices(nums,target))
    cout << x << " ";

    return 0;
}