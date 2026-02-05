// Two Sum 

/*
Given an array of integers nums and an integer target, 
return indices of the two numbers such that they add up to 
target.

You may assume that each input would have exactly one 
solutions, and you may not use the same element twice.

You can return the answer in any order
*/

#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target){
    unordered_map<int,int> mp;
    
    for(int i=0;i<nums.size();i++){
        int complement = target - nums[i];

        if(mp.find(complement) != mp.end()){
            return {mp[complement],i};
        }
        mp[nums[i]] = i;
    }
    return {};
}

int main(){
    vector<int> nums = {2,7,11,15};
    int target = 9;

    for(int x : twoSum(nums,target))
    cout << x << " ";

    return 0;
}