// Most Frequent Number Following Key In an Array

/*
You are given a 0-indexed integer array nums. You are also given an integer key, which is present in nums.

For every unique integer target in nums, count the number of times target immediately follows an occurrence of key in nums. In other words, count the number of indices i such that:

0 <= i <= nums.length - 2,
nums[i] == key and,
nums[i + 1] == target.
Return the target with the maximum count. The test cases will be generated such that the target with maximum count is unique.
*/

#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int mostFrequent(vector<int>& nums,int key){
    unordered_map<int,int> freq;
    int count =0;
    for(int i=0;i<nums.size()-1;i++){
        if(nums[i]==key)
        freq[nums[i+1]]++;
    }

    int ans = -1;
    for(auto x : freq){
       if(x.second > count){
        count = x.second;
        ans =x.first;
       }
    }
    return ans;
}

int main(){
    vector<int> nums = {1,100,200,1,100};
    int key = 1;

    cout << mostFrequent(nums,key);
    return 0;
}