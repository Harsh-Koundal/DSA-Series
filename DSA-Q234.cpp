// Trionic Array I

/*
You are given an integer array nums of length n.

An array is trionic if there exist indices 0 < p < q < n − 1 such that:

nums[0...p] is strictly increasing,
nums[p...q] is strictly decreasing,
nums[q...n − 1] is strictly increasing.
Return true if nums is trionic, otherwise return false.
*/


#include<iostream>
#include<vector>
using namespace std;

bool isTrionic(vector<int>& nums) {
    int n = nums.size();
    if (n < 4) return false;

    int i = 1;

    // increasing
    while (i < n && nums[i] > nums[i - 1]) i++;
    if (i == 1 || i == n) return false;

    // decreasing
    while (i < n && nums[i] < nums[i - 1]) i++;
    if (i == n) return false;

    // increasing again
    while (i < n && nums[i] > nums[i - 1]) i++;

    return i == n;
}

int main(){
    vector<int> nums = {1,3,5,4,2,6};
    cout << (isTrionic(nums) ? "true": "false");
    return 0;
}