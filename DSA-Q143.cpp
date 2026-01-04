// Contains Duplicate II

/*
Given an integer array nums and an integer k, return true if there are two distinct indices i and j in the array such that nums[i] == nums[j] and abs(i - j) <= k.
*/

#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

bool containsNearbyDuplicate(vector<int>& nums,int k){
    unordered_map<int,int> lastIndex;
    for(int i=0;i<nums.size();i++){
        if(lastIndex.count(nums[i])){
            if(i-lastIndex[nums[i]]<=k) return true;
        }
        lastIndex[nums[i]] =i;
    }
    return false;
}

int main(){
    vector<int> nums = {1,2,3,1};
    int k = 3;
    if(containsNearbyDuplicate(nums,k)){
        cout << "true";
    }else{
        cout << "false";
    }
    return 0;

}