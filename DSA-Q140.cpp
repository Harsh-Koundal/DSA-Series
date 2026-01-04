//  Minimum Size Subarray Sum 

/*
Given an array of positive integers nums and a positive integer target, return the minimal length of a subarray whose sum is greater than or equal to target. If there is no such subarray, return 0 instead
*/

#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int minSubArrayLen(int target,vector<int>& nums){
    int left=0,n=nums.size();
    int minLen=INT_MAX,sum=0;

     for (int right = 0; right < n; right++) {
        sum += nums[right];
        while(sum>=target){
            minLen = min(minLen,right-left+1);
            sum -=nums[left];
            left++;
        }
    }
    return (minLen == INT_MAX) ? 0 : minLen;


}

int main(){
    vector<int> nums = {2,3,1,2,4,3};
    int target = 7;
    cout << minSubArrayLen(target,nums);
    return 0;
}