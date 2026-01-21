// Count Elements With Strictly Smaller and Greater Elements

/*
Given an integer array nums, return the number of elements that have both a strictly smaller and a strictly greater element appear in nums.
*/


#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int countElements(vector<int>& nums){
    sort(nums.begin(),nums.end());
    int mini = nums[0];
    int maxi = nums[nums.size()-1];
    int count = 0;

    for(int i=1;i<nums.size()-1;i++){
        if(nums[i]>mini && nums[i] < maxi){
            count++;
        }
    }
    return count;
}

int main(){
    vector<int> nums = {11,7,2,15};
    cout << countElements(nums);

    return 0;
}