// Running Sum of 1D Array

/*
Given an array nums. We define a running sum of an array as runningSum[i] = sum(nums[0]…nums[i]).

Return the running sum of nums.
*/

#include<iostream>
#include<vector>
using namespace std;

vector<int> runningSum(vector<int>& nums){
    vector<int> res(nums.size());
    res[0] = nums[0];
    for(int i=1;i<nums.size();i++){
        res[i] = res[i-1]+nums[i];
    }
    return res;
}

int main(){
    vector<int> nums = {1,2,3,4};
    for(int x : runningSum(nums)){
        cout << x << " ";
    }
    return 0;
}