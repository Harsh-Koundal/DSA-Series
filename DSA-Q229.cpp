// Sort Colors

/*
Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.

We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.

You must solve this problem without using the library's sort function.
*/


#include<iostream>
#include<vector>
using namespace std;

vector<int> sortColors(vector<int>& nums){
    for(int i=0;i<nums.size();i++){
        for(int j=i+1;j<nums.size();j++){
            if(nums[i] > nums[j]){
                swap(nums[i],nums[j]);
            }
        }
    }
    return nums;
}

int main(){
    vector<int> nums = {2,0,2,1,1,0};
    for(int x : sortColors(nums))
    cout << x << " ";
    return 0;
}