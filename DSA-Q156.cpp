// Maximum Product of Three Numbers

/*
Given an integer array nums, find three numbers whose product is maximum and return the maximum product.
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int maximumProduct(vector<int>& nums){
    sort(nums.begin(),nums.end());
    int n = nums.size();

    int case1 = nums[n-1]*nums[n-2]*nums[n-3];
    int case2 = nums[0]*nums[1]*nums[n-1];

    return max(case1,case2);
}

int main(){
    vector<int> nums = {1,2,3,4};
    cout << maximumProduct(nums);
    return 0;
}