// Remove Duplicates from Sorted Array II

/*
Given an integer array nums sorted in non-decreasing order, remove some duplicates in-place such that each unique element appears at most twice. The relative order of the elements should be kept the same.
*/

#include<iostream>
#include<vector>
using namespace std;

int removeDuplicates(vector<int>& nums){
    if (nums.size() <= 2) return nums.size();
    int idx=2;
    for(int i=2;i<nums.size();i++){
        if(nums[i]!=nums[idx-2]){
            nums[idx] = nums[i];
            idx++;
        }
    }
    return idx;
}

int main(){
    vector<int> nums = {1,1,1,2,2,3};
    cout << removeDuplicates(nums);
    return 0;
}