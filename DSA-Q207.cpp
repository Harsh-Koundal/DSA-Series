// Longest Harmonious Subsequence 

/*
We define a harmonious array as an array where the difference between its maximum value and its minimum value is exactly 1.

Given an integer array nums, return the length of its longest harmonious subsequence among all its possible subsequences
*/

#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int findLHS(vector<int>& nums){
    unordered_map<int,int> freq;

    for(int num : nums)
    freq[num]++;

    int ans = 0;

    for(auto x : freq){
        if(freq.count(x.first+1)){
            ans = max(ans,x.second+freq[x.first+1]);
        }
    }
    return ans;
}

int main(){
    vector<int> nums = {1,3,2,2,5,2,3,7};

    cout << findLHS(nums);
    return 0;
}