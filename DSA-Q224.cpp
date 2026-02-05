// Minimum Difference Between Highest and Lowest of K Scores 

/*
You are given a 0-indexed integer array nums, where nums[i] represents the score of the ith student. You are also given an integer k.

Pick the scores of any k students from the array so that the difference between the highest and the lowest of the k scores is minimized.

Return the minimum possible difference.
*/

#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

int minDifference(vector<int>& nums,int k){
    if(k==0) return 0;

    sort(nums.begin(),nums.end());

    int ans = INT_MAX;

    for(int i=0;i+k-1<nums.size();i++){
        ans = min(ans,nums[i+k-1] - nums[i]);
    }

    return ans;

}

int main(){
    vector<int> nums = {9,4,1,7};
    int k = 2;
    cout << minDifference(nums,k);

    return 0;
}