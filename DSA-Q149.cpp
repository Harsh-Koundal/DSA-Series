// Partition Equal Subset Sum 

/*
Given an integer array nums, return true if you can partition the array into two subsets such that the sum of the elements in both subsets is equal or false otherwise.
*/

#include<iostream>
#include<vector>
using namespace std;

bool canPartition(vector<int>& nums){
    int sum =0;
    for(int num : nums) sum+=num;

    // if sum is odd, cannot split equally
    if(sum%2 != 0) return false;

    int target = sum/2;

    vector<bool> dp(target+1,false);
    dp[0] = true;
    
    for(int num : nums){
        for(int j = target;j>=num;j--){
            dp[j] = dp[j] || dp[j-num];
        }
    }
    return dp[target];
}

int main(){
    vector<int> nums = {1,5,11,5};
    if(canPartition(nums)){
        cout << "true";
    }else{
        cout << "false";
    }
    return 0;
}