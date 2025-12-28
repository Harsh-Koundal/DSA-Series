// Remove Duplicates from Sorted Array

/*
Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once. The relative order of the elements should be kept the same.
*/

#include<iostream>
#include<vector>
using namespace std;

int removeDuplicates(vector<int>& nums){
    if(nums.size()==0) return 0;
    int idx=1;
    for(int i=1;i<nums.size();i++){
        if(nums[i]!=nums[i-1]){
            nums[idx]=nums[i];
            idx++;
        };
    }
    return idx;
}

int main(){
    vector<int> nums = {1,1,2,2,3,3,4,4};
    cout << removeDuplicates(nums);
    return 0;
}