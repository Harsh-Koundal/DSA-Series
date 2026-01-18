// Check if Array is Sorted and Rotated

/*
Given an array nums, return true if the array was originally sorted in non-decreasing order, then rotated some number of positions (including zero). Otherwise, return false.

There may be duplicates in the original array.

Note: An array A rotated by x positions results in an array B of the same length such that B[i] == A[(i+x) % A.length] for every valid index i.
*/


#include<iostream>
#include<vector>
using namespace std;

bool check(vector<int>& nums){
    int n = nums.size();
    int count = 0;

    for(int i=0;i<n;i++){
        if(nums[i] > nums[(i+1)%n]){
            count++;
        }
        if(count > 1) return false;
    }
    return true;
}

int main(){
    vector<int> nums = {3,4,5,1,2};
    cout << (check(nums) ? "true" : false);
    return 0;
}