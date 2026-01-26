// Maximize Sum Of Array After K Negations

/*
Given an integer array nums and an integer k, modify the array in the following way:

choose an index i and replace nums[i] with -nums[i].
You should apply this process exactly k times. You may choose the same index i multiple times.

Return the largest possible sum of the array after modifying it in this way.
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int largestSumAfterKNegations(vector<int>& nums, int k){
    sort(nums.begin(),nums.end());

    for(int i=0;i<nums.size() && k > 0;i++){
        if(nums[i]<0){
            nums[i] = -nums[i];
            k--;
        }
    }
    sort(nums.begin(),nums.end());

    if(k%2==1){
        nums[0] =-nums[0];
    }

    int sum =0;
    for(int x : nums) sum +=x;
    return sum;
}

int main(){
    vector<int> nums = {4,2,3};
    int k = 1;

    cout << largestSumAfterKNegations(nums,k);
    return 0;
}